#ifndef DRZEWOBSTD_H
#define DRZEWOBSTD_H


class drzewoBSTd
{
        private:
        struct drzewo{
        int val;
        drzewo* left;
        drzewo* right;
        };
        drzewo* root;
    public:
        drzewoBSTd();
        virtual ~drzewoBSTd();
        void addNode(int value);
        int showInInorder(drzewo *t);
        int showInPostorder(drzewo *t);
        int showInPreorder(drzewo* t);
        int findNode(int value);
        drzewo* returnRoot(){return this->root;}
        int searchByValue (drzewo* t, int value);
    protected:


};

#endif // DRZEWOBSTD_H
