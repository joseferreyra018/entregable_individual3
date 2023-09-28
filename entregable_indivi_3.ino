const int ledPin = 13; // Pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar el pin del LED como salida
}

void loop() {
  for (int i = 0; i < 1000; i++) { // Ejecutar el bucle 1000 veces
    digitalWrite(ledPin, HIGH); // Encender el LED
    delay(1); // Esperar 1 milisegundo
    digitalWrite(ledPin, LOW); // Apagar el LED
    delay(10000); // Esperar 1 milisegundo
  }
}
