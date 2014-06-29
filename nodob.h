#ifndef NODOB_H
#define NODOB_H

#include <list>
#include <stddef.h>

using namespace std;


class NodoB
{
public:
    NodoB();
    int key;
    NodoB *parent;
    list<NodoB *> pChild;
    int degree;
    NodoB *siblingDer;
    NodoB *siblingIzq;
    void setKey(int);
    ~NodoB();

};

#endif // NODOB_H
