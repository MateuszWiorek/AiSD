#include "Kolejka.h"
#include <iostream>
using namespace std;
Kolejka::Kolejka()
{
head = nullptr;
tail = nullptr;
}

Kolejka::~Kolejka()
{
    delete this;
}

void Kolejka::enqueue(int value){
Element* element = new Element;
element->val=value;
element->next=nullptr;
if (head==nullptr){
    head=element;
    tail=element;
} else {
    tail->next=element;
    element->next=nullptr;
    tail=element;

    }
}

int Kolejka::dequeue(){
if(head==nullptr){
    return -1;
}else{
    Element* element = head;
    int vval = head->val;
    head=element->next;
    delete element;
    cout<<"\nSciagniety element: "<< vval <<endl;
    return vval;
    }
}

void Kolejka::show(){
Element* element = head;
cout<<"---"<<endl;
while (element){
    cout<<endl<<element->val;
    element=element->next;
}
cout<<endl<<"---"<<endl;
}
