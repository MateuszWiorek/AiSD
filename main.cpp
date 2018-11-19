#include <iostream>
#include "Lista.h"
#include "Stos.h"
#include "Kolejka.h"
#include "drzewoBST.h"
#include "drzewoBSTd.h"
using namespace std;
int main()
{
    cout << "Lab1...!" << endl;
    Lista nowaLista;
    cout<<"Dodanie do listy na poczatek elementow: 9 8 5 3 3 4 6 7 5.\n";
    nowaLista.addFront(9);
    nowaLista.addFront(7);
    nowaLista.addFront(5);
    nowaLista.addFront(3);
    nowaLista.addFront(3);
    nowaLista.addFront(4);
    nowaLista.addFront(6);
    nowaLista.addFront(7);
    nowaLista.addFront(5);
    cout<<"Dodanie na koncu elementu 123.\n";
    nowaLista.addLast(123);
    cout<<"Wynik listy:\n";
    nowaLista.printLista();
    nowaLista.clearLista();


    cout<< "Lab2...!"<<endl;

    cout<<"\nDodawanie do listy: 9 10 7 5 1 2 3 3 4 6 7 15.  \n";
    nowaLista.addInOrder(9);
    nowaLista.addInOrder(10);
    nowaLista.addInOrder(7);
    nowaLista.addInOrder(5);
    nowaLista.addInOrder(1);
    nowaLista.addInOrder(2);
    nowaLista.addInOrder(3);
    nowaLista.addInOrder(3);
    nowaLista.addInOrder(4);
    nowaLista.addInOrder(6);
    nowaLista.addInOrder(7);
    nowaLista.addInOrder(15);
    cout<<"Wynik dodawania do listy: \n";
    nowaLista.printLista();
    cout<<"\nUsuwanie wartosci z listy: 1 6 9 4 3 \n";
    nowaLista.delByVal(1);
    nowaLista.delByVal(6);
    nowaLista.delByVal(9);
    nowaLista.delByVal(4);
    nowaLista.delByVal(3);
    cout<< "Wyswietlenie listy: \n";
    nowaLista.printLista();


    cout<< "\nStos:\n";
    Stos stos;
    cout<<"Sprawdzenie czy stost jest pusty(1) czy nie (0):"<<stos.isEmpty()<<endl;
    stos.push(2);
    cout<<stos.top();
    stos.push(5);
    cout<<stos.top();
    stos.pop();
    cout<<stos.top();


    Kolejka kolejka;
    cout<< "\nDodanie do kolejki: 1 3 5 7\n";
    kolejka.enqueue(1);
    kolejka.enqueue(3);
    kolejka.enqueue(5);
    kolejka.enqueue(7);
    cout<< "Zdjecie 2 elementow z kolejki\n";
    kolejka.dequeue();
    kolejka.dequeue();
    cout<<"Dodanie do kolejki: 2 4 6 8 10\n";
    kolejka.enqueue(2);
    kolejka.enqueue(4);
    kolejka.enqueue(6);
    kolejka.enqueue(8);
    kolejka.enqueue(10);
    cout<<"Zdjecie 6 elementow z kolejki\n";
    for(int i=0;i<6;i++){
        kolejka.dequeue();
    }
    cout<< "Wyswietlenie wyniku wszystkich operacji:\n";
    kolejka.show();

    drzewoBST drzewo;
    cout<< "Wyswietlenie drzewa zapisanego w tablicy:\n";
    drzewo.showInPreorder(0);
    cout<< "Dodawanie do drzewa wartosci: 10 5 3 9 8 14 12 1 11:\n";
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
    cout<<"\nDrzewo w porzadku INORDER\n";
    drzewo2.showInInorder(drzewo2.returnRoot());
    cout<<"\nSzuka wartosci 5, jesli nie ma zwraca '-1':: "<<drzewo2.searchByValue(drzewo2.returnRoot(),5);
    cout<<"\nDrzewo w porzadku POSTORDER\n";
    drzewo2.showInPostorder(drzewo2.returnRoot());
    cout<<"\nDrzewo w porzadku PREORDER\n";
    drzewo2.showInPreorder(drzewo2.returnRoot());


    return 0;

}
