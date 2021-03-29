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

bool empty() const;
const TYPE & get_front(const TYPE& data) const; //nie wiem po co to, ale funkcja jelenia, wydaje mi sie niepotrzebna
SNode<TYPE>* get_new_node(const TYPE& data) const; //tworzy miejsce na nowy node
void addFront(const TYPE& Node) ; //dodaje element 
void removeFront() ; //usuwa element na pcozatku
void removeEnd(); //nie wiem jak zrobic bez elementu tail(iterowanie do konca az bedzie NULL?)
void print();


};


#endif


































