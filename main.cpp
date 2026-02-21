#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int b = new int[NELEMENTS]; 
    std::cout << '1-100 ertekek duplazasa' 
    for (int i = 0;) 
    {
        b[i] = i 2;
    }
    for (int i = 0; i; i++) 
    {
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
/*
Hibák:
NELEMENTS nincs definiálva, N_ELEMENTS kell (7)
Ídézőjel hibás, pontosvessző hiányzik (8)
Hiányos for loop léptetés és feltétel (9)
For loop hiba 0-nál kilép (13)
Hiányzó pontosvessző (15)
int atlag nincs inicializálva, memóri szemét (18)
for loopban vessző a pontosvessző helyett (19)
Hiányzó pontosvessző (21)
Memória nincs felszabadítva 
*/