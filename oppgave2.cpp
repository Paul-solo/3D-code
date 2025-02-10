#include "oppgave2.h"
#include <math.h>

std::vector<Vertex> GetVertices2()
{
    std::vector<Vertex> vertices;

    // Lag en l med datapunkter for en tredimensjonal spiral, som forklart i foreles-
    // ningsnotater 2.4Bestem selv en steglengde for parameteren t og verteksfarger.
    // Benytt samme lformat som i forrige oppgave

    float x, y, z;
    z = 0;

    for (float i = 0; i < 6 * 3.141593; i += 0.1)
    {
        x = cos(i);
        y = sin(i);
        z += 0.1;

        vertices.push_back(Vertex{x, y, z, 1, 0.8, 0.3, 0, 0});
    }

    return vertices;
}
