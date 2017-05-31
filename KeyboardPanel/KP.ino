#include <SoftwareSerial.h>
SoftwareSerial btSerial(12, 13);
int relay_l1 = 21; //왼쪽 키보드 릴레이 핀설정
int relay_l2 = 22;
int relay_l3 = 23;
int relay_l4 = 24;
int relay_l5 = 25;
int relay_l6 = 26;
int relay_l7 = 27;
int relay_l8 = 28;
int relay_l9 = 29;
int relay_l10 = 30;
int relay_l11 = 31;
int relay_l12 = 32;
int relay_l13 = 33;
int relay_l14 = 34;
int relay_l15 = 35;

int relay_r1 = 41; //오른쪽 키보드 릴레이 핀설정
int relay_r2 = 42;
int relay_r3 = 43;
int relay_r4 = 44;
int relay_r5 = 45;
int relay_r6 = 46;
int relay_r7 = 47;
int relay_r8 = 48;
int relay_r9 = 49;
int relay_r10 = 50;
int relay_r11 = 51;


void l1(char data);
void l2(char data);
void l3(char data);
void l4(char data);
void l5(char data);
void l6(char data);
void l7(char data);
void l8(char data);
void l9(char data);
void l10(char data);
void l11(char data);
void l12(char data);
void l13(char data);
void l14(char data);
void l15(char data);

void r1(char data);
void r2(char data);
void r3(char data);
void r4(char data);
void r5(char data);
void r6(char data);
void r7(char data);
void r8(char data);
void r9(char data);
void r10(char data);
void r11(char data);

void setup() {
   Serial.begin(9600);
   btSerial.begin(9600);
   pinMode(relay_l1, OUTPUT); // relay를 output으로 설정한다.
   pinMode(relay_l2, OUTPUT);
   pinMode(relay_l3, OUTPUT);
   pinMode(relay_l4, OUTPUT);
   pinMode(relay_l5, OUTPUT);
   pinMode(relay_l6, OUTPUT);
   pinMode(relay_l7, OUTPUT);
   pinMode(relay_l8, OUTPUT);
   pinMode(relay_l9, OUTPUT);
   pinMode(relay_l10, OUTPUT);
   pinMode(relay_l11, OUTPUT);
   pinMode(relay_l12, OUTPUT);
   pinMode(relay_l13, OUTPUT);
   pinMode(relay_l14, OUTPUT);
   pinMode(relay_l15, OUTPUT);

   pinMode(relay_r1, OUTPUT);
   pinMode(relay_r2, OUTPUT);
   pinMode(relay_r3, OUTPUT);
   pinMode(relay_r4, OUTPUT);
   pinMode(relay_r5, OUTPUT);
   pinMode(relay_r6, OUTPUT);
   pinMode(relay_r7, OUTPUT);
   pinMode(relay_r8, OUTPUT);
   pinMode(relay_r9, OUTPUT);
   pinMode(relay_r10, OUTPUT);
   pinMode(relay_r11, OUTPUT);

   digitalWrite(relay_l1, HIGH);//시작시 릴레이를 OFF 로 설정
   digitalWrite(relay_l2, HIGH);
   digitalWrite(relay_l3, HIGH);
   digitalWrite(relay_l4, HIGH);
   digitalWrite(relay_l5, HIGH);
   digitalWrite(relay_l6, HIGH);
   digitalWrite(relay_l7, HIGH);
   digitalWrite(relay_l8, HIGH);
   digitalWrite(relay_l9, HIGH);
   digitalWrite(relay_l10, HIGH);
   digitalWrite(relay_l11, HIGH);
   digitalWrite(relay_l12, HIGH);
   digitalWrite(relay_l13, HIGH);
   digitalWrite(relay_l14, HIGH);
   digitalWrite(relay_l15, HIGH);

   digitalWrite(relay_r1, HIGH);
   digitalWrite(relay_r2, HIGH);
   digitalWrite(relay_r3, HIGH);
   digitalWrite(relay_r4, HIGH);
   digitalWrite(relay_r5, HIGH);
   digitalWrite(relay_r6, HIGH);
   digitalWrite(relay_r7, HIGH);
   digitalWrite(relay_r8, HIGH);
   digitalWrite(relay_r9, HIGH);
   digitalWrite(relay_r10, HIGH);
   digitalWrite(relay_r11, HIGH);
}

