#ifndef DRZEWOBST_H
#define DRZEWOBST_H
#include <iostream>
using namespace std;

class drzewoBST
{
    public:
        drzewoBST();
        virtual ~drzewoBST();
        int visit(int t);
        int showInPreorder(int t);

    protected:

    private:
        int root = 0;
        int arrayDrzewo[15]={10,5,14,3,9,12,-1,1,-1,8,-1,11,-1,-1,-1};
};

#endif // DRZEWOBST_H
