Pokerowe Kombinacje 

Wersja 1.0.0 

Program napisał: Adam Józef Bogusz 

Napisane w Qt Creator i testowane na Windows 10 


Program służy do ćwiczenia rozpoznawania pokerowych kombinacji w grze Texas Hold'em. 
Losuje on 7 kart i należy zauważyć najwyższą kombinację jaką da się ułożyć w wylosowanych kart. 

Opis działania programu jest dokładnie opisany w komentarzach w samym programie, tzn. przy każdej funkcji jest napisane co ona robi. 
W skrócie: program posiada zdefiniowaną tablicę stringów z nazwami kart. 
Przy losowaniu liczb do dobrania kart tworzy i wypełnia wektor liczbami od 0 do 51. 
Następnie losuje liczbę z tego zakresu minus ilość dokonanych losowań, pobiera ją z wektora i dobiera kartę z tablicy stringów. 
Liczba z wektora zostaje usunięta, dzięki czemu wylosowane karty się nie będą powtarzać. 
Proces wykonuje się łącznie siedem razy. 
Potem algorytmy sprawdzają jaką najwyższą kombinację można ułożyć z wylosowanych siedmiu kart, które zostają wypisane na ekranie, a użytkownik musi sam wybrać najwyższą kombinację, którą da się ułożyć. 
Przy prawidłowej odpowiedzi użytkownik zyskuje punkt, a przy nieprawidłowej nie zyskuje żadnego.