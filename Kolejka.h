#ifndef KOLEJKA_H
#define KOLEJKA_H


class Kolejka
{
    public:
        Kolejka();
        virtual ~Kolejka();
        void enqueue(int val);
        int dequeue();
        void show();

    protected:

    private:
        struct Element{
        int val;
        Element* next;
        };
        Element* head;
        Element* tail;
};

#endif // KOLEJKA_H
