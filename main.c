//
// Created by Daniel Mezo on 02/10/2018.
//
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarLista(ListaBid *lista)
{
    listabidGoFirst(&lista);
    while (!listabidFinal(&lista)!=1)
    {
        printf("\n\t%d", listabidConsulta(lista)) ;
        listabidAvanza(&lista);
    }
}
void llenarLista(ListaBid *lista)
{
    printf("Insercion de los elementos\n");
    listabidIntroduceOrdenado(&lista, 5);
    listabidIntroduceOrdenado(&lista, 55);
    listabidIntroduceOrdenado(&lista, 10);
    listabidIntroduceOrdenado(&lista, 21);
    listabidIntroduceOrdenado(&lista, 24);
    listabidIntroduceOrdenado(&lista, 8);
}
int main(int argc, const char * argv[]) {
    ListaBid lista;

    lista = listabidCreate();
    llenarLista(&lista);
    printf("Mostramos la lista\n");
    mostrarLista(lista);

    return 0;
}
