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
    cout<< "Stack overflow";
}
arrayStack[++topElement]=value;
}

void Stos::pop(){
if(topElement ==-1) {
    cout<<"No element to pop\n";
    return;
}
topElement--;
}


int Stos::top(){
return arrayStack[topElement];
}

bool Stos::isEmpty(){
if (topElement == -1) return 1;
return 0;
}
