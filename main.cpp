#include <iostream>
#include <stdlib.h>
using namespace std;
 
struct nodo{
       int nro;        
       struct nodo *sgte;
};
 
typedef struct nodo *Tlista;
 
void insertarInicio(Tlista &lista, int valor)
{
    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;
}

void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;
 
    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }

}
 

 
void reportarLista(Tlista lista)
{
     int i = 0;
 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}
 

void menu1()
{
    cout<<"\n\tMenu\n";
    cout<<" 1. Insertar a Lista              "<<endl;
    cout<<" 2. Mostrar Lista                "<<endl;
    cout<<" 3. Salir         "<<endl;
    
 
    cout<<"\n INGRESE OPCION: ";
}
 
 

int main()
{
    Tlista lista = NULL;
    int op;     
    int _dato;  
    int pos;   
 
 
    
 
    do
    {
        menu1();  cin>> op;
 
        switch(op)
        {
            case 1:
 
                 cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
                 insertarInicio(lista, _dato);
            break;
 
 
            case 2:
                
                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 reportarLista(lista);
        
            break;
 
 
           
 
                    }
 
        cout<<endl<<endl;
        system("pause");  system("cls");
 
    }while(op!=3);
 
 
   system("pause");
   return 0;
}
