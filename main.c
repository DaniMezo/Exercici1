//
// Created by Daniel Mezo on 02/10/2018.
//
#include <lista.h>

void main() {
    Lista lista;
    Element e;
    int op = 0;
    while (op != 9) {
        printf("Menu:\n");
        printf("1. Introducir elemento\n");
        printf("2. Avanzar\n");
        printf("3. Retroceder\n");
        printf("4. Ir al inicio de la lista\n");
        printf("5. Ir al final de la lista\n");
        printf("6. Consultar\n");
        printf("7. Borrar elemento\n");
        printf("8. Destuye la lista\n");
        printf("9. Salir\n");
        scanf("%d", &op);
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
                listabidGoFirst(&lista);
            break;
            case 5:
                listabidGoLast(&lista);
            break;
            case 6:
                listabidConsulta(&lista);
            break;
            case 7
                listabidBorrar(&lista);
            break;
            case 8:
                listabidDestruye(&lista);
            break;
            case 9:
            break;
        }

    }
}

