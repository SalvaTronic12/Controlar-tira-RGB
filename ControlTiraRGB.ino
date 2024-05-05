int azul = 9;
int verde = 10;
int rojo = 11;


void setup() {
Serial.begin(9600);
pinMode(azul,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(rojo,OUTPUT);

}

void loop() 
{
  
Rojo();
delay(1500);
Verde();
delay(1500);
Azul();
delay(1500);
Magenta();
delay(1500);
Cyan();
delay(1500);
Amarillo();
delay(1500);
Blanco();
delay(1500);


secuencia();


}




void Rojo(){
analogWrite(azul,0);
analogWrite(verde,0);
analogWrite(rojo,255);
}


void Verde(){
analogWrite(azul,0);
analogWrite(verde,255);
analogWrite(rojo,0);
}
void Azul(){
analogWrite(azul,255);
analogWrite(verde,0);
analogWrite(rojo,0);
}
void Magenta(){
analogWrite(azul,255);
analogWrite(verde,0);
analogWrite(rojo,255);
}
void Cyan(){
analogWrite(azul,255);
analogWrite(verde,255);
analogWrite(rojo,0);  
}
void Amarillo(){
analogWrite(azul,0);
analogWrite(verde,255);
analogWrite(rojo,255);
}
void Blanco(){
analogWrite(azul,255);
analogWrite(verde,255);
analogWrite(rojo,255);
}
void secuencia(){
  for(int i =0; i<=255;i++){// encender azul
    analogWrite(azul,i);
    analogWrite(verde,0);
    analogWrite(rojo,0);
    delay(10);
  }
   for(int e =255; e>=0;e--){// apagar azul
    analogWrite(azul,e);
    analogWrite(verde,0);
    analogWrite(rojo,0);
    delay(10);
  }

  for(int a =0; a<=255;a++){//encender verde
    analogWrite(azul,0);
    analogWrite(verde,a);
    analogWrite(rojo,0);
    delay(10);
  }
   for(int b=255; b>=0;b--){// apagar verde
    analogWrite(azul,0);
    analogWrite(verde,b);
    analogWrite(rojo,0);
    delay(10);
  }

  for(int c =0; c<=255;c++){// encender rojo
    analogWrite(azul,0);
    analogWrite(verde,0);
    analogWrite(rojo,c);
    delay(10);
  }
   for(int d =255; d>=0;d--){// apagar rojo
    analogWrite(azul,0);
    analogWrite(verde,0);
    analogWrite(rojo,d);
    delay(10);
  }
  
}
