#include "druk.h"
#include <iostream>

void Druk::drukowanie(std::string *twojeKarty)
{
/* Metoda ta wyswietla znaki z tzw. rozszerzonego ASCII, ktorych windowsowa konsola poprawnie nie wyswietla.
 * Z tego powodu w funkcji "main" zastosowalem "SetConsoleOutputCP(CP_UTF8)", ktore dziala, kiedy system operacyjny zostanie rozpoznany jako Windows.
 * Pozwala to na poprawne wyswietlanie znakow, ktore sluza za obwodke kart.
 * Funkcja ta zawsze wyswietli 7 kart, a dzieki funkcji ".find", ktora wyszukuje wzorce w postaci kolorow i wartosci kart w ich nazwach,
 * wyswietla odpowiednie znaki i symbole.
 * */

                                                  std::cout<<"╔════════╗ ╔════════╗ ╔════════╗ ╔════════╗ ╔════════╗ ╔════════╗ ╔════════╗"<<"\n";
                                                  std::cout<<"║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║"<<"\n";
for (int i=0; i<7; i++) {
     if (twojeKarty[i].find("kier")<=10 && i==0) {std::cout<<"║      ♥ ║ ";}
else if (twojeKarty[i].find("karo")<=10 && i==0) {std::cout<<"║      ♦ ║ ";}
else if (twojeKarty[i].find("pik")<=10 && i==0)  {std::cout<<"║      ♠ ║ ";}
else if (twojeKarty[i].find("trefl")<=10 && i==0){std::cout<<"║      ♣ ║ ";}
                if (twojeKarty[i].find("kier")<=10 && i==1) {std::cout<<"║      ♥ ║ ";}
           else if (twojeKarty[i].find("karo")<=10 && i==1) {std::cout<<"║      ♦ ║ ";}
           else if (twojeKarty[i].find("pik")<=10 && i==1)  {std::cout<<"║      ♠ ║ ";}
           else if (twojeKarty[i].find("trefl")<=10 && i==1){std::cout<<"║      ♣ ║ ";}
                           if (twojeKarty[i].find("kier")<=10 && i==2) {std::cout<<"║      ♥ ║ ";}
                      else if (twojeKarty[i].find("karo")<=10 && i==2) {std::cout<<"║      ♦ ║ ";}
                      else if (twojeKarty[i].find("pik")<=10 && i==2)  {std::cout<<"║      ♠ ║ ";}
                      else if (twojeKarty[i].find("trefl")<=10 && i==2){std::cout<<"║      ♣ ║ ";}
                                      if (twojeKarty[i].find("kier")<=10 && i==3) {std::cout<<"║      ♥ ║ ";}
                                 else if (twojeKarty[i].find("karo")<=10 && i==3) {std::cout<<"║      ♦ ║ ";}
                                 else if (twojeKarty[i].find("pik")<=10 && i==3)  {std::cout<<"║      ♠ ║ ";}
                                 else if (twojeKarty[i].find("trefl")<=10 && i==3){std::cout<<"║      ♣ ║ ";}
                                                 if (twojeKarty[i].find("kier")<=10 && i==4) {std::cout<<"║      ♥ ║ ";}
                                            else if (twojeKarty[i].find("karo")<=10 && i==4) {std::cout<<"║      ♦ ║ ";}
                                            else if (twojeKarty[i].find("pik")<=10 && i==4)  {std::cout<<"║      ♠ ║ ";}
                                            else if (twojeKarty[i].find("trefl")<=10 && i==4){std::cout<<"║      ♣ ║ ";}
                                                            if (twojeKarty[i].find("kier")<=10 && i==5) {std::cout<<"║      ♥ ║ ";}
                                                       else if (twojeKarty[i].find("karo")<=10 && i==5) {std::cout<<"║      ♦ ║ ";}
                                                       else if (twojeKarty[i].find("pik")<=10 && i==5)  {std::cout<<"║      ♠ ║ ";}
                                                       else if (twojeKarty[i].find("trefl")<=10 && i==5){std::cout<<"║      ♣ ║ ";}
                                                                       if (twojeKarty[i].find("kier")<=10 && i==6) {std::cout<<"║      ♥ ║ ";}
                                                                  else if (twojeKarty[i].find("karo")<=10 && i==6) {std::cout<<"║      ♦ ║ ";}
                                                                  else if (twojeKarty[i].find("pik")<=10 && i==6)  {std::cout<<"║      ♠ ║ ";}
                                                                  else if (twojeKarty[i].find("trefl")<=10 && i==6){std::cout<<"║      ♣ ║ ";}}
std::cout<<"\n║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║"<<"\n";
for (int i=0; i<7; i++) {
     if (twojeKarty[i].find("as")<=10 && i==0)       {std::cout<<"║  A     ║ ";}
else if (twojeKarty[i].find("krol")<=10 && i==0)     {std::cout<<"║  K     ║ ";}
else if (twojeKarty[i].find("dama")<=10 && i==0)     {std::cout<<"║  Q     ║ ";}
else if (twojeKarty[i].find("walet")<=10 && i==0)    {std::cout<<"║  J     ║ ";}
else if (twojeKarty[i].find("dziesiec")<=10 && i==0) {std::cout<<"║ 10     ║ ";}
else if (twojeKarty[i].find("dziewiec")<=10 && i==0) {std::cout<<"║  9     ║ ";}
else if (twojeKarty[i].find("osiem")<=10 && i==0)    {std::cout<<"║  8     ║ ";}
else if (twojeKarty[i].find("siedem")<=10 && i==0)   {std::cout<<"║  7     ║ ";}
else if (twojeKarty[i].find("szesc")<=10 && i==0)    {std::cout<<"║  6     ║ ";}
else if (twojeKarty[i].find("piec")<=10 && i==0)     {std::cout<<"║  5     ║ ";}
else if (twojeKarty[i].find("cztery")<=10 && i==0)   {std::cout<<"║  4     ║ ";}
else if (twojeKarty[i].find("trzy")<=10 && i==0)     {std::cout<<"║  3     ║ ";}
else if (twojeKarty[i].find("dwa")<=10 && i==0)      {std::cout<<"║  2     ║ ";}
         if (twojeKarty[i].find("as")<=10 && i==1)       {std::cout<<"║  A     ║ ";}
    else if (twojeKarty[i].find("krol")<=10 && i==1)     {std::cout<<"║  K     ║ ";}
    else if (twojeKarty[i].find("dama")<=10 && i==1)     {std::cout<<"║  Q     ║ ";}
    else if (twojeKarty[i].find("walet")<=10 && i==1)    {std::cout<<"║  J     ║ ";}
    else if (twojeKarty[i].find("dziesiec")<=10 && i==1) {std::cout<<"║ 10     ║ ";}
    else if (twojeKarty[i].find("dziewiec")<=10 && i==1) {std::cout<<"║  9     ║ ";}
    else if (twojeKarty[i].find("osiem")<=10 && i==1)    {std::cout<<"║  8     ║ ";}
    else if (twojeKarty[i].find("siedem")<=10 && i==1)   {std::cout<<"║  7     ║ ";}
    else if (twojeKarty[i].find("szesc")<=10 && i==1)    {std::cout<<"║  6     ║ ";}
    else if (twojeKarty[i].find("piec")<=10 && i==1)     {std::cout<<"║  5     ║ ";}
    else if (twojeKarty[i].find("cztery")<=10 && i==1)   {std::cout<<"║  4     ║ ";}
    else if (twojeKarty[i].find("trzy")<=10 && i==1)     {std::cout<<"║  3     ║ ";}
    else if (twojeKarty[i].find("dwa")<=10 && i==1)      {std::cout<<"║  2     ║ ";}
             if (twojeKarty[i].find("as")<=10 && i==2)       {std::cout<<"║  A     ║ ";}
        else if (twojeKarty[i].find("krol")<=10 && i==2)     {std::cout<<"║  K     ║ ";}
        else if (twojeKarty[i].find("dama")<=10 && i==2)     {std::cout<<"║  Q     ║ ";}
        else if (twojeKarty[i].find("walet")<=10 && i==2)    {std::cout<<"║  J     ║ ";}
        else if (twojeKarty[i].find("dziesiec")<=10 && i==2) {std::cout<<"║ 10     ║ ";}
        else if (twojeKarty[i].find("dziewiec")<=10 && i==2) {std::cout<<"║  9     ║ ";}
        else if (twojeKarty[i].find("osiem")<=10 && i==2)    {std::cout<<"║  8     ║ ";}
        else if (twojeKarty[i].find("siedem")<=10 && i==2)   {std::cout<<"║  7     ║ ";}
        else if (twojeKarty[i].find("szesc")<=10 && i==2)    {std::cout<<"║  6     ║ ";}
        else if (twojeKarty[i].find("piec")<=10 && i==2)     {std::cout<<"║  5     ║ ";}
        else if (twojeKarty[i].find("cztery")<=10 && i==2)   {std::cout<<"║  4     ║ ";}
        else if (twojeKarty[i].find("trzy")<=10 && i==2)     {std::cout<<"║  3     ║ ";}
        else if (twojeKarty[i].find("dwa")<=10 && i==2)      {std::cout<<"║  2     ║ ";}
                 if (twojeKarty[i].find("as")<=10 && i==3)       {std::cout<<"║  A     ║ ";}
            else if (twojeKarty[i].find("krol")<=10 && i==3)     {std::cout<<"║  K     ║ ";}
            else if (twojeKarty[i].find("dama")<=10 && i==3)     {std::cout<<"║  Q     ║ ";}
            else if (twojeKarty[i].find("walet")<=10 && i==3)    {std::cout<<"║  J     ║ ";}
            else if (twojeKarty[i].find("dziesiec")<=10 && i==3) {std::cout<<"║ 10     ║ ";}
            else if (twojeKarty[i].find("dziewiec")<=10 && i==3) {std::cout<<"║  9     ║ ";}
            else if (twojeKarty[i].find("osiem")<=10 && i==3)    {std::cout<<"║  8     ║ ";}
            else if (twojeKarty[i].find("siedem")<=10 && i==3)   {std::cout<<"║  7     ║ ";}
            else if (twojeKarty[i].find("szesc")<=10 && i==3)    {std::cout<<"║  6     ║ ";}
            else if (twojeKarty[i].find("piec")<=10 && i==3)     {std::cout<<"║  5     ║ ";}
            else if (twojeKarty[i].find("cztery")<=10 && i==3)   {std::cout<<"║  4     ║ ";}
            else if (twojeKarty[i].find("trzy")<=10 && i==3)     {std::cout<<"║  3     ║ ";}
            else if (twojeKarty[i].find("dwa")<=10 && i==3)      {std::cout<<"║  2     ║ ";}
                     if (twojeKarty[i].find("as")<=10 && i==4)       {std::cout<<"║  A     ║ ";}
                else if (twojeKarty[i].find("krol")<=10 && i==4)     {std::cout<<"║  K     ║ ";}
                else if (twojeKarty[i].find("dama")<=10 && i==4)     {std::cout<<"║  Q     ║ ";}
                else if (twojeKarty[i].find("walet")<=10 && i==4)    {std::cout<<"║  J     ║ ";}
                else if (twojeKarty[i].find("dziesiec")<=10 && i==4) {std::cout<<"║ 10     ║ ";}
                else if (twojeKarty[i].find("dziewiec")<=10 && i==4) {std::cout<<"║  9     ║ ";}
                else if (twojeKarty[i].find("osiem")<=10 && i==4)    {std::cout<<"║  8     ║ ";}
                else if (twojeKarty[i].find("siedem")<=10 && i==4)   {std::cout<<"║  7     ║ ";}
                else if (twojeKarty[i].find("szesc")<=10 && i==4)    {std::cout<<"║  6     ║ ";}
                else if (twojeKarty[i].find("piec")<=10 && i==4)     {std::cout<<"║  5     ║ ";}
                else if (twojeKarty[i].find("cztery")<=10 && i==4)   {std::cout<<"║  4     ║ ";}
                else if (twojeKarty[i].find("trzy")<=10 && i==4)     {std::cout<<"║  3     ║ ";}
                else if (twojeKarty[i].find("dwa")<=10 && i==4)      {std::cout<<"║  2     ║ ";}
                         if (twojeKarty[i].find("as")<=10 && i==5)       {std::cout<<"║  A     ║ ";}
                    else if (twojeKarty[i].find("krol")<=10 && i==5)     {std::cout<<"║  K     ║ ";}
                    else if (twojeKarty[i].find("dama")<=10 && i==5)     {std::cout<<"║  Q     ║ ";}
                    else if (twojeKarty[i].find("walet")<=10 && i==5)    {std::cout<<"║  J     ║ ";}
                    else if (twojeKarty[i].find("dziesiec")<=10 && i==5) {std::cout<<"║ 10     ║ ";}
                    else if (twojeKarty[i].find("dziewiec")<=10 && i==5) {std::cout<<"║  9     ║ ";}
                    else if (twojeKarty[i].find("osiem")<=10 && i==5)    {std::cout<<"║  8     ║ ";}
                    else if (twojeKarty[i].find("siedem")<=10 && i==5)   {std::cout<<"║  7     ║ ";}
                    else if (twojeKarty[i].find("szesc")<=10 && i==5)    {std::cout<<"║  6     ║ ";}
                    else if (twojeKarty[i].find("piec")<=10 && i==5)     {std::cout<<"║  5     ║ ";}
                    else if (twojeKarty[i].find("cztery")<=10 && i==5)   {std::cout<<"║  4     ║ ";}
                    else if (twojeKarty[i].find("trzy")<=10 && i==5)     {std::cout<<"║  3     ║ ";}
                    else if (twojeKarty[i].find("dwa")<=10 && i==5)      {std::cout<<"║  2     ║ ";}
                             if (twojeKarty[i].find("as")<=10 && i==6)       {std::cout<<"║  A     ║ ";}
                        else if (twojeKarty[i].find("krol")<=10 && i==6)     {std::cout<<"║  K     ║ ";}
                        else if (twojeKarty[i].find("dama")<=10 && i==6)     {std::cout<<"║  Q     ║ ";}
                        else if (twojeKarty[i].find("walet")<=10 && i==6)    {std::cout<<"║  J     ║ ";}
                        else if (twojeKarty[i].find("dziesiec")<=10 && i==6) {std::cout<<"║ 10     ║ ";}
                        else if (twojeKarty[i].find("dziewiec")<=10 && i==6) {std::cout<<"║  9     ║ ";}
                        else if (twojeKarty[i].find("osiem")<=10 && i==6)    {std::cout<<"║  8     ║ ";}
                        else if (twojeKarty[i].find("siedem")<=10 && i==6)   {std::cout<<"║  7     ║ ";}
                        else if (twojeKarty[i].find("szesc")<=10 && i==6)    {std::cout<<"║  6     ║ ";}
                        else if (twojeKarty[i].find("piec")<=10 && i==6)     {std::cout<<"║  5     ║ ";}
                        else if (twojeKarty[i].find("cztery")<=10 && i==6)   {std::cout<<"║  4     ║ ";}
                        else if (twojeKarty[i].find("trzy")<=10 && i==6)     {std::cout<<"║  3     ║ ";}
                        else if (twojeKarty[i].find("dwa")<=10 && i==6)      {std::cout<<"║  2     ║ ";}
     }
                                                std::cout<<"\n║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║ ║        ║"<<"\n";
                                                  std::cout<<"╚════════╝ ╚════════╝ ╚════════╝ ╚════════╝ ╚════════╝ ╚════════╝ ╚════════╝"<<"\n";

}
/*
std::cout<<"╔════════╗"<<"\n";
std::cout<<"║        ║"<<"\n";
std::cout<<"║       ♥║"<<"\n";
std::cout<<"║       ♦║"<<"\n";
std::cout<<"║       ♠║"<<"\n";
std::cout<<"║       ♣║"<<"\n";
std::cout<<"╚════════╝"<<"\n";*/
