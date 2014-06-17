#include "binomialheap.h"

BinomialHeap::BinomialHeap()
{
}

BinomialHeap::link(NodoB a, NodoB b)
{
    a.parent = b;
    a.sibling = b.pChild[0];
    b.pChild[0] = a;
    b.degree ++;
}

BinomialHeap::merge(BinomialHeap h1,BinomialHeap h2)
{
    NodoB* a;
    NodoB* b;
    NodoB* c;
    a = h1.heap[0]; // punteros al nodo mas izquierdo del heap
    b = h2.heap[0];

    h1.heap[0] = minDegree(a,b);

    if (h1.heap[0] == null ) return;
    if (h1.heap[0] == b ) b=a;

    a = h1.heap[0];

    while (b != null){

        if(a->sibling == null){

            a->sibling = b;
            return ;

        }
        else
            if(a->sibling->degree < b->degree){
                a = a->sibling; //recorre a
            } else{
                c = b->sibling;
                b->sibling = a->sibling;
                a->sibling = b; //b apunta al hermano de a
                a=a->sibling;
                b=c;
            }
    }

}

NodoB *BinomialHeap::minDegree(NodoB a, NodoB b)
{

    (a.degree<=b.degree)?a:b;

}


