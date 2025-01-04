#ifndef OYUN_H
#define OYUN_H

#include "Polis.h"
#include "Hirsiz.h"

class Oyun {
public:
    Oyun();              // الدالة البانية
    void haritaGuncelle(); // تحديث الخريطة
    void haritaGoster();   // عرض الخريطة
    void oynat();          // تشغيل اللعبة

private:
    Polis polis;
    Hirsiz hirsiz;
    char harita[10][10];
};

#endif // OYUN_H
