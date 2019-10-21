#include "pitches.h"
#define RED 11
#define GREEN 10
#define BLUE 9
#define BUTTON4 4

int speakerPin = 8;
////In The Bleak Midwinter
int length = 51;
char notes[] = "aavCagfgagdgavCaggfgagff vavCDDaaCagfecavCagfgagff ";
int beats[] = { 2,3,1,2,2,4,4,3,1,2,2,8,3,1,2,2,3,1,4,2,2,3,1,6,2,3,1,2,2,2,2,2,2,2,2,2,2,6,2,2,2,2,2,4,4,2,2,3,1,8,8};

//Jingle Bells
int length = 26;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int beats[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
 
int tempo = 300;
 
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}
 
void playNote(char note, int duration) {
  
char names[] = { 'c', 'd', 'e', 'f', 's', 'g', 'a', 'v', 'b', 'C', 'D', 'E' };
int tones[] = { 1915, 1700, 1519, 1432, 1352, 1275, 1136, 1073, 1014, 956, 852, 758 };
 
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}
 
void setup() {
  pinMode(speakerPin, OUTPUT);
  randomSeed(analogRead(0));
}
 
void loop() {

  if(digitalRead (BUTTON4) ==HIGH){
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
 
    // pause between notes
    delay(tempo / 5);
   analogWrite(RED,random(255));
  analogWrite(GREEN,random(255));
  analogWrite(BLUE,random(255));
  }
  } 
  analogWrite(RED,0);
  analogWrite(GREEN,0);
  analogWrite(BLUE,0);

}
