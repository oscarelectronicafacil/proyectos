#include "Wire.h"
#include "LiquidCrystal.h"
#define DS3231_I2C_ADDRESS 0x68
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int estadoActual = 0;
int estadoUltimo = 0;
int contador = 0;
int MenosAnterior =0;
int estadoMas = 0;
int estadoMenos = 0;
int MasAnterior =0;

byte decToBcd(byte val){
  return ( (val/10*16) + (val%10) );
}

byte bcdToDec(byte val){
  return ( (val/16*10) + (val%16) );
} 

void ConseguirFecha(byte *segundos,byte *minutos,byte *hora,byte *diaSemana,byte *diaMes,byte *mes,byte *year){
  Wire.beginTransmission(DS3231_I2C_ADDRESS);
  Wire.write(0);
  Wire.endTransmission();
 
  Wire.requestFrom(DS3231_I2C_ADDRESS, 7);
 
  *segundos     = bcdToDec(Wire.read() & 0x7f);
  *minutos      = bcdToDec(Wire.read());
  *hora         = bcdToDec(Wire.read() & 0x3f);
  *diaSemana    = bcdToDec(Wire.read());
  *diaMes       = bcdToDec(Wire.read());
  *mes          = bcdToDec(Wire.read());
  *year         = bcdToDec(Wire.read());
}
 
void VerFecha(){
    byte segundos, minutos, hora, diaSemana, diaMes, mes, year;
    String s, m, d, mth, h, mty;
     
    ConseguirFecha(&segundos, &minutos, &hora, &diaSemana, &diaMes, &mes, &year);
   
    if (segundos < 10) { s = "0" + String(segundos); } else { s = String(segundos); }
    if (minutos < 10) { m = "0" + String(minutos); } else { m = String(minutos); }
    h = String(hora);
    if (diaMes < 10) { d = "0" + String(diaMes); } else { d = String(diaMes); }
    if (mes < 10) { mth = "0" + String(mes); } else { mth = String(mes); }
    if (year < 10) { mty = "0" + String(year); } else { mty = String(year); }
     
    char* days[] = { "NA", "Lu", "Ma", "Mi", "Ju", "Vi", "Sa", "Do" };
     
    lcd.clear();
    lcd.noBlink();
    
    lcd.setCursor(4,0);
    
    lcd.print(h + ":" + m + ":" + s);
    
    lcd.setCursor(1,1);
    
    lcd.print(String(days[diaSemana]) + " " + d + "/" + mth + "/20" + mty);   
}

void modificar_tiempo(int tipo){
  byte segundos, minutos, hora, diaSemana, diaMes, mes, year;
  ConseguirFecha(&segundos, &minutos, &hora, &diaSemana, &diaMes, &mes, &year);
  Serial.println("presionado");
  int suma = 0;
  int resta = 0;

  if(estadoMenos != MenosAnterior){
    if(estadoMenos == HIGH){
      resta = 1;
    }
  }
  if(estadoMas != MasAnterior){
    if(estadoMas == HIGH){
      suma = 1;
    }
  }
  
  if(tipo == 1){ // modificar la hora
    String h;
    h = String(hora);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar hora");
    lcd.setCursor(0, 1);
    lcd.print(h); 
    lcd.blink();
    if(resta == 1){
      hora = hora-1;
    }
    if(suma == 1){
      hora = hora+1;
    }
    if(hora > 23) hora=0;  
  }

  if(tipo == 2){ // modificar los minutos
    String m;
    m = String(minutos);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar minutos");
    lcd.setCursor(0, 1);
    lcd.print(m); 
    lcd.blink();
    if(resta == 1){
      minutos = minutos-1;
    }
    if(suma == 1){
      minutos = minutos+1;
    }
    if(minutos > 59) minutos=0;  
  }

  if(tipo == 3){ // modificar el día de la semana
    String d;
    d = String(diaSemana);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar dia semana");
    lcd.setCursor(0, 1);
    lcd.print(d); 
    lcd.blink();
    if(resta == 1){
      diaSemana = diaSemana-1;
    }
    if(suma == 1){
      diaSemana = diaSemana+1;
    }
    if(diaSemana == 8) diaSemana=1;
    if(diaSemana == 0) diaSemana=7;  
  }

  if(tipo == 4){ // modificar el día del mes
    String m;
    m = String(diaMes);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar dia mes");
    lcd.setCursor(0, 1);
    lcd.print(m); 
    lcd.blink();
    if(resta == 1){
      diaMes = diaMes-1;
    }
    if(suma == 1){
      diaMes = diaMes+1;
    }
    if(diaMes == 32) diaMes=1;
    if(diaMes == 0) diaMes=31;  
  }

  if(tipo == 5){ // modificar mes
    String ms;
    ms = String(mes);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar mes");
    lcd.setCursor(0, 1);
    lcd.print(ms); 
    lcd.blink();
    if(resta == 1){
      mes = mes-1;
    }
    if(suma == 1){
      mes = mes+1;
    }
    if(mes == 13) mes=1;
    if(mes == 0) mes=12;  
  }

  if(tipo == 6){ // modificar año
    String a;
    a = String(year);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.write("Modificar año");
    lcd.setCursor(0, 1);
    lcd.print(a); 
    lcd.blink();
    if(resta == 1){
      year = year-1;
    }
    if(suma == 1){
      year = year+1;
    }
    if(year == 100) year=1;
    if(year == 0) year=99;  
  }
    
  Wire.beginTransmission(DS3231_I2C_ADDRESS);
  Wire.write(0);
  Wire.write(decToBcd(segundos));
  Wire.write(decToBcd(minutos));
  Wire.write(decToBcd(hora));
  Wire.write(decToBcd(diaSemana));
  Wire.write(decToBcd(diaMes));
  Wire.write(decToBcd(mes));
  Wire.write(decToBcd(year));
  Wire.endTransmission();
}

void setup(){
  byte segundos, minutos, hora, diaSemana, diaMes, mes, year;
  Wire.begin();
  lcd.begin(16, 2);
  //Serial.begin(9600);
  pinMode(6,INPUT);  // pulsador - menu
  pinMode(5,INPUT);  // pulsador - menos
  pinMode(4,INPUT);  // pulsador - mas
}
 
void loop(){
  estadoActual=digitalRead(6);
  estadoMenos=digitalRead(5);
  estadoMas=digitalRead(4);
  //Serial.println(estadoActual);
  if(estadoActual != estadoUltimo){
    if(estadoActual == HIGH){
      contador = contador +1;
      //Serial.println(contador);
    }
  }
  
  if(contador == 0){
    VerFecha();
    delay(1000);
  }else if(contador == 1){
    modificar_tiempo(1);  // modificar la hora
    delay(500);
  }else if(contador == 2){
    modificar_tiempo(2);  // modificar los minutos
    delay(500);
  }else if(contador == 3){
    modificar_tiempo(3);  // modificar dia de la semana
    delay(500);
  }else if(contador == 4){
    modificar_tiempo(4);  // modificar dias mes
    delay(500);
  }else if(contador == 5){
    modificar_tiempo(5);  // modificar mes
    delay(500);
  }else if(contador == 6){
    modificar_tiempo(6);  // modificar año
    delay(500);
  }else if(contador == 7){
    contador = 0;
    delay(1000);
  }
}
