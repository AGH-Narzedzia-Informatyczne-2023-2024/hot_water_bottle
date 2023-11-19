unsigned long ostatni_nacisk_trybu = 0;;
boolean tryb;

void zmiana_trybu(){
  boolean button = digitalRead(2);
  if ((millis() - ostatni_nacisk_trybu > 1000) && (button == 1)){
    ostatni_nacisk_trybu = millis();
    tryb = !tryb;
	}
  
  
}

void setup() {
pinMode(2, INPUT);
}

void loop() {
  zmiana_trybu();
}
