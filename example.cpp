#include "german.hpp"

WahrFalschOption istEinePrimZahl(Ganzzahl zahl)
{
    wenn(zahl kleiner 2) { ausgeben Falsch; }
    wenn(zahl kleiner 4) { ausgeben Wahr; }

    für(Ganzzahl i = 2; i kleiner zahl; i++)
    {
        wenn(zahl % i gleichwie 0)
        {
            ausgeben Falsch;
        }
    }

    ausgeben Wahr;
}

Ganzzahl Haupt()
{
    std::raus << "Gib ein Limit ein: ";
    Ganzzahl limit;
    std::rein >> limit;

    für(Ganzzahl i = 0; i kleiner limit; i++)
    {
        (istEinePrimZahl(i) gleichwie Wahr) ? std::raus << i << " ist eine Primzahl" << std::leerz : std::raus << i << " ist keine Primzahl" << std::leerz;
    }

    ausgeben 0;
}
