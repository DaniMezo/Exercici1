//
// Created by Daniel Mezo on 02/10/2018.
//

#include "lista.h"

listaBID listabidCreate(){
    Lista l;
    l.first = (Node *) malloc (sizeof(Node)); //Asignacion de memoria
    if(l.first == NULL)
    {
        printf("Error al crear la llista\n");
    }else{
        l.last=(Node *) malloc (sizeof(Node));
        if(l.last==NULL)
        {
            printf("Error al crear la llista\n");
            free(l.first);
        }else{
            l.pdi=l.last;
            l.first->seguent=l.last;
            l.last->anterior=l.first;
            l.first->anterior=NULL;
            l.last->seguent=NULL;
        }
    }
    return l;
}
void listabidIntroduceDelante(listaBID *lista, Element e)
{
    Node *aux;
    aux = (Node *) malloc (sizeof(Node));
    if(aux==NULL)
    {
        printf("Error al insertar\n");
    }else{
        aux->seguent=l->pdi;
        aux->e=e;
        aux->anterior=l.>pdi->anterior;
        aux->anterior->seguent=aux;
        l->pdi->anterior= aux;
    }
}
void listabidIntroduceDetras(listaBID *lista, Element e){
    Node *aux;
    aux = (Node *) malloc (sizeof(Node));
    if(aux==NULL)
    {
        printf("Error al insertar\n");
    }else{
        aux->anterior=l->pdi;
        aux->e=e;
        aux->seguent=l.>pdi->seguent;
        aux->seguent->anterior=aux;
        l->pdi->seguent= aux;
    }
}
Element listabidConsulta(listaBID lista){
    Element e;
    Element e = ELEMENT_indefinit();

    if (l.pdi==l->first || l.pdi==l->last) {
        printf("No se puede consultar\n");
    }else{
        e = l.pdi->e;
    }
    return e;
}
void listabidBorrar(listaBID *lista){
    Node *aux;
    if(l->pdi==l->first || l->pdi == l->last)
    {
        printf("Error al insertar\n");
    }else{
        aux=l->pdi;
        l->pdi=l->pdi->seguent;
        aux->anterior->seguent=aux->seguent;
        free(aux);
    }
}
void listabidAvanza(listaBID *lista){
    if(l->pdi->seguent!=NULL)
    {
        l->pdi=l->pdi->seguent;
    }else{
        printf("Error\n");
    }
}
void listabidRetrocede(listaBID *lista){
    if(l->pdi==l->first)
    {
        printf("Error\n");
    }else{
        l->pdi=l->pdi->anterior;
    }
}
int listabidFinal(listaBID lista){
    return l.pdi==l.last;
}
int listabidInicio(listaBID lista){
    return l.pdi==l.first;
}
void listabidGoFirst(listaBID *lista){
    l->pdi=l->first->seguent;
}
void listabidGoLast(listaBID *lista){
    l->pdi=l->last->anterior;
}
int listabidBacia(listaBID lista){
    return l.first->seguent==l.last;
}
void listabidDestruye(listaBID *lista){
    Node *aux;
    aux=l->first;
    while(l->first != NULL){
        aux = l->first;
        l->first = l->first->next;
        free(aux);
    }
    l->last = NULL;
    l->pdi->NULL;
}