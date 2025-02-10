#include "oppgav1.h"

float f(float x)
{
    return (x*x*x) - (6*x*x) + (11*x) - 6;
}

float df(float x)
{
    return (3*x*x) - (12*x) + 11;
}

std::vector<Vertex> GetVertices1()
{
    std::vector<Vertex> vertices;

    // 1. Velg en egen funksjon f (x) og en passende denisjonsmengde Df = [a, b].
    Df d_f {-1000, 1000};

    // 2. Velg antall intervaller n slik at du får n + 1 punkter x0, x1, . . . , xn og
    // oppløsning h = ∆x = b−a
    // n .
    int n = 10000;
    float h = (d_f.b - d_f.a ) / n;

    // 3. Regn ut funksjonsverdier f (xi) i hvert punkt. Regn også ut f ′(x) eller
    // Newton's dierenskvotient i hvert punkt.

    float x =  d_f.a;
    float green, red;

    //  4. Bestem en farge for hvert verteks slik at grafen får en farge (for eksempel
    // grønn) når funksjonen er stigende, og en annen farge (for eksempel rød)
    // når funksjonen er avtakende.

    for (int i = 0; i < n + 1; i++)
    {
        if (df(x) > 0.0)
        {
            green = 1.0;
                red= 0.0;
        }
        else
        {
            green = 0.0;
            red = 1.0;
        }

        // 5. Beregn funksjonsverdi og skriv ut verteksdata for hvert punkt på en tekst-
        // l. På første linje i len skal antall punkter stå. Deretter følger verteksdata
        // for hvert punkt linje for linje

        vertices.push_back(Vertex{x,f(x),0.0f, red, green, 0.0f, 0.0f, 0.0f});

        x+=h;
    }

    return vertices;
}
