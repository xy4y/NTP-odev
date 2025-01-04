#ifndef POLIS_H
#define POLIS_H

#include "Karakter.h"  // Karakter sınıfını kullanmak için Karakter.h dosyasını ekliyoruz
#include <iostream>     // cin ve cout kullanmak için ekleniyor

// Polis sınıfı (Karakter sınıfından türetilmiş)
class Polis : public Karakter
{
private:
    int x, y; // Polisin haritadaki konumu (x ve y koordinatları)

public:
    Polis(); // Polis sınıfının oluşturucusu, başlangıç değerlerini ayarlar

    // Kovalamayı başlatan fonksiyon (polis hırsızı takip eder)
    void kovala();

    // Polis dinlenme fonksiyonu (dayanıklılığı 100'e geri döner)
    void dinlen();

    // Polisin koordinatlarını döndüren fonksiyonlar
    int getX() const;
    int getY() const;
};

#endif