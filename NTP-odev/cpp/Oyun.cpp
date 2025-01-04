#include "Oyun.h" // Oyun sınıfını ekliyoruz
#include <iostream> // Giriş/çıkış kütüphanesini ekliyoruz

// Oyun sınıfının kurucusu
Oyun::Oyun() : polis(), hirsiz() {}

// Haritayı güncelleyen fonksiyon (polis ve hırsızın yerini belirler)
void Oyun::haritaGuncelle()
{
    // Haritayı temizler (tüm hücrelere '.' koyar)
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            harita[i][j] = '.';

    // Polisin ve hırsızın yerini haritada günceller
    harita[polis.getX()][polis.getY()] = 'P';
    harita[hirsiz.getX()][hirsiz.getY()] = 'H';
}

// Haritayı ekrana gösteren fonksiyon
void Oyun::haritaGoster()
{
    std::cout << "\nHarita:" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
            std::cout << harita[i][j] << ' '; // Satırdaki her hücreyi yazdırır
        std::cout << std::endl; // Sonraki satıra geçer
    }
}

// Oyunu çalıştıran fonksiyon
void Oyun::oynat()
{
    char hareket; // Oyuncunun seçimini saklar
    bool oyunBitti = false; // Oyunun bitip bitmediğini kontrol eder

    while (!oyunBitti) // Oyun bitene kadar devam eder
    {
        haritaGuncelle(); // Haritayı günceller
        haritaGoster(); // Haritayı ekrana gösterir

        // Polis ve hırsızın kalan dayanıklılığını ekrana yazdırıyoruz
        std::cout << "\nPolis'in dayanikliligi: " << polis.getDayaniklilik() << std::endl;
        std::cout << "Hirsiz'in dayanikliligi: " << hirsiz.getDayaniklilik() << std::endl;


        // Polis için seçenek sorar (kovala veya dinlen)
        std::cout << "\nPolis ne yapmak ister? (k - Kos / d - Dinlen): ";
        std::cin >> hareket;

        if (hareket == 'k') // Eğer polis "kovala" derse
            polis.kovala();
        else if (hareket == 'd') // Eğer polis "dinlen" derse
            polis.dinlen();

        // Hırsız için seçenek sorar (kaç veya saklan)
        std::cout << "\nHirsiz ne yapmak ister? (k - Kac / s - Saklan): ";
        std::cin >> hareket;

        if (hareket == 'k') // Eğer hırsız "kaç" derse
            hirsiz.kac();
        else if (hareket == 's') // Eğer hırsız "saklan" derse
            hirsiz.saklan();

        // Polis ve hırsızın kalan dayanıklılığını ekrana yazdırıyoruz
        std::cout << "\nPolis'in dayanikliligi: " << polis.getDayaniklilik() << std::endl;
        std::cout << "Hirsiz'in dayanikliligi: " << hirsiz.getDayaniklilik() << std::endl;


        // Oyunun bitme durumunu kontrol eder
        if (polis.getDayaniklilik() <= 0 && hirsiz.getDayaniklilik() <= 0)
        {
            std::cout << "Ikisi yorulmus! Oyun bitti.\n"; // İkisi de yorulduysa
            oyunBitti = true;
        }
        else if (polis.getDayaniklilik() <= 0)
        {
            std::cout << "Polis yorulmus! Hirsiz kazandi.\n"; // Polis yorulduysa
            oyunBitti = true;
        }
        else if (hirsiz.getDayaniklilik() <= 0)
        {
            std::cout << "Hirsiz yorulmus! Polis kazandi.\n"; // Hırsız yorulduysa
            oyunBitti = true;
        }
    }
}
