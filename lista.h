//
// Created by Daniel Mezo on 02/10/2018.
//

#ifndef EJERCICIO1_LISTA_H
#define EJERCICIO1_LISTA_H
typedef int Element;
typedef struct n{
    Element e;
    struct n *anterior;
    struct n *seguent;
}Node;
typedef struct{
    Node *first;
    Node *last;
    Node *pdi;
}listaBID;

listaBID listabidCreate();
void listabidIntroduceOrdenado(listaBID *lista, Element e);
//void listabidIntroduceDelante(listaBID *lista, Element e);
//void listabidIntroduceDetras(listaBID *lista, Element e);
Element listabidConsulta(listaBID lista);
void listabidBorrar(listaBID *lista);
void listabidAvanza(listaBID *lista);//Tira una posicion hacia el final de la cola
void listabidRetrocede(listaBID *lista);//Tira una posicion hacia adelante de la cola
int listabidFinal(listaBID lista);
int listabidInicio(listaBID lista);
void listabidGoFirst(listaBID *lista);
void listabidGoLast(listaBID *lista);
int listabidBacia(listaBID lista);
void listabidDestruye(listaBID *lista);

#endif //EJERCICIO1_LISTA_H
