/*
********************************************************
***                                                  *** 
*** Tarea: TORRES DE HANOI                           *** 
***                                                  *** 
*** NOMBRE: MYNOR ARNALDO DOMINGUEZ MEZA             *** 
*** NUMERO DE CUENTA: 61641352                       *** 
***                                                  *** 
******************************************************** 
*/


#include <iostream>

using namespace std;

struct Nodo
{
    int dato; 
    Nodo *siguiente;

};

void agregar1(Nodo *&, int);

void agregar2(Nodo *&, Nodo *&, int);

void sacar2(Nodo *&, int &);

bool agregar3(Nodo *);

void sacar1(Nodo *&, Nodo *&, int &);

int main()

{

Nodo *lista = NULL;
    int dato;
        cout<<"Ingrese valor de lista: "; cin>>dato;
    agregar1(lista,dato);
        cout<<"Ingrese valor de lista: "; cin>>dato;
    agregar1(lista,dato);
        cout<<"Sacando elementos de la lista: ";
    while(lista!=NULL){
        sacar2(lista,dato);
        if(lista!=NULL){
            cout<<dato<<" , ";
        }
        else{
             cout<<dato<<" . ";
        }
    }
        return 0;
}



void agregar1(Nodo *&lista, int n)
{

    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;

    nuevo_nodo->siguiente = lista;

    lista = nuevo_nodo;

    cout << "\nElmento " << n << " Agregado correctamente" << endl;
}

bool agregar3(Nodo *frente)
{

    return (frente == NULL) ? true : false;
}

void sacar2(Nodo *&lista, int &n)
{

    Nodo *aux = lista;

    n = aux->dato;

    lista = aux->siguiente;

    delete aux;
}

void sacar1(Nodo *&frente, Nodo *&fin, int &n)
{

    n = frente->dato;

    Nodo *aux = frente;

    if (frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }

    else
    {
        frente = frente->siguiente;
    }

    delete aux;
}