/* Juego de 6 leds empleado ciclos 
 *  for y subrutinas
 */
int leds [6]={8,9,10,11,12,13}; //declaracion de vector
int contador=0;
int contador_1=0;
void setup() {
  // put your setup code here, to run once:
 // configuraciones
 pinMode(8,OUTPUT); //declarar pin como salida
 pinMode (9,OUTPUT); 
  pinMode(10,OUTPUT); //declarar pin como salida
 pinMode (11,OUTPUT); 
  pinMode(12,OUTPUT); //declarar pin como salida
 pinMode (13,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
 luces();
 delay(500);
 luces_1();
 delay(500);
}

void luces (){
    for(;contador<6;contador++){
    digitalWrite(leds[contador],HIGH);
    delay(300);
    digitalWrite(leds[contador],LOW);
     delay(300);
    }
    contador=0;
  }

 void luces_1(){
   for(;contador_1<6;contador_1++){
      digitalWrite(leds[contador_1],HIGH);
      delay(300);
    }
    for(;contador_1>=0;contador_1--){
      digitalWrite(leds[contador_1],LOW);
      delay(300);
    }
  }
