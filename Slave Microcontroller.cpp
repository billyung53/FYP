const int EnableL = 5;
const int HighL = 6;  // LEFT SIDE MOTOR
const int LowL = 7;

const int EnableR = 10;
const int HighR = 8;  //RIGHT SIDE MOTOR
const int LowR = 9;

const int D0 = 0;  // RASP PI PIN #21    LSB
const int D1 = 1;  // RASP PI PIN #22
const int D2 = 2;  // RASP PI PIN #23
const int D3 = 3;  // RASP PI PIN #24    MSB

int a, b, c, d, data, i, j;

void Data() {
  a = digitalRead(D0);
  b = digitalRead(D1);
  c = digitalRead(D2);
  d = digitalRead(D3);

  data = 8 * d + 4 * c + 2 * b + a;
}

void setup() {

  pinMode(EnableL, OUTPUT);
  pinMode(HighL, OUTPUT);
  pinMode(LowL, OUTPUT);

  pinMode(EnableR, OUTPUT);
  pinMode(HighR, OUTPUT);
  pinMode(LowR, OUTPUT);

  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
}


void Forward() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 255);
}


void Backward() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, LOW);
  digitalWrite(LowR, HIGH);
  analogWrite(EnableR, 255);
}

void Stop() {
  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 0);

  //digitalWrite(HighR, HIGH);
  //digitalWrite(LowR, LOW);
  //analogWrite(EnableR, 0);
}

void Left1() {
  digitalWrite(HighL, HIGH); // TESTED
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 170);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 255);
}

void Left2() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 100);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 255);
}

void Left3() {

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  analogWrite(EnableL, 160);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 255);
}

void Right1() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 170);
}

void Right2() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 110);
}

void Right3() {
  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  analogWrite(EnableL, 255);

  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableR, 70);
}


 void Obstacle()
 {
   analogWrite(EnableL, 0);
  analogWrite(EnableR, 0);
   delay(1000);
   analogWrite(EnableL, 255); // forward
   analogWrite(EnableR, 255);
   delay(1300);
   analogWrite(EnableL, 0);
   analogWrite(EnableR, 0);
   delay(1000);
   digitalWrite(HighL, LOW); // left
   digitalWrite(LowL, HIGH);
   digitalWrite(HighR, HIGH);
   digitalWrite(LowR, LOW);
   analogWrite(EnableL, 255);
   analogWrite(EnableR, 255);
   delay(1500);
   analogWrite(EnableL, 0);
   analogWrite(EnableR, 0);
   delay(1000);
   digitalWrite(HighL, HIGH);
   digitalWrite(LowL, LOW);
   digitalWrite(HighR, HIGH);
   digitalWrite(LowR, LOW);
   analogWrite(EnableL, 255); // forward
   analogWrite(EnableR, 255);
   delay(1000);
   analogWrite(EnableL, 0);
   analogWrite(EnableR, 0);
   delay(1000);
   digitalWrite(HighL, LOW); // left
   digitalWrite(LowL, HIGH);
   digitalWrite(HighR, HIGH);
   digitalWrite(LowR, LOW);
   analogWrite(EnableL, 255);
   analogWrite(EnableR, 255);
   delay(1500);
   analogWrite(EnableL, 0);
   analogWrite(EnableR, 0);
   delay(1000);
   digitalWrite(HighL, HIGH);
   digitalWrite(LowL, LOW);
   digitalWrite(HighR, HIGH);
   digitalWrite(LowR, LOW);
   analogWrite(EnableL, 255); // forward
   analogWrite(EnableR, 255);
   delay(700);
   analogWrite(EnableL, 0);
   analogWrite(EnableR, 0);
   delay(800);

 }


void UTurn()
{

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(500);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 255); // FORWARD
  analogWrite(EnableR, 255);
  delay(500);

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(500);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 255); // LEFT
  analogWrite(EnableR, 255);
  delay(1250);

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(500);

    digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 0); // FORWARD
  analogWrite(EnableR, 255);
  delay(500);

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(500);

  digitalWrite(HighL, LOW);
  digitalWrite(LowL, HIGH);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 255); // LEFT
  analogWrite(EnableR, 255);
  delay(1250);

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(500);

  digitalWrite(HighL, HIGH);
  digitalWrite(LowL, LOW);
  digitalWrite(HighR, HIGH);
  digitalWrite(LowR, LOW);
  analogWrite(EnableL, 255); // FORWARD
  analogWrite(EnableR, 255);
  delay(1000);

  // analogWrite(EnableL, 0); // STOP
  // analogWrite(EnableR, 0);
  // delay(700);

}



void loop() {
  
  Data();

  if (data == 0) {
    Forward();
  }

  // RIGHT

  else if (data == 1) {
    Right1();
  } else if (data == 2) {
    Right2();
  } else if (data == 3) {
    Right3();
  }

  // LEFT


  else if (data == 4) {
    Left1();
  } else if (data == 5) {
    Left2();
  } else if (data == 6) {
    Left3();
  } else if (data == 7) {
    UTurn();

    analogWrite(EnableL, 0);
    analogWrite(EnableR, 0);
    delay(1000);

  } else if (data == 8) {
    analogWrite(EnableL, 0);
    analogWrite(EnableR, 0);
    delay(4000);

    analogWrite(EnableL, 255);
    analogWrite(EnableR, 255);
    delay(1000);
  }


  else if (data > 8) {
    Forward();
  }


}
