#include "Hirsiz.h" // Hirsiz sınıfını ekliyoruz

// Hirsiz sınıfının kurucusu
Hirsiz::Hirsiz() : Karakter("Hirsiz", 4, 100), x(2), y(3) {}

// Hırsızın kaçma fonksiyonu
void Hirsiz::kac()
{
    if (!yoruldumMu()) // Eğer hırsız yorulmamışsa
    {
        std::cout << "Hirsiz hizla kaciyor!" << std::endl;
        dayaniklilikAzalt(15); // Dayanıklılığı azaltıyoruz
        char hareket;
        std::cout << "Hirsiz nereye gitmek ister? (w - yukari / s - asagi / a - sola / d - saga): ";
        std::cin >> hareket;

        // Hırsızın hareketini seçime göre yapıyoruz
        if (hareket == 'w' && x > 0) --x;
        if (hareket == 's' && x < 9) ++x;
        if (hareket == 'a' && y > 0) --y;
        if (hareket == 'd' && y < 9) ++y;
    }
    else
    {
        std::cout << "Hirsiz cok yorulmus ve kacamaz." << std::endl;
    }
}

// Hırsızın saklanma fonksiyonu
void Hirsiz::saklan()
{
    dayaniklilikAzalt(10); // Saklanırken dayanıklılık azalır
    std::cout << "Hirsiz saklaniyor!" << std::endl;
}

// Hırsızın x koordinatını döndüren fonksiyon
int Hirsiz::getX() const { return x; }

// Hırsızın y koordinatını döndüren fonksiyon
int Hirsiz::getY() const { return y; }
