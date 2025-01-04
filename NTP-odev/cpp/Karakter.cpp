#include "Karakter.h" // Karakter sınıfını dahil ediyoruz

// Karakter sınıfının yapıcı fonksiyonu (isim, hız ve dayanıklılığı başlatıyoruz)
Karakter::Karakter(std::string i, int h, int d) : isim(i), hiz(h), dayaniklilik(d) {}

// Dayanıklılığı yeni bir değere ayarlamak için fonksiyon
void Karakter::setDayaniklilik(int d) 
{
    dayaniklilik = d; // Dayanıklılığı yeni değere ayarlıyoruz
}

// Dayanıklılığı geri döndüren fonksiyon
int Karakter::getDayaniklilik() const 
{
    return dayaniklilik; // Dayanıklılığı geri döndürüyoruz
}

// Dayanıklılığı belirli bir miktar kadar azaltan fonksiyon
void Karakter::dayaniklilikAzalt(int miktar)
{
    dayaniklilik -= miktar; // Dayanıklılığı azaltıyoruz
    if (dayaniklilik < 0) // Eğer dayanıklılık 0'dan küçükse
        dayaniklilik = 0; // Dayanıklılığı 0'a ayarlıyoruz
}

// Karakterin ismini geri döndüren fonksiyon
std::string Karakter::getIsim() const 
{
    return isim; // Karakterin ismini geri döndürüyoruz
}

// Karakterin yorulup yorulmadığını kontrol eden fonksiyon
bool Karakter::yoruldumMu() const 
{
    return dayaniklilik <= 0; // Eğer dayanıklılık 0 veya daha küçükse true döndürüyoruz
}
