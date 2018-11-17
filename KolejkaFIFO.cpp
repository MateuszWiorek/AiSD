#include "KolejkaFIFO.h"
#include <iostream>
KolejkaFIFO::KolejkaFIFO()
{
    przod=-1;
    tyl=-1;
}

KolejkaFIFO::~KolejkaFIFO()
{
    //dtor
}
bool KolejkaFIFO::isFull(){
return (przod == -1 && tyl == -1);
}

bool isFull(){
if (tyl+1%maxSize == przod)
    return true;
return false;
}
void KolejkaFIFO::enqueue(int value){
if (isFull()){
    cout<<"Blad\n";
    return;
}
if (isEmpty()){
    przod=tyl=0;

}
else
    tyl = (tyl+1)%maxSize;

arrayKolejka[tyl]=value;
}

void KolejkaFIFO::dequeue(){
if(isEmpty(){
   cout<<"Blad\n";
   return;
   }
   else if(przod==tyl){
    tyl=przod=-1;
   }
   else {
    przod = (przyd+1)%maxSize;
   }
}
int KolejkaFIFO::fronnt(){
if(przod==-1){cout<<"Empty queue\n";}
return arrayKolejka[przod];
}
