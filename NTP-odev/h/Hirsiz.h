#ifndef HIRSIZ_H
#define HIRSIZ_H

#include "Karakter.h"
#include <iostream>

class Hirsiz : public Karakter
{
private:
    int x, y;

public:
    Hirsiz();
    void kac();
    void saklan();
    int getX() const;
    int getY() const;
};

#endif
