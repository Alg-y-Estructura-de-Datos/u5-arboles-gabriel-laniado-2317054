#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main()
{

    ArbolBinario<int> arbol;

    arbol.put(500);
    arbol.put(250);
    arbol.put(750);
    arbol.put(100);
    arbol.put(300);
    arbol.put(600);
    arbol.put(800);

    try
    {
        int producto = arbol.search(250);
        arbol.remove(producto);
        cout << "El integrante " << producto << " se elimino." << endl;
    }
    catch (int e)
    {
        if (e == 404)
        {
            cout << "No se encontro el miembro" << endl;
        }
    }

    if (arbol.search(300)==300) {
        cout <<"El integrante 300 fue encontrado"<<endl;
    } else {
        cout<<"No se encontro al miembro 300."<<endl;
    }

    if (arbol.search(750)==750) {
        cout <<"El integrante 750 fue encontrado"<<endl;
    } else {
        cout<<"No se encontro al miembro 750."<<endl;
    }
    
    arbol.print();
    arbol.postorder();
    return 0;
}
