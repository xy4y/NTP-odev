#ifndef KARAKTER_H
#define KARAKTER_H

#include <string>

class Karakter
{
protected:
    std::string isim;
    int hiz;
    int dayaniklilik;

public:
    Karakter(std::string i, int h, int d);
    void setDayaniklilik(int d);
    int getDayaniklilik() const;
    void dayaniklilikAzalt(int miktar);
    std::string getIsim() const;
    bool yoruldumMu() const;
};

#endif