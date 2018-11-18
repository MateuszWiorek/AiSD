#include <iostream>
#include "Lista.h"
#include "Stos.h"
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
    
    Stos stos;
    cout<<stos.isEmpty();
    stos.push(2);
    cout<<stos.top();
    stos.push(5);
    cout<<stos.top();
    stos.pop();
    cout<<stos.top();
   
    
    Kolejka kolejka;
    kolejka.enqueue(1);
    kolejka.show();
    kolejka.enqueue(3);
    kolejka.show();
    kolejka.enqueue(5);
    kolejka.show();
    kolejka.enqueue(7);
    kolejka.show();
    kolejka.dequeue();
    kolejka.show();
    kolejka.dequeue();
    kolejka.show();
    kolejka.enqueue(2);
    kolejka.show();
    kolejka.enqueue(4);
    kolejka.show();
    kolejka.enqueue(6);
    kolejka.show();
    kolejka.enqueue(8);
    kolejka.show();
    kolejka.enqueue(10);
    kolejka.show();
    for(int i=0;i<6;i++){
        kolejka.dequeue();
        kolejka.show();
    }
    
    drzewoBST drzewo;
    drzewo.showInPreorder(0);
    
    drzewoBSTd drzewo2;
    drzewo2.addNode(10);
    drzewo2.addNode(5);
    drzewo2.addNode(3);
    drzewo2.addNode(9);
    drzewo2.addNode(8);
    drzewo2.addNode(14);
    drzewo2.addNode(12);
    drzewo2.addNode(1);
    drzewo2.addNode(11);
    
    drzewo2.showInInorder(drzewo2.returnRoot());
    cout<<drzewo2.searchByValue(drzewo2.returnRoot(),5);
    drzewo2.showInPostorder(drzewo2.returnRoot());
    drzewo2.showInPreorder(drzewo2.returnRoot());


    return 0;

}
