#include "binomialheap.h"

BinomialHeap::BinomialHeap()
{
}

void BinomialHeap::link(NodoB &a, NodoB &b)
{
    a.parent = &b;
    a.sibling = *b.pChild.begin();
    *b.pChild.begin() = &a;
    b.degree ++;
}

BinomialHeap *BinomialHeap::merge(BinomialHeap& h1,BinomialHeap& h2)
{
    NodoB* a;
    NodoB* b;
    NodoB* c;
    a = *h1.heap.begin(); // punteros al nodo mas izquierdo del heap
    b = *h2.heap.begin();

    *h1.heap.begin() = minDegree(*a,*b);

    if (*h1.heap.begin() == NULL ) return &h1;
    if (*h1.heap.begin() == b ) b=a;

    a = *h1.heap.begin();

    while (b != NULL){

        if(a->sibling == NULL){

            a->sibling = b;
            return &h1;

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

BinomialHeap* BinomialHeap::junction(BinomialHeap& b1, BinomialHeap& b2)
{
    NodoB* x;
    NodoB* prevX;
    NodoB* nextX;

    BinomialHeap* b=merge(b1,b2);

    if(b==NULL){
        return b;
    }
    prevX = NULL;
    x=*b->heap.begin() ;
    nextX = x->sibling;

    while(nextX != NULL){

        if( (x->degree != nextX->degree) || (nextX->sibling != NULL && nextX->sibling->degree == x->degree) ){
            prevX = x;
            x=nextX;
        }else{

            if(x->key <= nextX->key){
                x->sibling = nextX->sibling;
                link(*nextX,*x);
            }else{
                if(prevX == NULL){
                    *b->heap.begin() = nextX;
                }else
                    prevX->sibling = nextX;

                link(*x,*nextX);
                x=nextX;

            }

        }
        nextX = x->sibling;
        return b;
    }

}

void BinomialHeap::decreaseKey(BinomialHeap &b, NodoB &node, int newKey)
{
    if( newKey > node.key)
        qDebug()<<"error la nueva llave es mas grande que la actual llave";
    node.key = newKey;
    NodoB *yNodeTemp;
    NodoB *zNodeTemp;


    yNodeTemp = &node;
    zNodeTemp = yNodeTemp->parent;

    while(zNodeTemp != NULL && yNodeTemp->key<zNodeTemp->key){

        int tempKey; //intercambio de llaves
        tempKey = yNodeTemp->key;
        yNodeTemp->key=zNodeTemp->key;
        zNodeTemp->key = tempKey;

        yNodeTemp = zNodeTemp;
        zNodeTemp = yNodeTemp->parent; //:D

    }

}

//NodoB *BinomialHeap::extractMin(BinomialHeap &b)
//{

//    NodoB *minTemp= findMin(b.heap);
//    BinomialHeap *btemp = new BinomialHeap();
//    btemp->heap = minTemp->pChild.reverse();
//    *minTemp = NULL; //borrado
//    b=junction(b,btemp);
//}

//NodoB *BinomialHeap::findMin(list<NodoB *> &heap)
//{
//    myIterator it= heap.begin();
//    NodoB *minTemp;
//    int min= *(heap.begin()).key;
//    for(;heap.end();it++){
//        if(*it.key<min){
//            min = *it.key;
//            minTemp = &(*it);
//        }
//    }
//    return minTemp;
//}

void BinomialHeap::insert(BinomialHeap &b, NodoB &a)
{

    BinomialHeap *bTemp=new BinomialHeap;
    a.parent = NULL;
    //+a.pChild = list<NodoB*>;
    a.sibling = NULL;
    a.degree = 0;
    bTemp->heap.push_back(&a);
    b=junction(bTemp,&b);

}

NodoB *BinomialHeap::minDegree(NodoB &a, NodoB &b)
{

    (a.degree<=b.degree)?a:b;

}



