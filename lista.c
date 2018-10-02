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
void listabidIntroduceDelante(listaBID *lista, elemento e)
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
void listabidIntroduceDetras(listaBID *lista, elemento e){

}
element listabidConsulta(listaBID lista);
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
void listabidAvanza(listaBID *lista){}
void listabidRetrocede(listaBID *lista){}
int listabidFinal(listaBID lista){}
int listabidInicio(listaBID lista){}
void llistabidGoFirst(listaBID *lista){}
int listabidBacia(listaBID lista){}
void listabidDestruye(listaBID *lista){}