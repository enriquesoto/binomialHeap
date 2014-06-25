#ifndef BINOMIALHEAP_H
#define BINOMIALHEAP_H

#include <nodob.h>
#include <QDebug>

class BinomialHeap
{

    typedef typename list<NodoB*>::iterator myIterator;

public:

    BinomialHeap();
    void link(NodoB &a,NodoB &b);
    BinomialHeap *merge(BinomialHeap &h1, BinomialHeap &h2);
    BinomialHeap *junction(BinomialHeap &b1, BinomialHeap &b2);
    void decreaseKey(BinomialHeap &b,NodoB &node,int newKey);
    NodoB *extractMin(BinomialHeap &b);
    NodoB * findMin(list<NodoB*> &heap);
    void insert(BinomialHeap &b,NodoB &a);


private:

    list<NodoB*> heap;
    NodoB minPointer;
    NodoB* minDegree(NodoB &a,NodoB &b);



};

#endif // BINOMIALHEAP_H
