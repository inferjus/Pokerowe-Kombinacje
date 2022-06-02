#include "kombinacje.h"
#include <iostream>
#include <string>

using namespace std;

Kombinacje::Kombinacje(string *twojeKarty)
{
    this->twojeKarty=twojeKarty; //deklaruje zmienna "twojeKarty", ktora zawiera to samo co "twojeKarty" z funkcji "main"
}

string Kombinacje::zwrotKombinacji()
{
/* Sprawdza po kolei czy dana funkcja zwraca dana wartosc, ktora odpowiada konkretnej pokerowej kombinacji.
 * Jesli nic nie znajdzie, to kombinacja to "wysoka karta".*/

    string zwrot;
    while (true)
    {
             if (pokerKrolewskiPokerKolorStrit(twojeKarty)==2)
            {zwrot="poker krolewski"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==3)
            {zwrot="poker"; break;}
        else if (powtorzenia(twojeKarty)==4)
            {zwrot="kareta"; break;}
        else if (powtorzenia(twojeKarty)==5)
           {zwrot="full"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==1)
           {zwrot="kolor"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==0)
           {zwrot="strit"; break;}
        else if (powtorzenia(twojeKarty)==3)
            {zwrot="trojka"; break;}
        else if (powtorzenia(twojeKarty)==2)
           {zwrot="dwie pary"; break;}
        else if (powtorzenia(twojeKarty)==1)
            {zwrot="para"; break;}
        else {zwrot="wysoka karta"; break;}
    }
    return zwrot;
}

void Kombinacje::coToZaKombinacja() //to samo co wyzej, tylko wypisuje znaleziona kombinacje zamiast ja zwracac.
{
    while (true)
    {
             if (pokerKrolewskiPokerKolorStrit(twojeKarty)==2)
            {cout<<" POKER KROLEWSKI\n"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==3)
            {cout<<" POKER\n"; break;}
        else if (powtorzenia(twojeKarty)==4)
            {cout<<" KARETA\n"; break;}
        else if (powtorzenia(twojeKarty)==5)
           {cout<<" FULL\n"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==1)
           {cout<<" KOLOR\n"; break;}
        else if (pokerKrolewskiPokerKolorStrit(twojeKarty)==0)
           {cout<<" STRIT\n"; break;}
        else if (powtorzenia(twojeKarty)==3)
            {cout<<" TROJKA\n"; break;}
        else if (powtorzenia(twojeKarty)==2)
           {cout<<" DWIE PARY\n"; break;}
        else if (powtorzenia(twojeKarty)==1)
            {cout<<" PARA\n"; break;}
        else {cout<<" WYSOKA KARTA\n"; break;}
    }
}

