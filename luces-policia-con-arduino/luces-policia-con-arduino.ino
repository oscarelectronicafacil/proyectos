/*
**********Police LED Light Bar************
Edited by: Hayri Başbuğ Uygur
******************************************
*/

const int patternCount = 30;
int LED1=4;
int LED2=5;
int LED3=6;
int LED4=7;
int LED5=8;
int LED6=9;
int LED7=10;
int LED8=11;
int LED9=14;
int LED10=2;
int LED11=12;
int LED12=13;
int LED13=14;
int LED14=3;
int buttonPin=2;
static unsigned long lastButtonTime = 0;


void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);  // set each LED to pins
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
  pinMode(LED10,OUTPUT);
  pinMode(LED11,OUTPUT);
  pinMode(LED12,OUTPUT);
  pinMode(LED13,OUTPUT);
  pinMode(LED14,OUTPUT);
  
  pinMode(buttonPin,INPUT);
  
}


void loop()
    { 
    static int pattern = 1;  
//  If the button is down and the last time it went down was more than 1/10th second ago.
//   if (digitalRead(buttonPin) && (millis() - lastButtonTime) > 1000)
    
//        {
//        lastButtonTime = millis();
        
//        pattern = (pattern + 1) % patternCount;
        
//        }
    
    switch (pattern)
        {
  
      
    case 1: 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED11,HIGH);
   digitalWrite(LED12,HIGH);
   digitalWrite(LED13,HIGH);
   digitalWrite(LED14,HIGH);
   delay(60);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   digitalWrite(LED11,LOW);
   digitalWrite(LED12,LOW);
   digitalWrite(LED13,LOW);
   digitalWrite(LED14,LOW);
   delay(60);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(60);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(60);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(60);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(60);
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(60);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(60);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(60);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(60);
    digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(60);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(60);
    break;
    
    case 2:
     digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
  break;
    
    case 3: 
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
   
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);                            
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH); 
   digitalWrite(LED2,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    break;
    
    
    case 4: 
  digitalWrite(LED5,HIGH);     // Turn the LED on   
  digitalWrite(LED6,HIGH);      // Turn LED off
  delay(150);                  // Wait 25 ms
 
  digitalWrite(LED4,HIGH);    // Turno LED1 on
  digitalWrite(LED7,HIGH);     // Turn LED1 off
  delay(150);                  // Wait 25 ms
 
  digitalWrite(LED3,HIGH);     // Turn the LED on   
  digitalWrite(LED8,HIGH);      // Turn LED off
  delay(150);                  // Wait 25 ms
 
  digitalWrite(LED2,HIGH);    // Turno LED1 on
  digitalWrite(LED9,HIGH);     // Turn LED1 off
  delay(150);                  // Wait 25 ms
  
  digitalWrite(LED1,HIGH);     // Turn the LED on   
  digitalWrite(LED10,HIGH);      // Turn LED off
  delay(150);                  // Wait 25 ms
  
  digitalWrite(LED1,LOW);     // Turn the LED on   
  digitalWrite(LED2,LOW);      // Turn LED off                  
  digitalWrite(LED3,LOW);    // Turno LED1 on
  digitalWrite(LED4,LOW);     // Turn LED1 off
  digitalWrite(LED5,LOW);     // Turn the LED on   
  digitalWrite(LED6,LOW);      // Turn LED off
  digitalWrite(LED7,LOW);    // Turno LED1 on
  digitalWrite(LED8,LOW);     // Turn LED1 off
  digitalWrite(LED9,LOW);     // Turn the LED on   
  digitalWrite(LED10,LOW);      // Turn LED off
  delay(150);
    break;
    
    
    case 5:  
    
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(75);
   
   
   
          
    break;
    
    
    case 6: 
     digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(75);     
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
    //*********************3 times***************************************    
 
    break;
    
    //****************************************************6. PROGRAM**************************************************************************
    
    case 7:
      digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED5,LOW);  
   digitalWrite(LED6,LOW);  
   delay(50);
   
  
  
  
  digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
     digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50); 
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);                            
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   delay(50);       
   
   break;
   
   case 8:
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   
   
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   //********3 times*******
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
    digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
    digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   
    
   
  
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
      
   break; 
 
   case 9:
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   
    digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   delay(50); 
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   delay(50);
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW); 
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED9,LOW);  
   digitalWrite(LED10,LOW);  
   break;
     
     
     case 10:
     
       
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED9,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
    digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
    digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);
   delay(50);
 break;   
 
 case 11:
  digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(75);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(75);
  
   //*********************3 times***************************************
   
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
     
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
    
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(75);
   break;
   
   case 12:
     digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
    
    
   digitalWrite(LED9,HIGH); 
   delay(75);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED7,HIGH);
   delay(75);  
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED5,HIGH); 
   delay(75); 
   digitalWrite(LED4,HIGH);
   delay(75);
   digitalWrite(LED3,HIGH);  
   delay(75);
   digitalWrite(LED2,HIGH); 
   delay(75); 
   
   digitalWrite(LED2,LOW);
   delay(75);
   digitalWrite(LED3,LOW);  
   delay(75);
   digitalWrite(LED4,LOW); 
   delay(75);
   digitalWrite(LED5,LOW);  
   delay(75);
   digitalWrite(LED6,LOW);
   delay(75);
   digitalWrite(LED7,LOW);
   delay(75);  
   digitalWrite(LED8,LOW);
   delay(75);
   digitalWrite(LED9,LOW);
   delay(75);  
   
    digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   delay(50);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   delay(50);
   break;
   
   case 13:
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(75);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(75);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(75); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(75);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(75);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(75);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW); 
   break;
   
   case 14:
     digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(50);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(50);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(50);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(50); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(50);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(50);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(50);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(50);
   digitalWrite(LED1,LOW); 
   break;
   
   case 15:
   digitalWrite(LED10,HIGH);
   delay(25);
   digitalWrite(LED10,LOW);
   
   digitalWrite(LED9,HIGH); 
   delay(25);
   digitalWrite(LED9,LOW);
  
   digitalWrite(LED8,HIGH);
   delay(25);
   digitalWrite(LED8,LOW);
   
   digitalWrite(LED7,HIGH);
   delay(25);  
   digitalWrite(LED7,LOW);
   
   digitalWrite(LED6,HIGH); 
   delay(25);
   digitalWrite(LED6,LOW);
   
   digitalWrite(LED5,HIGH); 
   delay(25); 
   digitalWrite(LED5,LOW);  
   
   digitalWrite(LED4,HIGH);
   delay(25);
   digitalWrite(LED4,LOW); 
   
   digitalWrite(LED3,HIGH);  
   delay(25);
   digitalWrite(LED3,LOW);  
   
   digitalWrite(LED2,HIGH); 
   delay(25);
   digitalWrite(LED2,LOW);
  
   digitalWrite(LED1,HIGH); 
   delay(25);
   digitalWrite(LED1,LOW); 
   break;
   
   case 16:
    digitalWrite(LED1,HIGH);
   digitalWrite(LED10,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   digitalWrite(LED1,HIGH);
   digitalWrite(LED10,HIGH); 
   delay(75);
   digitalWrite(LED1,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   
   
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED5,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   digitalWrite(LED5,LOW);  
   delay(75);
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED5,HIGH); 
   delay(75);
   digitalWrite(LED6,LOW);
   digitalWrite(LED5,LOW);  
   delay(75);
   break;
   
   case 17:
   digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
   digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(300);
  
  break;
  
  case 18:
   digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  digitalWrite(LED7,HIGH);
  digitalWrite(LED8,HIGH);
  digitalWrite(LED9,HIGH);
  digitalWrite(LED10,HIGH);
  delay(50);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(50);
  
   digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  digitalWrite(LED7,LOW);
  digitalWrite(LED8,LOW);
  digitalWrite(LED9,LOW);
  digitalWrite(LED10,LOW);
  delay(200);
  break;
  
  case 19:
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(200);
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(200);
   break;
   
   case 20:
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(50);
   
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   digitalWrite(LED5,LOW);
   delay(100);
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED6,HIGH);  
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED6,LOW);  
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(100);
   break;
   
   case 21:
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   delay(75);
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED6,HIGH);
   digitalWrite(LED8,HIGH);
   digitalWrite(LED9,HIGH);
   delay(75);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED6,LOW);
   digitalWrite(LED8,LOW);
   digitalWrite(LED9,LOW);
   delay(75);
   
   
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED10,LOW);
   delay(75);
    
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED7,LOW); 
   digitalWrite(LED10,LOW);
   delay(75);
  break;
  case 22:
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(50);
   
   
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(50);
   break;
   case 23:
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   digitalWrite(LED3,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED5,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(75);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED5,LOW); 
   digitalWrite(LED9,LOW);
   digitalWrite(LED10,LOW);
   delay(75);
   
   
   
   
   //*********************3 times***************************************
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(75);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED6,HIGH); 
   digitalWrite(LED7,HIGH);
   digitalWrite(LED8,HIGH);
   delay(75);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED6,LOW); 
   digitalWrite(LED7,LOW);
   digitalWrite(LED8,LOW);
   delay(75);
   
   case 24:
     digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   break;
   
   case 25:
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED7,HIGH); 
   digitalWrite(LED8,HIGH);
   delay(50);
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW);  
   delay(50); 
  
  
   
   //*********************3 times***************************************
   
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED3,LOW);  
   digitalWrite(LED4,LOW);  
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   break;
   
   case 26:
     digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(50);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED3,HIGH);
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED9,HIGH);
   delay(50);  
   digitalWrite(LED1,LOW);  
   digitalWrite(LED3,LOW);
   digitalWrite(LED7,LOW);  
   digitalWrite(LED9,LOW); 
   delay(50);
  
  
   //*********************3 times***************************************
   
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(50);
     
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED4,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED10,HIGH);
   delay(50);
   digitalWrite(LED2,LOW);  
   digitalWrite(LED4,LOW); 
   digitalWrite(LED8,LOW);  
   digitalWrite(LED10,LOW);
   delay(50);
   break;
   
   case 27:
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  //*********************1 times***************************************
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
     
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   delay(50);
  digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   
   digitalWrite(LED1,HIGH);  
   digitalWrite(LED2,HIGH);  
   digitalWrite(LED3,HIGH); 
   digitalWrite(LED4,HIGH);
   
   delay(50);
   digitalWrite(LED1,LOW);  
   digitalWrite(LED2,LOW);  
   digitalWrite(LED3,LOW); 
   digitalWrite(LED4,LOW); 
   
   
      
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
    
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
     
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
    
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
    
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   
   digitalWrite(LED7,HIGH);  
   digitalWrite(LED8,HIGH); 
   digitalWrite(LED9,HIGH);
   digitalWrite(LED10,HIGH);
   delay(50);
   
   digitalWrite(LED7,LOW);  
   digitalWrite(LED8,LOW); 
   digitalWrite(LED9,LOW); 
   digitalWrite(LED10,LOW);
   delay(50);
   break;
   }
    }
