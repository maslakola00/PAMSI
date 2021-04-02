#ifndef SNODE_H
#define SNODE_H

#include <iostream>

template<typename TYPE>
class SNode
{

private:

TYPE _elem;

SNode<TYPE>* _next_elem;

int _prio;

public:
~SNode();

SNode();

SNode(const TYPE & elem, const int prio);

TYPE &get_elem();

SNode<TYPE>* get_next_elem();

int &get_prio();

void set_elem(const TYPE & elem);

void set_next_elem(SNode<TYPE>& next_elem);

void set_priority(const int & prio);

bool operator<(SNode<TYPE> & Node);

bool operator>(SNode<TYPE> & Node);

bool operator<=(SNode<TYPE> & Node);

bool operator>=(SNode<TYPE> & Node);



};






#endif