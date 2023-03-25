#include <Arduino.h>

int numero = 10;

void duplicar(int *punteroNumero) {
  *punteroNumero = *punteroNumero * 2 ;
  Serial.print("En duplicar(): punteroNumero = ");
  Serial.println(*punteroNumero);
}

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}

void loop() {
  Serial.print("En loop(): numero = ");
  Serial.println(numero);
  duplicar( &numero );
  char institucion[] = { 'J','A','I','M','E','\n'} ;
  for (int i=0 ; i < 6 ; i++) {
    Serial.print( institucion[i] );
  }
  for (int i=0 ; i < 6 ; i++) {
    Serial.print( *(institucion + i) );
  }
  for (int i=0 ; i < 6 ; i++) {
    Serial.print( *( institucion + i * sizeof(char)) );
  }
  Serial.flush();
  exit(0);
}