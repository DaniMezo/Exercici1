//
// Created by Daniel Mezo on 02/10/2018.
//
#include "lista.h"
#include "stdlib.h"

int main(int argc, const char * argv[]) {
    Lista lista;

    lista = listabidCreate(&lista);
    printf("Mostramos la lista\n")
    mostrarLista(&lista);

    return 0;
}
void mostrarLista(Lista *lista)
{
    listabidGoLast(lista);
    while (!listabidFinal(*lista))
    {
        ELEMENT_debugElement(listabidConsulta(*lista));
        listabidAvanza(*lista);
    }
}
void llenarLista(Lista *lista)
{
    Element e, e1, e2, e3,e4,e5;
    printf("Insercion de los elementos\n");
    listabidIntroduceOrdenado(lista, e);
    listabidIntroduceOrdenado(lista, e1);
    listabidIntroduceOrdenado(lista, e2);
    listabidIntroduceOrdenado(lista, e3);
    listabidIntroduceOrdenado(lista, e4);
    listabidIntroduceOrdenado(lista, e5);
}
