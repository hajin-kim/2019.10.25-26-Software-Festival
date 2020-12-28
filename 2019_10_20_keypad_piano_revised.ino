#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  { '0', '1', '2', '3' },
  { '4', '5', '6', '7' },
  { '8', '9', 'A', 'B' },
  { 'C', 'D', 'E', 'F' }
};

byte rowPins[ROWS] = { 5, 4, 3, 2 }; // row pins
byte colPins[COLS] = { 6, 7, 8, 9 }; // column pins

// init keypad object
Keypad myKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup(){
//  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop(){
  char key_getter = myKeypad.getKey();

  if (key_getter != NO_KEY){
//    Serial.print(key_getter);
    switch (key_getter){
      case '0': tone(13, 440, 100); break; // play tone 57 (A4 = 440 Hz)
      case '1': tone(13, 466, 100); break; // play tone 58 (A#4 = 466 Hz)
      case '2': tone(13, 494, 100); break; // play tone 59 (B4 = 494 Hz)
      case '3': tone(13, 523, 100); break; // play tone 60 (C5 = 523 Hz)
      case '4': tone(13, 554, 100); break; // play tone 61 (C#5 = 554 Hz)
      case '5': tone(13, 587, 100); break; // play tone 62 (D5 = 587 Hz)
      case '6': tone(13, 622, 100); break; // play tone 63 (D#5 = 622 Hz)
      case '7': tone(13, 659, 100); break; // play tone 64 (E5 = 659 Hz)
      case '8': tone(13, 698, 100); break; // play tone 65 (F5 = 698 Hz)
      case '9': tone(13, 740, 100); break; // play tone 66 (F#5 = 740 Hz)
      case 'A': tone(13, 784, 100); break; // play tone 67 (G5 = 784 Hz)
      case 'B': tone(13, 831, 100); break; // play tone 68 (G#5 = 831 Hz)
      case 'C': tone(13, 880, 100); break; // play tone 69 (A5 = 880 Hz)
      case 'D': tone(13, 932, 100); break; // play tone 70 (A#5 = 932 Hz)
      case 'E': tone(13, 988, 100); break; // play tone 71 (B5 = 988 Hz)
      case 'F': tone(13, 1047, 100); break; // play tone 72 (C6 = 1047 Hz)
    }
  }
}
