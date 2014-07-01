#include <QtCore/QCoreApplication>
#include <binomialheap.h>
#include <nodob.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    BinomialHeap *bh1 = new BinomialHeap;


    for(int i=0;i<1000;i++){
        NodoB *temp = new NodoB();
        temp->setKey(i);
        bh1->insert(*bh1,*temp);
    }

    bh1->binomialHeap2file(*bh1);

    return a.exec();
}
