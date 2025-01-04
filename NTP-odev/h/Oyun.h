#ifndef OYUN_H
#define OYUN_H

#include "Polis.h"  // Polis sınıfını oyunda kullanmak için ekliyoruz
#include "Hirsiz.h" // Hirsiz sınıfını oyunda kullanmak için ekliyoruz

// Oyunu yöneten sınıf (Oyun sınıfı)
class Oyun
{
private:
    Polis polis;  // Polis sınıfından bir nesne (polisi temsil eder)
    Hirsiz hirsiz; // Hirsiz sınıfından bir nesne (hırsızı temsil eder)
    char harita[10][10]; // Oyunun haritası (10x10 boyutunda)

    // Her hareketten sonra haritayı güncelleyen fonksiyon
    void haritaGuncelle();

    // Haritayı ekrana gösteren fonksiyon
    void haritaGoster();

public:
    Oyun(); // Oyunun kurucu fonksiyonu (oyunu başlatır)

    // Oyunu çalıştıran fonksiyon
    void oynat();
};

#endif