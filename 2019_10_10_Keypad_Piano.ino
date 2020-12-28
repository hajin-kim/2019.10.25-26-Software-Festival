#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  { '0', '1', '2', '3' },
  { '4', '5', '6', '7' },
  { '8', '9', 'A', 'B' },
  { 'C', 'D', 'E', 'F' }
};
byte rowPins[ROWS] = { 9, 8, 7, 6 }; // row pins
byte colPins[COLS] = { 5, 4, 3, 2 }; // column pins

// init keypad object
Keypad myKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup(){
  pinMode(8, OUTPUT);
}

void loop(){
  char key_getter = myKeypad.getKey();
  
  if (key_getter != NO_KEY){
    if (key_getter == '0')
      tone(13, 440, 100); // play tone 57 (A4 = 440 Hz)
    if (key_getter == '1')
      tone(13, 466, 100); // play tone 58 (A#4 = 466 Hz)
    if (key_getter == '2')
      tone(13, 494, 100); // play tone 59 (B4 = 494 Hz)
    if (key_getter == '3')
      tone(13, 523, 100); // play tone 60 (C5 = 523 Hz)
    if (key_getter == '4')
      tone(13, 554, 100); // play tone 61 (C#5 = 554 Hz)
    if (key_getter == '5')
      tone(13, 587, 100); // play tone 62 (D5 = 587 Hz)
    if (key_getter == '6')
      tone(13, 622, 100); // play tone 63 (D#5 = 622 Hz)
    if (key_getter == '7')
      tone(13, 659, 100); // play tone 64 (E5 = 659 Hz)
    if (key_getter == '8')
      tone(13, 698, 100); // play tone 65 (F5 = 698 Hz)
    if (key_getter == '9')
      tone(13, 740, 100); // play tone 66 (F#5 = 740 Hz)
    if (key_getter == 'A')
      tone(13, 784, 100); // play tone 67 (G5 = 784 Hz)
    if (key_getter == 'B')
      tone(13, 831, 100); // play tone 68 (G#5 = 831 Hz)
    if (key_getter == 'C')
      tone(13, 880, 100); // play tone 69 (A5 = 880 Hz)
    if (key_getter == 'D')
      tone(13, 932, 100); // play tone 70 (A#5 = 932 Hz)
    if (key_getter == 'E')
      tone(13, 988, 100); // play tone 71 (B5 = 988 Hz)
    if (key_getter == 'F')
      tone(13, 1047, 100); // play tone 72 (C6 = 1047 Hz)
  }
}
