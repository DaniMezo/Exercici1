//
// Created by Daniel Mezo on 02/10/2018.
//

#include "lista.h"

ListaBid listabidCreate(){
    ListaBid l;
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
void listabidIntroduceOrdenado(ListaBid *lista, Element e){
    Node *aux;
    int trobat=0;
    Node *pdi;
    aux=(Node *) malloc (sizeof(Node));
    if(aux==NULL){
        printf("Error al insertar\n");
    }else{
        aux->e=e;
        l->pdi = l->last;
        l->last=l->first->seguent;
        while(!trobat && l->pdi->seguent !=NULL){
            if(l->pdi->e <=e){
                l->pdi = l->pdi->seguent;
            }else{
                trobat=1;
                aux->anterior=l->pdi->anterior;
                aux->anterior->seguent=aux;
                aux->seguent=l->pdi;
                l->pdi->anterior=aux;
            }
        }
        l->pdi=pdi;
    }
}
/*void listabidIntroduceDelante(Lista *lista, Element e)
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
void listabidIntroduceDetras(Lista *lista, Element e){
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
}*/
Element listabidConsulta(ListaBid lista){
    Element e;
    Element e = ELEMENT_indefinit();

    if (l.pdi==l->first || l.pdi==l->last) {
        printf("No se puede consultar\n");
    }else{
        e = l.pdi->e;
    }
    return e;
}
void listabidBorrar(ListaBid *lista){
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
void listabidAvanza(ListaBid *lista){
    if(l->pdi->seguent!=NULL)
    {
        l->pdi=l->pdi->seguent;
    }else{
        printf("Error\n");
    }
}
void listabidRetrocede(ListaBid *lista){
    if(l->pdi==l->first)
    {
        printf("Error\n");
    }else{
        l->pdi=l->pdi->anterior;
    }
}
int listabidFinal(ListaBid lista){
    return l.pdi==l.last;
}
int listabidInicio(ListaBid lista){
    return l.pdi==l.first;
}
void listabidGoFirst(ListaBid *lista){
    l->pdi=l->first->seguent;
}
void listabidGoLast(ListaBid *lista){
    l->pdi=l->last->anterior;
}
int listabidBacia(ListaBid lista){
    return l.first->seguent==l.last;
}
void listabidDestruye(ListaBid *lista){
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