void loop() {
   volatile char data;
   data = Serial.read();
   if (Serial.available()) {
      delay(5);
      //while(Serial.available()){
      //  btSerial.write(Serial.read());
      //}
   }
   if (btSerial.available()) {
      delay(5);
      while (btSerial.available()) {
         Serial.write(btSerial.read());
      }
   }



   /*
   if(data == 'q') l1(data);
   else if(data == 'a') l2(data);
   else if(data == 'z') l3(data);
   else if(data == 'w') l4(data);
   else if(data == 's') l5(data);
   else if(data == 'x') l6(data);
   else if(data == 'e') l7(data);
   else if(data == 'd') l8(data);
   else if(data == 'c') l9(data);
   else if(data == 'r') l10(data);
   else if(data == 'f') l11(data);
   else if(data == 'v') l12(data);
   else if(data == 't') l13(data);
   else if(data == 'g') l14(data);
   else if(data == 'b') l15(data);

   else if(data == 'y') r1(data);
   else if(data == 'h') r2(data);
   else if(data == 'n') r3(data);
   else if(data == 'u') r4(data);
   else if(data == 'j') r5(data);
   else if(data == 'm') r6(data);
   else if(data == 'i') r7(data);
   else if(data == 'k') r8(data);
   else if(data == 'o') r9(data);
   else if(data == 'l') r10(data);
   else if(data == 'p') r11(data);
   */
}

