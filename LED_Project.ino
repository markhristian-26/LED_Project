int led_a=3;
int led_b=4;
int led_c=5;
int led_d=6;
int led_e=7;
int led_f=9;
int led_g=8;
const int button_1 = 10;
const int button_2 = 11;
const int button_3 = 12;
int ButtonState_1 = 0;
int ButtonState_2 = 0;
int ButtonState_3 = 0;
int LastButtonState_1 = 0;
int LastButtonState_2 = 0;
int LastButtonState_3 = 0;
void setup() {
  pinMode (led_a, OUTPUT);
  pinMode (led_b, OUTPUT);
  pinMode (led_c, OUTPUT);
  pinMode (led_d, OUTPUT);
  pinMode (led_e, OUTPUT);
  pinMode (led_f, OUTPUT);
  pinMode (led_g, OUTPUT);
  pinMode (button_1, INPUT);
  pinMode (button_2, INPUT);
  pinMode (button_3, INPUT);
}
void loop() {
  ButtonState_1 = digitalRead(button_1);
  for (int LastButtonState_1 = 0; LastButtonState_1<256; LastButtonState_1++);
    if (LastButtonState_1 == LOW && ButtonState_1 == HIGH){
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW); //ONE
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,HIGH); //TWO
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,HIGH); //THREE
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //FOUR
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH); 
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //FIVE
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //SIX
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW); //SEVEN
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //EIGHT
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //NINE
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,LOW); // ZERO
    delay(2000);
  }
    else(LastButtonState_1 == HIGH && ButtonState_1 == LOW); {
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW);
    delay(2000);
  } 
  ButtonState_2 = digitalRead(button_2);
  for (int LastButtonState_2 = 0; LastButtonState_2<256; LastButtonState_2++);
    if (LastButtonState_2 == LOW && ButtonState_2 == HIGH){
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //A
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //b
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,LOW); //C
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,HIGH); //d
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH); 
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //E
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //F
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //G
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //H
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW); //I
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW); // J
    delay(2000);
  }
    else(LastButtonState_2 == HIGH && ButtonState_2 == LOW); {
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW);
    delay(2000);
  } 
  ButtonState_3 = digitalRead(button_3);
  for (int LastButtonState_3 = 0; LastButtonState_3<256; LastButtonState_3++);
    if (LastButtonState_3 == LOW && ButtonState_3 == HIGH){
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //H
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //E
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,LOW); //L
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,LOW); //L
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH); 
    digitalWrite(led_e,HIGH);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,LOW); //O
    delay(2000);
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,HIGH);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW); //ONE
    delay(2000);
    digitalWrite(led_a,HIGH);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,HIGH);
    digitalWrite(led_d,HIGH);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,HIGH);
    digitalWrite(led_g,HIGH); //FIVE
    delay(2000);
  }
    else(LastButtonState_3 == HIGH && ButtonState_3 == LOW); {
    digitalWrite(led_a,LOW);
    digitalWrite(led_b,LOW);
    digitalWrite(led_c,LOW);
    digitalWrite(led_d,LOW);
    digitalWrite(led_e,LOW);
    digitalWrite(led_f,LOW);
    digitalWrite(led_g,LOW);
    delay(2000);
  } 
}


 
