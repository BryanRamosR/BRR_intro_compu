#include <stdio.h>

int main()
{
    int anchoP; //ancho de la pantalla 
    int altoP; // alto de la pantalla
    float porcentajeX; // Es el porcentaje donde se encuentra la coordenada X
    float porcentajeY; // Es el porcentaje donde se encuentra la coordenada Y
    float anchoE; //ancho del elemento a mostrar
    float altoE; // alto del elemento a mostrar 
    int coordenadas_porcentajeX;
    int coordenadas_porcentajeY;
    int coordenadas_a_mostrarX;
    int coordenadas_a_mostrarY;

    scanf_s("%i", &anchoP);
    scanf_s("%i", &altoP);
    scanf_s("%f", &porcentajeX);
    scanf_s("%f", &porcentajeY);
    scanf_s("%f", &anchoE);
    scanf_s("%f", &altoE);

    coordenadas_porcentajeX = anchoP * porcentajeX;
    coordenadas_porcentajeY = altoP * porcentajeY;
    coordenadas_a_mostrarX = anchoP * anchoE + coordenadas_porcentajeX;
    coordenadas_a_mostrarY = altoP * altoE + coordenadas_porcentajeY;

    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", anchoP, altoP, porcentajeX, porcentajeY, anchoE, altoE, coordenadas_porcentajeX, coordenadas_porcentajeY, coordenadas_a_mostrarX, coordenadas_a_mostrarY);

    return 0;
}
