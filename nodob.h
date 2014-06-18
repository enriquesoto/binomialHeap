#ifndef NODOB_H
#define NODOB_H

#include <list>

using namespace std;


class NodoB
{
public:
    NodoB();
    int key;
    NodoB *parent;
    list<NodoB *> pChild;
    int degree;
    NodoB *sibling;

};

#endif // NODOB_H
