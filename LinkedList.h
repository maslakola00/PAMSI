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

void add_by_priority(const TYPE& Node, const int &prio);
void removeFront();

void addFront(const TYPE& Node, const int &prio);


const TYPE & front() const;
bool empty() const;
void print();




};






#endif


































