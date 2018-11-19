#include "drzewoBST.h"

drzewoBST::drzewoBST()
{
//
}

drzewoBST::~drzewoBST()
{
    //dtor
}



int drzewoBST::visit(int t){
cout<<arrayDrzewo[t]<<endl;
return arrayDrzewo[t];
}

int drzewoBST::showInPreorder(int t){
if(arrayDrzewo[t]!=-1&&t<15){
    visit(t);
    showInPreorder(2*t+1);
    showInPreorder(2*t+2);
}else {
return -1;
}
return t;
}
