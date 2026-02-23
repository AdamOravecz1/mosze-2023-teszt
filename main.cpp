#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; 
    // HIBA: NELEMENTS nincs deklarálva, a helyes konstans neve N_ELEMENTS lenne.

    std::cout << '1-100 ertekek duplazasa'
    // HIBA: hiányzik a pontosvessző a sor végéről.
    // HIBA: egyszeres idézőjel karakter literált jelent, nem stringet → "" kellene.

    for (int i = 0;)
    // HIBA: a for ciklus feltétele és léptetése hiányzik (szintaktikai hiba).
    {
        b[i] = i * 2;
        // HIBA: i soha nem változik → végtelen ciklus lenne.
        // HIBA: nincs határellenőrzés (pl. i < N_ELEMENTS).
    }

    for (int i = 0; i; i++)
    // HIBA: a feltétel hibás (i önmagában), így a ciklus nem fog lefutni.
    {
        std::cout << "Ertek:"
        // HIBA: hiányzik a pontosvessző.
        // HIBA: nem írja ki b[i] értékét.
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag;
    // HIBA: az atlag változó nincs inicializálva (szemét értékről indul).

    for (int i = 0; i < N_ELEMENTS, i++)
    // HIBA: vessző van pontosvessző helyett a feltétel után.
    {
        atlag += b[i]
        // HIBA: hiányzik a pontosvessző.
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
