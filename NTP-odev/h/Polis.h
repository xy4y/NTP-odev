#ifndef POLIS_H
#define POLIS_H

#include "Karakter.h"
#include <iostream>

class Polis : public Karakter
{
private:
    int x, y;

public:
    Polis();
    void kovala();
    void dinlen();
    int getX() const;
    int getY() const;
};

#endif
