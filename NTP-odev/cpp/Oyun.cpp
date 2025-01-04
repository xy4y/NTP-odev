#include "Oyun.h"
#include <iostream>

Oyun::Oyun() : polis(), hirsiz() {}

void Oyun::haritaGuncelle()
{
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            harita[i][j] = '.';

    harita[polis.getX()][polis.getY()] = 'P';
    harita[hirsiz.getX()][hirsiz.getY()] = 'H';
}

void Oyun::haritaGoster()
{
    std::cout << "\nHarita:" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
            std::cout << harita[i][j] << ' ';
        std::cout << std::endl;
    }
}

void Oyun::oynat()
{
    char hareket;
    bool oyunBitti = false;

    while (!oyunBitti)
    {
        haritaGuncelle();
        haritaGoster();

        std::cout << "\nPolis ne yapmak ister? (k - Kos / d - Dinlen): ";
        std::cin >> hareket;

        if (hareket == 'k')
            polis.kovala();
        else if (hareket == 'd')
            polis.dinlen();

        std::cout << "\nHirsiz ne yapmak ister? (k - Kac / s - Saklan): ";
        std::cin >> hareket;

        if (hareket == 'k')
            hirsiz.kac();
        else if (hareket == 's')
            hirsiz.saklan();

        if (polis.getDayaniklilik() <= 0 && hirsiz.getDayaniklilik() <= 0)
        {
            std::cout << "ikisi yorulmus! Oyun bitti.\n";
            oyunBitti = true;
        }
        else if (polis.getDayaniklilik() <= 0)
        {
            std::cout << "Polis yorulmus! Hirsiz kazandi.\n";
            oyunBitti = true;
        }
        else if (hirsiz.getDayaniklilik() <= 0)
        {
            std::cout << "Hirsiz yorulmus! Polis kazandi.\n";
            oyunBitti = true;
        }
    }
}