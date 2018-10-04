//
// Created by Daniel Mezo on 02/10/2018.
//
#include "lista.h"

void main() {
    Lista lista;
    Element e;
    int op = 0;
    lista=listabidCreate();
    while (op != 9) {
        printf("Menu:\n");
        printf("1. Introducir elemento deseado\n");
        printf("2. Avanzar\n");
        printf("3. Retroceder\n");
        printf("4. Consultar\n");
        printf("5. Borrar elemento deseado\n");
        printf("6. Mostrar la lista\n");
        printf("7. Salir\n");
        scanf("%d",&op);
        switch (op) {
            case 1:
                printf("Introduce el elemento:\n");
                scanf("%d", &e);
                listabidIntroduceOrdenado(&lista, e);
            break;
            case 2:
                listabidAvanza(&lista);
            break;
            case 3:
                listabidRetrocede(&lista);
            break;
            case 4:
                listabidConsulta(&lista);
            break;
            case 5:

            break;
            case 6
                listabidBorrar(&lista);
            break;
            case 7:
                printf("Gracies per fer servir el programa\n");
            break;
        }
    }
    listabidDestruye(&lista);
}

