#ifndef KOMBINACJE_H
#define KOMBINACJE_H
#include <string>
class Kombinacje
{
public:

    std::string *twojeKarty; //pobiera "twojeKarty" z funkcji "main"
    Kombinacje(std::string *twojeKarty); //konstruktor, ktory przekazuje metodom "twojeKarty"
    std::string zwrotKombinacji(); //przechowuje nazwe znalezionej kombinacji, ktora przekazuje w funkcji "main" zmiennej "kombo"
    void coToZaKombinacja(); //wyswietla znaleziona kombinacje, co przydaje sie przy debugowaniu
private:
    int pokerKrolewskiPokerKolorStrit(std::string *twojeKarty); //szuka kombinacji: poker (krolewski), kolor, strit
    int powtorzenia(std::string *twojeKarty); //szuka kombinacji: kareta, full, trzy pary, dwie pary, para
};

#endif // KOMBINACJE_H
