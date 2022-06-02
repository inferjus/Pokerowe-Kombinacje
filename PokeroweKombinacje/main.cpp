#include <iostream>                 //program napisal Adam Jozef Bogusz
#include <typeinfo>                 //v1.0.0
#include <chrono>
#include <thread>
#include <conio.h>
#include <stdio.h>
#include "losowanie.h"
#include "karty.h"
#include "druk.h"
#include "kombinacje.h"
#ifdef _WIN32
#include "Windows.h"                //jezeli system operacyjny to Windows, dodaje te biblioteke
#endif

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void ladowanie(); //wyswietla trzy kropki w odstepie czasowym 0.4s
void strzalki(); //wyswietla dwie strzalki, aby latwiej zorientowac sie gdzie sa karty

int main()
{
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);    //jezeli system operacyjny to Windows, pozwala na wypisywanie znakow rozszerzonego ASCII, ktore sa uzywane w metodach klasy "Druk"
    #endif

    int punkty=0, opcja, ilosc_podejsc=0;
    string twojeKarty[7], kombinacja, odpowiedz;
    Losowanie wygeneruj=Losowanie(7); //inicjalizuje klase "Losowanie" dla liczby 7
    Druk drukuj=Druk(); //inicjalizuje klase "Druk"
    Kombinacje kombinacje=Kombinacje(twojeKarty); //inicjalizuje klase "Kombinacje"

    cout<<"Witaj w programie do ćwiczenia rozpoznawania kombinacji pokerowych!\n"
          "Działa on w następujący sposób: losuje siedem kart i ustala jaką najwyższą kombinację można z nich ułożyć.\n"
          "Karty zostają wyświetlone na ekranie, a twoim zadaniem jest rozpoznać najwyższą kombinację, jaką można ułożyć z wylosowanych kart.\n"
          "Po rozpoznaniu kombinacji podaj odpowiadający jej numer, który odczytasz z wyświetlonej instrukcji.\n"
          "Za każdą poprawnie rozpoznaną kombinację dostaniejsz jeden punkt.\n"
          "Gotowy?\n"
          ">>wciśnij *ENTER*<<";
    cin.ignore();
    ladowanie();

    while(true)
    {

                if (ilosc_podejsc>0) strzalki();
                ilosc_podejsc++;
                wygeneruj.rng(twojeKarty); //losuje karty i zapisuje w tabeli stringow "twojeKarty"
                drukuj.drukowanie(twojeKarty); //wyswietla na ekranie wylosowane karty przechowywane w tablicy twojeKarty
            //kombinacje.coToZaKombinacja(); //wyswietla nazwe najwyzszej kombinacji, jaka da sie ulozyc z wylosowanych kart
                string kombo=kombinacje.zwrotKombinacji(); //przypisuje kombinacje do zmiennej "kombo"
            //cout<<"kombo: "<<kombo<<"\n";
                cout<<"Podaj numer najwyższej kombinacji, jaką można utworzyć z danych kart:\n"
                        "   10 - poker królewski        9 - poker\n"
                        "    8 - kareta                 7 - full\n"
                        "    6 - kolor                  5 - strit\n"
                        "    4 - trójka                 3 - dwie pary\n"
                        "    2 - para                   1 - wysoka karta\n"
                        "           111 - zakończ program\n";
                cout<<"Podaj swoją kombinację: ";cin>>opcja;
                while (opcja<1 || (opcja>10 && opcja!=111) || typeid(opcja)!=typeid(int)) /*podanie wartosci o innym typie lub z niewlasciwego
                                                                                            zakresu skutkuje przymuszeniem do podania swojej propozycji ponownie*/
                {
                    cin.clear();
                    cin.ignore();
                    cout<<"Podaj swoją kombinację: ";cin>>opcja;
                }
                     if (opcja==10) {kombinacja="poker krolewski";} //ustawia wlasciwa zmienna "kombinacja" do porownania ze zmienna "kombo"
                else if (opcja==9)  {kombinacja="poker";}
                else if (opcja==8)  {kombinacja="kareta";}
                else if (opcja==7)  {kombinacja="full";}
                else if (opcja==6)  {kombinacja="kolor";}
                else if (opcja==5)  {kombinacja="strit";}
                else if (opcja==4)  {kombinacja="trojka";}
                else if (opcja==3)  {kombinacja="dwie pary";}
                else if (opcja==2)  {kombinacja="para";}
                else if (opcja==1)  {kombinacja="wysoka karta";}
                else if (opcja==111){kombinacja="koniec";}

                     if (kombo=="poker krolewski")  {odpowiedz="poker królewski";}//ustawia odpowiedz z polskimi znakami do wyswietlenia, gdyby podana kombinacja była zla
                else if (kombo=="poker")            {odpowiedz="poker";}
                else if (kombo=="kareta")           {odpowiedz="kareta";}
                else if (kombo=="full")             {odpowiedz="full";}
                else if (kombo=="kolor")            {odpowiedz="kolor";}
                else if (kombo=="strit")            {odpowiedz="strit";}
                else if (kombo=="trojka")           {odpowiedz="trójka";}
                else if (kombo=="dwie pary")        {odpowiedz="dwie pary";}
                else if (kombo=="para")             {odpowiedz="para";}
                else if (kombo=="wysoka karta")     {odpowiedz="wysoka karta";}

                     if (kombinacja=="koniec") //podanie "111" konczy program
                {
                    cout<<"KONIEC"<<endl;
                    cout<<"Twoje punkty: "<<punkty<<"/"<<ilosc_podejsc-1<<endl;
                    break;
                }
                else if (kombo==kombinacja) //podanie prawidlowej odpowiedzi przyznaje 1 punkt
                {                    
                    punkty++;
                    cout<<"  Prawidłowa odpowiedź!\nTwoje punkty: "<<punkty<<"/"<<ilosc_podejsc<<endl;
                    ladowanie();
                }                
                else if (kombo!=kombinacja) //niepoprawna odpowiedz nie przyznaje punktu
                {
                    cout<<"  Błędna odpowiedź. Poprawna odpowiedź to "<<odpowiedz<<".\nTwoje punkty: "<<punkty<<"/"<<ilosc_podejsc<<endl;
                    ladowanie();
                }
            }
    return 0;
}

void ladowanie()
{
    cout<<".";sleep_until(system_clock::now() + nanoseconds(400000000)); //kropka i czekanie
    cout<<".";sleep_until(system_clock::now() + nanoseconds(400000000)); //kropka i czekanie
    cout<<".";sleep_until(system_clock::now() + nanoseconds(400000000)); //kropka i czekanie
    cout<<"\n";
}
void strzalki() //dwie strzalki
{
cout<<"\n";
cout<<"              ┌────┐                   ┌────┐\n";
cout<<"              │    │                   │    │\n";
cout<<"              │    │                   │    │\n";
cout<<"              │    │                   │    │\n";
cout<<"              │    │                   │    │\n";
cout<<"             ┌┘    └┐                 ┌┘    └┐\n";
cout<<"         ┌───┘      └───┐         ┌───┘      └───┐\n";
cout<<"         └─┐          ┌─┘         └─┐          ┌─┘\n";
cout<<"           └┐        ┌┘             └┐        ┌┘\n";
cout<<"            └─┐    ┌─┘               └─┐    ┌─┘\n";
cout<<"              └┐  ┌┘                   └┐  ┌┘\n";
cout<<"               └┐┌┘                     └┐┌┘\n";
cout<<"                └┘                       └┘\n";
cout<<"\n";
}
