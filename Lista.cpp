#include "Lista.h"
#include <iostream>
using namespace std;
Lista::Lista()
{
head = NULL;
}

Lista::~Lista()
{
    delete this;
}
bool Lista::isEmpty(){
if (head==nullptr){
    return true;
}
return false;
    }
void Lista::addFront(int value){
    Element* newNode = new Element;
    newNode->val=value;
    newNode->next=head;
    head = newNode;

}

void Lista::addLast(int value){
    Element* newNode = head;
    Element* nextNode = new Element;
    nextNode->next=nullptr;
    nextNode->val=value;
    while (newNode->next){
        newNode=newNode->next;
    }
    newNode->next=nextNode;

}

void Lista::addInOrder(int value){
    if(head==nullptr||head->val>value){
        addFront(value);
    }else{
        Element* newNode = head->next;
        Element* temp = head;
        Element* nextNode = new Element;
        nextNode->next=nullptr;
        nextNode->val=value;
        while( newNode!=nullptr&& newNode->val<value){
                temp=newNode;
                newNode=newNode->next;
            }
            nextNode->next=newNode;
            temp->next=nextNode;
        }
    }

void Lista::printLista(){
    Element* newNode = head;
    while(newNode){
        cout<<" "<<newNode->val;
        newNode=newNode->next;
    }
}

void Lista::delByVal(int value){
    Element* newNode = head;
    Element* nextNode = new Element;
    nextNode->next=nullptr;
    while(newNode&& newNode->val!=value ){
        nextNode=newNode;
        newNode=newNode->next;
    }if(newNode==nullptr){cout<<"Element not found\n";}
    else {
        if (newNode==head){
            head=head->next;
            delete newNode;
        }
        else {
            nextNode->next=newNode->next;
            delete newNode;
            }
    }
}


void Lista::clearLista(){
    Element* newNode = head;
    while(head!=nullptr){
        newNode=head->next;
        delete head;
        head=newNode;
    }
}
