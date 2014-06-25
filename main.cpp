#include <QtCore/QCoreApplication>
#include <binomialheap.h>
#include <nodob.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    BinomialHeap *bh = new BinomialHeap;
    NodoB *temp1= new NodoB;

    bh->insert(*bh,*temp1);

    qDebug()<<"made";

    return a.exec();
}
