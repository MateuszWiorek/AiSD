#include "drzewoBSTd.h"
#include <iostream>
using namespace std;
drzewoBSTd::drzewoBSTd()
{   root=nullptr;
}

drzewoBSTd::~drzewoBSTd()
{
    //dtor
}

void drzewoBSTd::addNode(int value){
drzewo* Node = new drzewo;
Node->val=value;
Node->left=nullptr;
Node->right=nullptr;
if(root == nullptr){
    root=Node;
}
else{

        drzewo* nextNode = root;
        drzewo* helpNode = nextNode;
        while(nextNode){
            helpNode=nextNode;
            if(Node->val<nextNode->val)
                nextNode=nextNode->left;
            else
                nextNode=nextNode->right;
        }
            if (Node->val<helpNode->val)
                helpNode->left=Node;
            else
                helpNode->right=Node;

        }


    }


int drzewoBSTd::searchByValue(drzewo* t, int value){
    if(t==nullptr){return -1;}
    else{
        if(t->val=value)
            return t->val;
        if(value<t->val)
            return searchByValue(t->left,value);
        else
            return searchByValue(t->right,value);
    }
}



int drzewoBSTd::showInInorder(drzewo* t){

 if (t){
    showInInorder(t->left);
    cout<<t->val<<endl;
    showInInorder(t->right);
}
}
int drzewoBSTd::showInPostorder(drzewo* t){

    if(t){
        showInPostorder(t->left);
        showInPostorder(t->right);
        cout<<t->val<<endl;
    }
}

int drzewoBSTd::showInPreorder(drzewo* t){
    if(t){
cout<<t->val<<endl;
showInPreorder(t->left);
showInPreorder(t->right);
}
}
