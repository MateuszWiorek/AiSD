#ifndef KOLEJKAFIFO_H
#define KOLEJKAFIFO_H


class KolejkaFIFO
{
    public:
        KolejkaFIFO();
        virtual ~KolejkaFIFO();
    bool isEmpty();
    bool isFull();
    void enqueue(int x);
    void dequeue();
    int fronnt();

    protected:

    private:
        int maxSize =100;
        int przod, tyl;
        int arrayKolejka[100];
};

#endif // KOLEJKAFIFO_H
