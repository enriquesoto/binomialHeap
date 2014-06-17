#ifndef BINOMIALHEAP_H
#define BINOMIALHEAP_H

#include <nodob.h>

class BinomialHeap
{
public:
    BinomialHeap();
    link(NodoB a,NodoB b);
    merge(BinomialHeap h1, BinomialHeap h2);


private:

    list<NodoB*> heap;
    NodoB minPointer;
    NodoB* minDegree(NodoB,NodoB);


};

#endif // BINOMIALHEAP_H
