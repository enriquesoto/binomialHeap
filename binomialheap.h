#ifndef BINOMIALHEAP_H
#define BINOMIALHEAP_H

#include <nodob.h>
#include <QDebug>
#include <climits>
#include <QFile>

class BinomialHeap
{

    typedef typename list<NodoB*>::iterator myIterator;

public:

    BinomialHeap();
    void link(NodoB &a,NodoB &b);
    BinomialHeap *merge(BinomialHeap &b1, BinomialHeap &b2);
    BinomialHeap *junction(BinomialHeap &b1, BinomialHeap &b2);
    void decreaseKey(BinomialHeap &b,int oldValue,int newKey);
    NodoB *extractMin(BinomialHeap &b);
    NodoB * findMin(NodoB &aNode);
    void insert(BinomialHeap &bh,NodoB &temp1);
    NodoB *myreverse(NodoB &b);
    NodoB *find(NodoB &b, int value);
    NodoB *bfs(NodoB &b, int value);
    BinomialHeap *deleteNode(BinomialHeap &bh,int target);
    void binomialHeap2file(BinomialHeap &bh);
    void bfsPrint(NodoB &b);
    QFile *file;
    QTextStream *out;
    list<NodoB*> heap;

private:


    NodoB minPointer;
    NodoB* minDegree(NodoB &a,NodoB &b);
    void deleteObject();
    ~BinomialHeap();




};

#endif // BINOMIALHEAP_H
