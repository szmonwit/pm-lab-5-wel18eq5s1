#include <Arduino.h>
#include <LiquidCrystal.h>

//Inicjalizacja obiektu klasy LiquidCrystal: RS, E, DB4, DB%, DB6, DB7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char tablica[]="Szymon";
int tabLen = 0;

void lcdCLear(void);

void setup() {
    lcd.begin(16, 2);
    lcd.print("Szymon Witkowski");
    tabLen = sizeof(tablica);
    delay(2000);
}

void loop() { 
    for(int i=0; i<(18 - tabLen); i++){ 
        lcdClear();
        lcd.setCursor(i, 0);
        lcd.print(tablica);
        delay(1000);
    }

    for(int i=(17 - tabLen); i>=0; i--){
        lcdClear();
        lcd.setCursor(i, 1);
        lcd.print(tablica);
        delay(1000);
    }
}

void lcdClear(void){
    lcd.setCursor(0, 0);
    lcd.print("                ");
    lcd.setCursor(0, 1);
    lcd.print("                ");
}