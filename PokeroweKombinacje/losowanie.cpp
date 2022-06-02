#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
#include "losowanie.h"
#include "karty.h"
using namespace std;

Losowanie::Losowanie(int x)
{
    Losowanie::ilosc=x; //this->ilosc=x;
}

void Losowanie::rng(string *twojeKarty)
{
    vector<int> kartyDoLosowania;
    for (int i=0; i<52; i++)              //dodaje liczby od 0 do 51 do wektora, aby moc potem dobierac na ich podstawie karty
    {
        kartyDoLosowania.push_back(i);
    }

    srand(time(NULL));

    for (int i=0; i<ilosc; i++)
    {
        int liczba=rand()%(52-i); //losuje liczbe od 0 do (52-i)

/* //Zmieniajac wartosci "liczba" ponizej mozna wplywac na to, jaka ostatecznie karta zostanie dodana do tablicy "twojeKarty". Przydatne przy debugowaniu.
        if (i==0) liczba=51;
        if (i==1) liczba=51;
        if (i==2) liczba=51;
        if (i==3) liczba=51;
        if (i==4) liczba=51;
        if (i==5) liczba=46;
        if (i==6) liczba=46;*/


        twojeKarty[i]=talia[kartyDoLosowania[liczba]];  /*zapisuje otrzymana karte do tablicy.
            "kartyDoLosowania[liczba]" to jedyna w swoim rodzaju liczba z wektora (tzn. jest tylko jedna taka liczba w wektorze),
            a "talia[kartyDoLosowania[liczba]]" pobiera string z karta odpowiadajaca numerowi indeksu rownemu liczbie "kartyDoLosowania[liczba]".
            W ten sposob nie wylosuje sie dwa razy taka sama karta.*/
        remove(kartyDoLosowania.begin(), kartyDoLosowania.end(), kartyDoLosowania[liczba]); //pozbywa sie wartosci z wektora, aby nie wylosowalo tej samej karty
        kartyDoLosowania.pop_back(); //usuwa ostatnia wartosc wektora, ktora sie zdublowala przez ostatnia komende, i zmniejsza jego rozmiar o 1
    }
/*    for (int i=0; i<kartyDoLosowania.size(); i++) //wyswietla wartosci w wektorze i jego rozmiar. Przydatne przy debugowaniu.
    {
        cout<<kartyDoLosowania[i]<<" ";
    }cout<<'\n';
    cout<<"Rozmiar wektora: "<<kartyDoLosowania.size()<<'\n';*/
}
