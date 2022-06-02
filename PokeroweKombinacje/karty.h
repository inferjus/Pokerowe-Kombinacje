#ifndef KARTY_H
#define KARTY_H
#include <string>
#include <array>
const int talia_size=52;
const std::string talia[talia_size] =
    {
        "dwa_kier", "trzy_kier", "cztery_kier", "piec_kier", "szesc_kier", "siedem_kier", "osiem_kier", "dziewiec_kier", "dziesiec_kier", "walet_kier", "dama_kier", "krol_kier", "as_kier",
        "dwa_karo", "trzy_karo", "cztery_karo", "piec_karo", "szesc_karo", "siedem_karo", "osiem_karo", "dziewiec_karo", "dziesiec_karo", "walet_karo", "dama_karo", "krol_karo", "as_karo",
        "dwa_pik", "trzy_pik", "cztery_pik", "piec_pik", "szesc_pik", "siedem_pik", "osiem_pik", "dziewiec_pik", "dziesiec_pik", "walet_pik", "dama_pik", "krol_pik", "as_pik",
        "dwa_trefl", "trzy_trefl", "cztery_trefl", "piec_trefl", "szesc_trefl", "siedem_trefl", "osiem_trefl", "dziewiec_trefl", "dziesiec_trefl", "walet_trefl", "dama_trefl", "krol_trefl", "as_trefl"
    };

#endif // KARTY_H

/* Oto fundament calego programu. Przyznam szczerze, ze zastosowanie tablicy stringow z nazwami kart to pomysl niezbyt trafiony.
 * Lepiej byloby zastosowac strukture okreslajaca kolor i wartosc danej karty, co znacznie by ulatwilo sprawdzanie kombinacji.
 * Przez to, ze program operuje na tablicy stringow, trzeba znacznie bardziej sie natrudzic z ich znalezieniem.
 * Co prawda w pokerze Texas Hold'em gra sie talia 52 kart, a kombinacji nie jest bardzo duzo i nie sa specjalnie skomplikowane, dzieki czemu
 * mozna bylo wciaz efektywnie pracowac nad programem, ale gdyby to byla bardziej zlozona gra, to lepiej byloby zaczac pisac program od nowa
 * i przemyslec jeszcze raz jego fundamenty (w tym przypadku jak zaimplementowac talie).
 * Boje sie myslec ile musialbym jeszcze rzeczy uwzglednic, gdybym zamiast programu do Texas Hold'em robil program do Omaha Hold'em.
 *
 * To nauczka na przyszlosc - dobrze sie zastanowic jak program ma dzialac i czy nie da sie tego dzialania jeszcze bardziej uproscic.
 * Zaleta pracy na tak okropnych fundamentach jest taka, ze zmusza do myslenia i kombinowania. Nie zawsze w pracy bedzie sie pracowalo na
 * dobrze przemyslanym projekcie i trzeba po prostu czasem pomeczyc sie z nieprzyjaznym kodem. Nie moge jednak tego traktowac jako
 * usprawiedliwienia swojej glupoty i musze wyciagnac wnioski na przyszlosc.
 * */