void turnOn(char data)
{
   if (data < 'm')
   {
      if (data < 'f')
      {
         if (data < 'c')
         {
            if (data< 'b')
            {
               l2(data); //a
            }
            else
            {
               l15(data); //b
            }

         }
         else if (data > 'c')
         {
            if (data > 'd')
            {
               l8(data); //e
            }
            else
            {
               l7(data); //d
            }

         }
         else
         {
            l9(data); //c
         }
      }
      if (data > 'f')
      {

         if (data < 'i')
         {
            if (data <'h')
            {
               l14(data); //g
            }
            else
            {
               r2(data); //h
            }


         }
         else if (data >'i')
         {

            if (data<'k')
            {
               r5(data); // j
            }
            else if (data > 'k')
            {
               r10(data); //l
            }
            else
            {
               r8(data); //k
            }
         }
         else
         {
            r5(data); //i
         }
      }
      else
      {
         l11(data); //f
      }
   }
   /////////////////////////////////////////////////////////
   if (data > 'm')
   {
      if (data < 't')
      {
         if (data < 'p')
         {
            if (data < 'o')
            {
               r3(data); //n
            }
            else
            {
               r9(data); //o
            }

         }
         else if (data > 'p')
         {
            if (data <'r')
            {
               l1(data); //q
            }
            else if (data > 'r')
            {
               l5(data);//s
            }
            else
            {
               l10(data); //r
            }


         }
         else
         {
            r11(data); //p
         }
      }

      if (data > 't')
      {
         if (data < 'w')
         {
            if (data < 'v')
            {
               r4(data); //u
            }
            else
            {
               l12(data); //v
            }

         }
         else if (data > 'w')
         {
            if (data <'y')
            {
               l6(data); //x
            }
            else if (data > 'y')
            {
               l3(data); //z
            }
            else
            {
               r1(data); //y
            }
         }
         else
         {
            l4(data); //w
         }
      }
      else
      {
         l13(data); //t
      }
   }

   else
   {
      r6(data); //m
   }




}

   void l1(char data) {
      off();
      digitalWrite(relay_l1, LOW);
      btSerial.write("1");
   }
   void l2(char data) {
      off();
      digitalWrite(relay_l2, LOW);
      btSerial.write("1");
   }
   void l3(char data) {
      off();
      digitalWrite(relay_l3, LOW);
      btSerial.write("1");
   }
   void l4(char data) {
      off();
      digitalWrite(relay_l4, LOW);
      btSerial.write("2");
   }
   void l5(char data) {
      off();
      digitalWrite(relay_l5, LOW);
      btSerial.write("2");
   }
   void l6(char data) {
      off();
      digitalWrite(relay_l6, LOW);
      btSerial.write("2");
   }
   void l7(char data) {
      off();
      digitalWrite(relay_l7, LOW);
      btSerial.write("3");
   }
   void l8(char data) {
      off();
      digitalWrite(relay_l8, LOW);
      btSerial.write("3");
   }
   void l9(char data) {
      off();
      digitalWrite(relay_l9, LOW);
      btSerial.write("3");
   }
   void l10(char data) {
      off();
      digitalWrite(relay_l10, LOW);
      btSerial.write("4");
   }
   void l11(char data) {
      off();
      digitalWrite(relay_l11, LOW);
      btSerial.write("4");
   }
   void l12(char data) {
      off();
      digitalWrite(relay_l12, LOW);
      btSerial.write("4");
   }
   void l13(char data) {
      off();
      digitalWrite(relay_l13, LOW);
      btSerial.write("4");
   }
   void l14(char data) {
      off();
      digitalWrite(relay_l14, LOW);
      btSerial.write("4");
   }
   void l15(char data) {
      off();
      digitalWrite(relay_l15, LOW);
      btSerial.write("4");
   }
   void r1(char data) {
      off();
      digitalWrite(relay_r1, LOW);
      btSerial.write("5");
   }
   void r2(char data) {
      off();
      digitalWrite(relay_r2, LOW);
      btSerial.write("5");
   }
   void r3(char data) {
      off();
      digitalWrite(relay_r3, LOW);
      btSerial.write("5");
   }
   void r4(char data) {
      off();
      digitalWrite(relay_r4, LOW);
      btSerial.write("5");
   }
   void r5(char data) {
      off();
      digitalWrite(relay_r5, LOW);
      btSerial.write("5");
   }
   void r6(char data) {
      off();
      digitalWrite(relay_r6, LOW);
      btSerial.write("5");
   }
   void r7(char data) {
      off();
      digitalWrite(relay_r7, LOW);
      btSerial.write("6");
   }
   void r8(char data) {
      off();
      digitalWrite(relay_r8, LOW);
      btSerial.write("6");
   }
   void r9(char data) {
      off();
      digitalWrite(relay_r9, LOW);
      btSerial.write("7");
   }
   void r10(char data) {
      off();
      digitalWrite(relay_r10, LOW);
      btSerial.write("7");
   }
   void r11(char data) {
      off();
      digitalWrite(relay_r11, LOW);
      btSerial.write("8");
   }
   void off() {
      digitalWrite(relay_l1, HIGH);//시작시 릴레이를 OFF 로 설정
      digitalWrite(relay_l2, HIGH);
      digitalWrite(relay_l3, HIGH);
      digitalWrite(relay_l4, HIGH);
      digitalWrite(relay_l5, HIGH);
      digitalWrite(relay_l6, HIGH);
      digitalWrite(relay_l7, HIGH);
      digitalWrite(relay_l8, HIGH);
      digitalWrite(relay_l9, HIGH);
      digitalWrite(relay_l10, HIGH);
      digitalWrite(relay_l11, HIGH);
      digitalWrite(relay_l12, HIGH);
      digitalWrite(relay_l13, HIGH);
      digitalWrite(relay_l14, HIGH);
      digitalWrite(relay_l15, HIGH);

      digitalWrite(relay_r1, HIGH);
      digitalWrite(relay_r2, HIGH);
      digitalWrite(relay_r3, HIGH);
      digitalWrite(relay_r4, HIGH);
      digitalWrite(relay_r5, HIGH);
      digitalWrite(relay_r6, HIGH);
      digitalWrite(relay_r7, HIGH);
      digitalWrite(relay_r8, HIGH);
      digitalWrite(relay_r9, HIGH);
      digitalWrite(relay_r10, HIGH);
      digitalWrite(relay_r11, HIGH);
   }
