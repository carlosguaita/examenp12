#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarCoordenadaX()
{
    float x;
    printf("Ingrese la coordenada X: ");
    scanf("%f", &x);
    return x;
}

float ingresarCoordenadaY()
{
    float x;
    printf("Ingrese la coordenada Y: ");
    scanf("%f", &x);
    return x;
}

float calcularDistancia(float x1, float y1, float x2, float y2)
{
    float d;
    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return d;
}

float areaTrianguloInterno(float a, float b, float c)
{
    if (pow(a, 2) == (pow(b, 2) + pow(c, 2)))
    {

        float h1 = (b * c) / a;
        float m = pow(c, 2) / a;
        float h2 = h1 * m / c;
        float n1 = pow(h1, 2) / c;
        float area = n1 * h2 / 2;
        return area;
    }
    return 0;
}
