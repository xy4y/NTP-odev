#include "Polis.h" // Polis sınıfını ekliyoruz

// Polis sınıfının kurucusu
Polis::Polis() : Karakter("Polis", 5, 100), x(5), y(5) {}

// Kovalamayı başlatan fonksiyon
void Polis::kovala()
{
    if (!yoruldumMu()) // Eğer polis yorulmamışsa
    {
        std::cout << "Polis hirsizi hizla kovalamaya basliyor!" << std::endl;
        dayaniklilikAzalt(10); // Dayanıklılığı azaltıyoruz
        char hareket;
        std::cout << "Polis nereye gitmek ister? (w - yukari / s - asagi / a - sola / d - saga): ";
        std::cin >> hareket;

        // Polisin hareketini seçime göre yapıyoruz
        if (hareket == 'w' && x > 0) --x;
        if (hareket == 's' && x < 9) ++x;
        if (hareket == 'a' && y > 0) --y;
        if (hareket == 'd' && y < 9) ++y;
    }
    else
    {
        std::cout << "Polis cok yorulmus ve kosamaz." << std::endl;
    }
}

// Polisin dinlenme fonksiyonu
void Polis::dinlen() { setDayaniklilik(100); }

// Polisin x koordinatını döndüren fonksiyon
int Polis::getX() const { return x; }

// Polisin y koordinatını döndüren fonksiyon
int Polis::getY() const { return y; }
