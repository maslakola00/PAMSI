#ifndef SNODE_H
#define SNODE_H


#include <iostream>


template<typename TYPE>
class SNode
{
private:

TYPE _elem;

SNode<TYPE>* _next_elem;

SNode<TYPE>* _prev_elem;
public:

SNode();

SNode(const TYPE & elem, const SNode<TYPE>* next_elem)
{
_elem=elem;

next_elem= NULL;
}

TYPE get_elem()
{
    return _elem;
}

void set_elem(const TYPE & elem)
{
_elem=elem;
}


SNode<TYPE>* get_next_elem()
{
    return _next_elem;
}

void set_next_elem(const SNode<TYPE>* next_elem)
{
_next_elem = NULL;
}


SNode<TYPE>* get_prev_elem()
{
    return _prev_elem;
}

void set_prev_elem(const SNode<TYPE>* prev_elem)
{
_prev_elem = NULL;
}






















};




#endif





















