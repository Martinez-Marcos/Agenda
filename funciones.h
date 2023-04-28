#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define MAX 20
#define Usado 1
#define MAXIMA_LONGITUD_CADENA 1000
#include<windows.h>

typedef struct listas{

    char nombre[50];
    int edad;
    int dni;
    int estado;

}personaLista;

personaLista listaAgenda[MAX];
personaLista *listado[MAX];


void agregarNuevo(int lib);

int obtenerEspacioLibre();

int borrarpersona(int flag);

void listaordenada(personaLista *listadob[],int flag);

void imprimrGrafico();
#endif // FUNCIONES_H_INCLUDED
