/*
 * KLASA LINKEDLIST
 *
 * zawiera wskaźnik na głowę listy
 * jest zbudowana z obiektów klasy SNode
 *
 * dodawanie elementów
 *
 * */


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
LinkedList(); //konstruktor bezparametrowy
 ~LinkedList(); //destruktor

 /*
 * add_by_priority
 * const TYPE & - referancja do obiektu Node
  * const int & - referancja do obiektu prio
 * dodawanie obiektu po priorytecie
 * */
void add_by_priority(const TYPE& Node, const int &prio);

/*
 * removeFront
 * usuwane początku listy przestawiajac wskaznika head na nastepny element
 * */
void removeFront();

/*
 *
 *
 * */
const TYPE & front() const;

/*
 * empty()
 * sprawdzanie czy lista ma jakies elementy
 * return true - lista jest pusta
 * return false - lista nie jest pusta
 * */
bool empty() const;

/*
 * print()
 * funkcja wypisuje elementy listy
 * */
void print();

/*
 *add_without_priority
 *
 *
 * */
void add_without_priority(const TYPE& Node, const int &prio);


 

};






#endif


































