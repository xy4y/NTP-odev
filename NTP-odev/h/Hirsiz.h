#ifndef HIRSIZ_H
#define HIRSIZ_H

#include "Karakter.h"  // Karakter sınıfını kullanmak için Karakter.h dosyasını ekliyoruz
#include <iostream>     // cin ve cout kullanmak için ekleniyor

// Hirsiz sınıfı (Karakter sınıfından türetilmiş)
class Hirsiz : public Karakter
{
private:
    int x, y; // Hırsızın haritadaki konumu (x ve y koordinatları)

public:
    Hirsiz(); // Hırsız sınıfının oluşturucusu, başlangıç değerlerini ayarlar

    // Hırsızın kaçma fonksiyonu (hırsız kaçmaya çalışır)
    void kac();

    // Hırsızın saklanma fonksiyonu (hırsız kendini gizler)
    void saklan();

    // Hırsızın koordinatlarını döndüren fonksiyonlar
    int getX() const;
    int getY() const;
};

#endif