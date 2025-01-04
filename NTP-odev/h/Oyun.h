#ifndef OYUN_H
#define OYUN_H

#include "Polis.h"
#include "Hirsiz.h"

class Oyun {
private:
    Polis polis;
    Hirsiz hirsiz;
    char harita[10][10];
    void haritaGuncelle(); // تحديث الخريطة
    void haritaGoster();   // عرض الخريطة
public:
    Oyun();              // الدالة البانية
    void oynat();          // تشغيل اللعبة

};

#endif // OYUN_H
