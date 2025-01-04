#ifndef KARAKTER_H
#define KARAKTER_H

#include <string> // string kütüphanesi karakter ismini kullanmak için eklendi

// Oyun karakterini temsil eden bir temel sınıf
class Karakter
{
protected:
    std::string isim; // Karakterin ismi
    int hiz;          // Karakterin hızı
    int dayaniklilik; // Karakterin dayanıklılığı (gücü)

public:
    // Karakter oluşturucu: isim, hız ve dayanıklılık alır
    Karakter(std::string i, int h, int d);

    // Dayanıklılığı ayarlayan fonksiyon
    void setDayaniklilik(int d);

    // Dayanıklılığı döndüren fonksiyon
    int getDayaniklilik() const;

    // Dayanıklılığı azaltan fonksiyon
    void dayaniklilikAzalt(int miktar);

    // Karakterin ismini döndüren fonksiyon
    std::string getIsim() const;

    // Karakterin yorulup yorulmadığını kontrol eden fonksiyon
    bool yoruldumMu() const;
};

#endif