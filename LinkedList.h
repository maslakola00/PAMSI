#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>
#include "SNode.h"


template<typename TYPE>
class LinkedList
{

private:
SNode<TYPE>* head;
public:
LinkedList(); //konstruktor bezparametryczny
~LinkedList();

void add_by_priority(const TYPE& Node, const int &prio);

void removeFront();

const TYPE & front() const;

bool empty() const;

void print();

void add_without_priority(const TYPE& Node, const int &prio);


 

};






#endif


