int Kombinacje::pokerKrolewskiPokerKolorStrit(std::string *twojeKarty)
{
    int zwrot=-1;

    int as=0, krol=0, dama=0, walet=0, dziesiec=0, dziewiec=0, osiem=0, siedem=0, szesc=0, piec=0, cztery=0, trzy=0, dwa=0;
    for (int i=0; i<7; i++) //zlicza ilosc wystapien danych wartosci kart
    {
        if (twojeKarty[i].find("as")<=10) as++;
   else if (twojeKarty[i].find("krol")<=10) krol++;
   else if (twojeKarty[i].find("dama")<=10) dama++;
   else if (twojeKarty[i].find("walet")<=10) walet++;
   else if (twojeKarty[i].find("dziesiec")<=10) dziesiec++;
   else if (twojeKarty[i].find("dziesiec")<=10) dziewiec++;
   else if (twojeKarty[i].find("osiem")<=10) osiem++;
   else if (twojeKarty[i].find("siedem")<=10) siedem++;
   else if (twojeKarty[i].find("szesc")<=10) szesc++;
   else if (twojeKarty[i].find("piec")<=10) piec++;
   else if (twojeKarty[i].find("cztery")<=10) cztery++;
   else if (twojeKarty[i].find("trzy")<=10) trzy++;
   else if (twojeKarty[i].find("dwa")<=10) dwa++;
    }

    int kier=0, karo=0, pik=0, trefl=0;
    for (int i=0; i<7; i++) //zlicza ilosc wystapien danych kolorow kart
    {
             if (twojeKarty[i].find("kier")<=10) kier++;
        else if (twojeKarty[i].find("karo")<=10) karo++;
        else if (twojeKarty[i].find("pik")<=10) pik++;
        else if (twojeKarty[i].find("trefl")<=10) trefl++;
    }
    int asKolor=0, krolKolor=0, damaKolor=0, waletKolor=0, dziesiecKolor=0, dziewiecKolor=0, osiemKolor=0, siedemKolor=0, szescKolor=0, piecKolor=0, czteryKolor=0, trzyKolor=0, dwaKolor=0;
         if (kier>=5) //jezeli znajdzie co najmniej piec kart w kolorze kier...
    {
        for (int i=0; i<7; i++) //...to szuka, czy znajdzie wartosci w tym samym kolorze
        {
            if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("as")<=10) asKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("krol")<=10) krolKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dama")<=10) damaKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("walet")<=10) waletKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dziesiec")<=10) dziesiecKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dziesiec")<=10) dziewiecKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("osiem")<=10) osiemKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("siedem")<=10) siedemKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("szesc")<=10) szescKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("piec")<=10) piecKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("cztery")<=10) czteryKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("trzy")<=10) trzyKolor++;
       else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dwa")<=10) dwaKolor++;
        }
    }
    else if (karo>=5) //to samo co wyzej, tylko dla koloru karo
    {
         for (int i=0; i<7; i++)
         {
             if (twojeKarty[i].find("karo")<=10 && twojeKarty[i].find("as")<=10) asKolor++;
        else if (twojeKarty[i].find("karo")<=10 && twojeKarty[i].find("krol")<=10) krolKolor++;
        else if (twojeKarty[i].find("karo")<=10 && twojeKarty[i].find("dama")<=10) damaKolor++;
        else if (twojeKarty[i].find("karo")<=10 && twojeKarty[i].find("walet")<=10) waletKolor++;
        else if (twojeKarty[i].find("karo")<=10 && twojeKarty[i].find("dziesiec")<=10) dziesiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dziesiec")<=10) dziewiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("osiem")<=10) osiemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("siedem")<=10) siedemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("szesc")<=10) szescKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("piec")<=10) piecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("cztery")<=10) czteryKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("trzy")<=10) trzyKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dwa")<=10) dwaKolor++;
         }
    }
    else if (pik>=5) //to samo co wyzej, tylko dla koloru pik
     {
         for (int i=0; i<7; i++)
         {
             if (twojeKarty[i].find("pik")<=10 && twojeKarty[i].find("as")<=10) asKolor++;
        else if (twojeKarty[i].find("pik")<=10 && twojeKarty[i].find("krol")<=10) krolKolor++;
        else if (twojeKarty[i].find("pik")<=10 && twojeKarty[i].find("dama")<=10) damaKolor++;
        else if (twojeKarty[i].find("pik")<=10 && twojeKarty[i].find("walet")<=10) waletKolor++;
        else if (twojeKarty[i].find("pik")<=10 && twojeKarty[i].find("dziesiec")<=10) dziesiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dziesiec")<=10) dziewiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("osiem")<=10) osiemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("siedem")<=10) siedemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("szesc")<=10) szescKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("piec")<=10) piecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("cztery")<=10) czteryKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("trzy")<=10) trzyKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dwa")<=10) dwaKolor++;
         }
     }
    else if (trefl>=5) //to samo co wyzej, tylko dla koloru trefl
     {
         for (int i=0; i<7; i++)
         {
             if (twojeKarty[i].find("trefl")<=10 && twojeKarty[i].find("as")<=10) asKolor++;
        else if (twojeKarty[i].find("trefl")<=10 && twojeKarty[i].find("krol")<=10) krolKolor++;
        else if (twojeKarty[i].find("trefl")<=10 && twojeKarty[i].find("dama")<=10) damaKolor++;
        else if (twojeKarty[i].find("trefl")<=10 && twojeKarty[i].find("walet")<=10) waletKolor++;
        else if (twojeKarty[i].find("trefl")<=10 && twojeKarty[i].find("dziesiec")<=10) dziesiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dziesiec")<=10) dziewiecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("osiem")<=10) osiemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("siedem")<=10) siedemKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("szesc")<=10) szescKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("piec")<=10) piecKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("cztery")<=10) czteryKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("trzy")<=10) trzyKolor++;
        else if (twojeKarty[i].find("kier")<=10 && twojeKarty[i].find("dwa")<=10) dwaKolor++;
         }
     }
    else;

    if ( (as>=1 && krol>=1 && dama>=1 && walet>=1 && dziesiec>=1) || //jesli jest piec kart, ktore sa o jedna wartosc wyzsze od poprzedniej, to jest to strit
         (krol>=1 && dama>=1 && walet>=1 && dziesiec>=1 && dziewiec>=1) || //as moze miec najwyzsza wartosc albo najnizsza wartosc (nie moze miec obu jednoczesnie)
         (dama>=1 && walet>=1 && dziesiec>=1 && dziewiec>=1 && osiem>=1) ||
         (walet>=1 && dziesiec>=1 && dziewiec>=1 && osiem>=1 && siedem>=1) ||
         (dziesiec>=1 && dziewiec>=1 && osiem>=1 && siedem>=1 && szesc>=1) ||
         (dziewiec>=1 && osiem>=1 && siedem>=1 && szesc>=1 && piec>=1) ||
         (osiem>=1 && siedem>=1 && szesc>=1 && piec>=1 && cztery>=1) ||
         (siedem>=1 && szesc>=1 && piec>=1 && cztery>=1 && trzy>=1) ||
         (szesc>=1 && piec>=1 && cztery>=1 && trzy>=1 && dwa>=1) ||
         (piec>=1 && cztery>=1 && trzy>=1 && dwa>=1 && as>=1) ) zwrot=0; //strit

    if (kier>=5 || karo>=5 || pik>=5 || trefl>=5) zwrot=1; //kolor - czyli co najmniej piec kart w tym samym kolorze
    if (asKolor==1 && krolKolor==1 && damaKolor==1 && waletKolor==1 && dziesiecKolor==1) zwrot=2; //poker krolewski - jesli go nie ma, szuka zwyklego pokera
        else if ( (krolKolor==1 && damaKolor==1 && waletKolor==1 && dziesiecKolor==1 && dziewiecKolor==1) ||
                  (damaKolor==1 && waletKolor==1 && dziesiecKolor==1 && dziewiecKolor==1 && osiemKolor==1) ||
                  (waletKolor==1 && dziesiecKolor==1 && dziewiecKolor==1 && osiemKolor==1 && siedemKolor==1) ||
                  (dziesiecKolor==1 && dziewiecKolor==1 && osiemKolor==1 && siedemKolor==1 && szescKolor==1) ||
                  (dziewiecKolor==1 && osiemKolor==1 && siedemKolor==1 && szescKolor==1 && piecKolor==1) ||
                  (osiemKolor==1 && siedemKolor==1 && szescKolor==1 && piecKolor==1 && czteryKolor==1) ||
                  (siedemKolor==1 && szescKolor==1 && piecKolor==1 && czteryKolor==1 && trzyKolor==1) ||
                  (szescKolor==1 && piecKolor==1 && czteryKolor==1 && trzyKolor==1 && dwaKolor==1) ||
                  (piecKolor==1 && czteryKolor==1 && trzyKolor==1 && dwaKolor==1 && asKolor==1) ) zwrot=3; //poker - czyli strit w kolorze
    return zwrot;
}

