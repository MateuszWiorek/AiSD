#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class Lista
{
	private:
		struct Element{
        int val;
        Element *next;
        };
            Element* head;
    public:
		Lista();
		bool isEmpty();
		void addFront(int v);
        void printLista();
        void addLast(int v);
        void addInOrder(int v);
        void delByVal(int v);
		//friend ostream& operator<<(ostream& out, Lista& l);
		void clearLista();
		~Lista();
    protected:

    private:
};

#endif // LISTA_H
