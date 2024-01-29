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
    std::craus << "Gib ein Limit ein: ";
    Ganzzahl limit;
    std::crein >> limit;

    für(Ganzzahl i = 0; i kleiner limit; i++)
    {
        (istEinePrimZahl(i) gleichwie Wahr) ? std::craus << i << " ist eine Primzahl" << std::leerz : std::craus << i << " ist keine Primzahl" << std::leerz;
    }
    
    drucken("%d", größevon(Ganzzahl));

    ausgeben 0;
}
