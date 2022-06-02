#ifndef LOSOWANIE_H
#define LOSOWANIE_H
#include "karty.h"

class Losowanie
{
    public:
        Losowanie(int x); //konstruktor, ktory przypisuje zmiennej "ilosc" wartosc "x"
        int ilosc; //zmienna "ilosc" w konstruktorze "Losowanie" przyjmie wartosc "x"
        void rng(std::string *twojeKarty);
};

#endif // LOSOWANIE_H
