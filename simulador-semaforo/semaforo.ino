int led_verde = 2;  //SEMAFORO EN VERDE PARA VEHICULOS
int led_amarillo = 3;// SEMAFORO EN NARANJA PARA VEHICULOS
int led_rojo = 4; //SEMAFORO EN ROJO PARA VEHICULOS

int led_verde_peatones = 8;
int sonido_peatones = 9;

int i=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verde_peatones, OUTPUT);
  pinMode(sonido_peatones, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_verde, HIGH);
  digitalWrite(led_amarillo, LOW);
  digitalWrite(led_rojo, LOW);
  digitalWrite(led_verde_peatones, LOW);
  digitalWrite(sonido_peatones, LOW);
  delay(5000);
   // put your main code here, to run repeatedly:
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarillo, HIGH);
  digitalWrite(led_rojo, LOW);
  digitalWrite(led_verde_peatones, LOW);
  digitalWrite(sonido_peatones, LOW);
  delay(5000);
   // put your main code here, to run repeatedly:
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarillo, LOW);
  digitalWrite(led_rojo, HIGH);
  digitalWrite(led_verde_peatones, HIGH);
  while( i < 10){
    digitalWrite(sonido_peatones, HIGH);
    delay(500);
    i++;
    digitalWrite(sonido_peatones,LOW);
    delay(500);
  }
  i=0;
}
