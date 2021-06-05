#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);
int i = 0;
int j = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(2, INPUT);
}

void loop() {
  int i,x;
  x = digitalRead(2);
  if (x == 1)
  {
    for (i = -10; i <= 17; i++)
    {
      lcd.setCursor(i, j); // for position
      lcd.print("HELLO ANUP");
      //  lcd.scrollDisplayLeft();   for scroll the text.
      delay(200);
      lcd.clear( ); // for clear
    }
  }

  else {
    for (i = 17; i >= -10; i--)
    {
      lcd.setCursor(i, j); // for position
      lcd.print("HELLO ANUP");
      //  lcd.scrollDisplayLeft();   for scroll the text.
      delay(200);
      lcd.clear( ); // for clear
    }
  }
}
