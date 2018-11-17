#include <iostream>
#include "Lista.h"
using namespace std;
int main()
{
    cout << "Lab1...!" << endl;
    Lista nowaLista;
    nowaLista.addFront(9);
    nowaLista.addFront(7);
    nowaLista.addFront(5);
    nowaLista.addFront(3);
    nowaLista.addFront(3);
    nowaLista.addFront(4);
    nowaLista.addFront(6);
    nowaLista.addFront(7);
    nowaLista.addFront(5);
    nowaLista.addLast(123);
    nowaLista.printLista();
    nowaLista.clearLista();
    cout<< "Lab2...!"<<endl;
    nowaLista.addInOrder(9);
    nowaLista.printLista();
    nowaLista.addInOrder(10);
    nowaLista.printLista();
    nowaLista.addInOrder(7);
    nowaLista.printLista();
    nowaLista.addInOrder(5);
    nowaLista.printLista();
    nowaLista.addInOrder(1);
    nowaLista.printLista();
    nowaLista.addInOrder(2);
    nowaLista.printLista();
    nowaLista.addInOrder(3);
    nowaLista.printLista();
    nowaLista.addInOrder(3);
    nowaLista.printLista();
    nowaLista.addInOrder(4);
    nowaLista.printLista();
    nowaLista.addInOrder(6);
    nowaLista.printLista();
    nowaLista.addInOrder(7);
    nowaLista.printLista();
    nowaLista.addInOrder(15);
    nowaLista.printLista();
    nowaLista.delByVal(1);
    nowaLista.printLista();
    nowaLista.delByVal(6);
    nowaLista.printLista();
    nowaLista.delByVal(9);
    nowaLista.printLista();
    nowaLista.delByVal(4);
    nowaLista.printLista();
    nowaLista.delByVal(3);
    nowaLista.printLista();


    return 0;

}
