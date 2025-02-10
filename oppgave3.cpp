#include "oppgave3.h"

float f(float x, float y)
{
    return x*x * y;
}

std::vector<Vertex> GetVertices3()
{
    std::vector<Vertex> vertices;

    // Velg funksjonen av to variable som vi kaller apesadelen, f (x) = x^2y, et passende
    // område i xy-planet (eller xz-planet), og en oppdeling. Velg en oppløsning h (bruk
    // en grov oppløsning til å begynne med) og regn ut funksjonsverdier over området,
    // som på gur 2.2. Lag en tekstl med xyz (eventuelt også rgb og uv-koordinater)
    // linjevis. Antall linjer skal stå øverst i la
    float xmin=0.0f, xmax=1.0f, ymin=0.0f, ymax=1.0f, h=0.25f;
    for (auto x=xmin; x<xmax; x+=h)
    {
        for (auto y=ymin; y<ymax; y+=h)
        {
            float z = f(x, y);
            vertices.push_back(Vertex{x,y,z,x,y,z});
            z = f(x+h, y);
            vertices.push_back(Vertex{x+h,y,z,x,y,z});
            z = z = f(x, y+h);
            vertices.push_back(Vertex{x,y+h,z,x,y,z});
            vertices.push_back(Vertex{x,y+h,z,x,y,z});
            z = z = f(x+h, y);
            vertices.push_back(Vertex{x+h,y,z,x,y,z});
            z = z = f(x+h, y+h);
            vertices.push_back(Vertex{x+h,y+h,z,x,y,z});
        }
    }
    return vertices;
}
