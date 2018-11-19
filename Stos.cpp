#include "Stos.h"
#include <iostream>
using namespace std;
Stos::Stos()
{
  topElement =-1;
}
Stos::~Stos()
{
    //dtor
}
void Stos::push(int value){
if (topElement == 100-1){
    cout<< "Stos przepelniony.";
}
arrayStack[++topElement]=value;
}

void Stos::pop(){
if(topElement ==-1) {
    cout<<"Nie ma elementu do sciagniecia\n";
    return;
}
topElement--;
}


int Stos::top(){
  if(!isEmpty()){
return arrayStack[topElement];
    }
return -1;
}

bool Stos::isEmpty(){
if (topElement == -1) return 1;
return 0;
}
