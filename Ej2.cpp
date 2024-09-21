#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {

    ArbolBinario<int> inventario;

    inventario.put(4001);
    inventario.put(2002);
    inventario.put(6003);
    inventario.put(1500);
    inventario.put(3500);
    inventario.put(5000);
    inventario.put(7000);

    try{
        int producto = inventario.search(2002);
        inventario.remove(producto);
         cout << "El producto "<<producto<<" se elimino del inventario."<<endl;
    } catch (int e){
        if (e==404){
            cout<<"No se encontro el producto"<<endl;
        }
    }

    try{
        int producto = inventario.search(6003);
        inventario.remove(producto);
        cout << "El producto "<<producto<<" se elimino del inventario."<<endl;
    } catch (int e){
        if (e==404){
            cout<<"No se encontro el producto"<<endl;
        }
    }

    inventario.put(2500);

    inventario.print();

    try{
        int producto = inventario.search(4001);
        cout << "El producto "<<producto<<" esta en el inventario."<<endl;
    } catch (int e){
        if (e==404){
            cout<<"No se encontro el producto " <<endl;
        }
    }


    return 0;
}
