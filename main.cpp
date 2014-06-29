#include <QtCore/QCoreApplication>
#include <binomialheap.h>
#include <nodob.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    BinomialHeap *bh1 = new BinomialHeap;
    NodoB *bh1nodoTemp= new NodoB;
    bh1nodoTemp->setKey(12);
    NodoB *bh1nodoTemp1= new NodoB;
    bh1nodoTemp1->setKey(7);
    NodoB *bh1nodoTemp2= new NodoB;
    bh1nodoTemp2->setKey(3);
    NodoB *bh1nodoTemp3= new NodoB;
    bh1nodoTemp3->setKey(1);
    NodoB *bh1nodoTemp4= new NodoB;
    bh1nodoTemp4->setKey(5);
    NodoB *bh1nodoTemp5= new NodoB;
    bh1nodoTemp5->setKey(2);

    NodoB *bh1nodoTemp6= new NodoB;
    bh1nodoTemp6->setKey(9);

    NodoB *bh1nodoTemp7= new NodoB;
    bh1nodoTemp7->setKey(10);

    NodoB *bh1nodoTemp8= new NodoB;
    bh1nodoTemp8->setKey(11);

    NodoB *bh1nodoTemp9= new NodoB;
    bh1nodoTemp9->setKey(30);

    NodoB *bh1nodoTemp10= new NodoB;
    bh1nodoTemp10->setKey(9);

    //primer binomial heap
    //12,7,3,1,5,2,9,10,11,30,9

    bh1->insert(*bh1,*bh1nodoTemp);

    qDebug()<<"insert 12";



    bh1->insert(*bh1,*bh1nodoTemp1);

    qDebug()<<"insert 7";



    bh1->insert(*bh1,*bh1nodoTemp2);

    qDebug()<<"insert 3";



    bh1->insert(*bh1,*bh1nodoTemp3);

    qDebug()<<"insert 1";




    bh1->insert(*bh1,*bh1nodoTemp4);

    qDebug()<<"insert 5";



    bh1->insert(*bh1,*bh1nodoTemp5);

    qDebug()<<"insert 2";



    bh1->insert(*bh1,*bh1nodoTemp6);

    qDebug()<<"insert 9";



    bh1->insert(*bh1,*bh1nodoTemp7);

    qDebug()<<"insert 10";



    bh1->insert(*bh1,*bh1nodoTemp8);

    qDebug()<<"insert 11";



    bh1->insert(*bh1,*bh1nodoTemp9);

    qDebug()<<"insert 30";



    bh1->insert(*bh1,*bh1nodoTemp10);

    qDebug()<<"insert 9";




    //bh->findMin()

    //segundo bheap

    BinomialHeap *bh2 = new BinomialHeap;

    NodoB *bh2nodoTemp= new NodoB;
    bh2nodoTemp->setKey(15);
    NodoB *bh2nodoTemp1= new NodoB;
    bh2nodoTemp1->setKey(33);
    NodoB *bh2nodoTemp2= new NodoB;
    bh2nodoTemp2->setKey(28);
    NodoB *bh2nodoTemp3= new NodoB;
    bh2nodoTemp3->setKey(41);
    NodoB *bh2nodoTemp4= new NodoB;
    bh2nodoTemp4->setKey(7);
    NodoB *bh2nodoTemp5= new NodoB;
    bh2nodoTemp5->setKey(25);
    NodoB *bh2nodoTemp6= new NodoB;
    bh2nodoTemp6->setKey(12);

    bh2->insert(*bh2,*bh2nodoTemp);
    bh2->insert(*bh2,*bh2nodoTemp1);
    bh2->insert(*bh2,*bh2nodoTemp2);
    bh2->insert(*bh2,*bh2nodoTemp3);
    bh2->insert(*bh2,*bh2nodoTemp4);
    bh2->insert(*bh2,*bh2nodoTemp5);
    bh2->insert(*bh2,*bh2nodoTemp6);



    bh2->junction(*bh2,*bh1);

    bh2->binomialHeap2file(*bh2);

    NodoB *aNode =*bh2->heap.begin();

    NodoB *result = bh2->find(*aNode,1);

    //bh2->decreaseKey(*bh2,41,-2);

    bh2->deleteNode(*bh2,33);



    NodoB *lastNode= new NodoB;
    lastNode->setKey(24);

    //bh2->insert(*bh2,*lastNode);

    NodoB *temp =*bh2->heap.begin();

    //NodoB *minimo = bh2->findMin(*temp);

    NodoB *extracted = bh2->extractMin(*bh2);



    qDebug()<<"insert 9";




    return a.exec();
}