int Kombinacje::powtorzenia(std::string *twojeKarty)
{
    int zwrot=0;
    int as=0, krol=0, dama=0, walet=0, dziesiec=0, dziewiec=0, osiem=0, siedem=0, szesc=0, piec=0, cztery=0, trzy=0, dwa=0;
    bool para=false, dwie_pary=false, trojka=false, full=false, kareta=false;
    for (int i=0; i<7; i++) //zlicza ilosc wystapien danych wartosci
    {
                      if (twojeKarty[i].find("as")<=10) {as++; continue;}
                 else if (twojeKarty[i].find("krol")<=10) {krol++;continue ;}
                 else if (twojeKarty[i].find("dama")<=10) {dama++; continue;}
                 else if (twojeKarty[i].find("walet")<=10) {walet++; continue;}
                 else if (twojeKarty[i].find("dziesiec")<=10) {dziesiec++; continue;}
                 else if (twojeKarty[i].find("dziewiec")<=10) {dziewiec++; continue;}
                 else if (twojeKarty[i].find("osiem")<=10) {osiem++; continue;}
                 else if (twojeKarty[i].find("siedem")<=10) {siedem++; continue;}
                 else if (twojeKarty[i].find("szesc")<=10) {szesc++; continue;}
                 else if (twojeKarty[i].find("piec")<=10) {piec++; continue;}
                 else if (twojeKarty[i].find("cztery")<=10) {cztery++;continue ;}
                 else if (twojeKarty[i].find("trzy")<=10) {trzy++; continue;}
                 else if (twojeKarty[i].find("dwa")<=10) {dwa++; continue;}
                 else continue;
    }

    if (as>=4 || krol>=4 || dama>=4 || walet>=4 || dziesiec>=4 || dziewiec>=4 || osiem>=4 || siedem>=4 || szesc>=4 || piec>=4 || cztery>=4 || trzy>=4 || dwa>=4)
        {kareta=true;} //kareta - czyli cztery karty o jednakowej wartosci
    if (as==3 || krol==3 || dama==3 || walet==3 || dziesiec==3 || dziewiec==3 || osiem==3 || siedem==3 || szesc==3 || piec==3 || cztery==3 || trzy==3 || dwa==3)
        {trojka=true;} //trojka - czyli trzy karty o jednakowej wartosci
    if (trojka==false && kareta==false && int(as/2)+int(krol/2)+int(dama/2)+int(walet/2)+int(dziesiec/2)+int(dziewiec/2)+int(osiem/2)+int(siedem/2)+int(szesc/2)+int(piec/2)+int(cztery/2)+int(trzy/2)+int(dwa/2)>=2)
        {dwie_pary=true;} //dwie pary - czyli dwie karty o jednakowej wartosci i kolejne dwie karty o jednakowej wartosci, ale innej niz wartosci pierwszej pary
    if (((as==2) || (krol==2) || (dama==2) || (walet==2) || (dziesiec==2) || (dziewiec==2) || (osiem==2) || (siedem==2) || (szesc==2) || (piec==2) || (cztery==2) || (trzy==2) || (dwa==2) ) )
        {para=true;} //para - czyli dwie karty o jednakowej wartosci

         if ((trojka && para) || (trojka && dwie_pary)) {zwrot=5;} //full - czyli trojka i para
    else if (kareta) {zwrot=4;} //kareta
    else if (trojka) {zwrot=3;} //trojka
    else if (dwie_pary) {zwrot=2;} //dwie pary
    else if (para) {zwrot=1;} //para
         return zwrot;
}

