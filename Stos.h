#ifndef STOS_H
#define STOS_H

class Stos
{
    public:
        Stos();
        virtual ~Stos();
        void push(int val);
        void pop();
        bool isEmpty();
        int top();

    protected:

    private:
    int arrayStack[100];
    int topElement;
};

#endif // STOS_H
