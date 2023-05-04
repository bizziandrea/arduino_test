#define buzzer 8
const int songspeed = 1;
#define Do4 262
#define Re4 294
#define Mi4 330
#define Fa4 349
#define Sol4 392
#define La4 440
#define Si4 494
#define Do5 523
#define Re5 587
#define Mi5 659
#define Fa5 698 
#define Sol5 784
#define La5 880
#define Si5 988

int notes[] = {
Re4, 0, Re4, 0, Mi4, 0, Re4, 0, // 8
Si4, 0, Si4, 0, Do5, 0, Si4, 0, // 16 
Si4, 0, Re5, 0, Do5, 0, Si4, 0, // 24 
La4, 0, Si4, 0, La4, 0, Sol4, 0, // 32
Re4, 0, Re4, 0, Mi4, 0, Re4, 0, // 40
Si4, 0, Si4, 0, Do5, 0, Si4, 0, // 48
Si4, 0, Re5, 0, Do5, 0, Si4, 0, // 56
La4, 0, Si4, 0, La4, 0, Sol4, 0, // 64
Si4, 0, Si4, 0, Fa4, 0, // 70
Sol4, 0, La4, 0, Sol4, 0, Fa4, 0, Mi4, 0, // 80
Sol4, 0, Fa4, 0, Sol4, 0, La4, 0, // 88
Re4, 0, Si4, 0, Do5, 0, // 94
};


//**************************************************+
int duration [] = {
750, 100, 750, 100, 750, 50, 750, 50, //8
750, 100, 750, 100, 750, 50, 750, 100, //16
750, 100, 750, 100, 750, 50, 750, 50, // 24 
750, 100, 750, 100, 750, 50, 750, 100, // 32
750, 100, 750, 100, 750, 50, 750, 50, // 40
750, 100, 750, 100, 750, 50, 750, 100, // 48
750, 100, 750, 100, 750, 50, 750, 50, // 56
750, 100, 750, 100, 750, 50, 750, 100, // 64
750, 100, 750, 100, 1400, 50, // 70  
750, 100, 750, 100, 750, 100, 750, 50, 750, 100, //80
750, 100, 750, 100, 750, 50, 1400, 100, // 88
750, 100, 1400, 100, 750, 100, // 94
   
};

void setup() {
pinMode (buzzer, OUTPUT) ;
for (int i = 0; i < 94; i++)  {
   int wait = duration[i] * songspeed;
   tone(buzzer, notes[i], wait);
   delay(wait);
}

}

void loop() {
  // put your main code here, to run repeatedly:

}
