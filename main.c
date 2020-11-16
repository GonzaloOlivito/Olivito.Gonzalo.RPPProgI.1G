#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float descuento(float precio);
int contarCaracteres(char palabra[], char caracter);
int main()
{
    float precio;
    char palabra[10];
    char letra;
    printf("Ingrese el precio: ");
    scanf("%f",&precio);
    descuento(precio);
    printf("Ingrese la palabra a analizar: ");
    fflush(stdin);
    gets(palabra);
    printf("Ingrese la letra a buscar: ");
    scanf("%c",&letra);
    contarCaracteres(palabra,letra);


    return 0;
}
float descuento(float precio)
{
    float precioDesc = precio*0.95;

    return printf("El precio con descuento es: %.2f \n\n",precioDesc);
}

int contarCaracteres(char palabra[], char caracter)
{
    int contador=0;
    int letras = strlen(palabra);
     for(int i = 0; i < letras; i++)
   {
     if(palabra[i] == caracter || palabra[i] == caracter)
     {
        contador++;
     }
   }
    return printf("Aparece %d veces la letra %c", contador, caracter);
}



