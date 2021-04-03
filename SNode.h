/*
 * KLASA SNODE:
 * tworzenie pojedynczego węzła składających się z :
 *      -elementu o typie TYPE
 *      -wskaźnika na następny element
 *      -priorytetu elementu
 * przeciążenia operatorów
 *
 * */

#ifndef SNODE_H
#define SNODE_H

#include <iostream>

template<typename TYPE>
class SNode
{

private:

TYPE _elem; //element o typie TYPE

SNode<TYPE>* _next_elem; //wskaznik na nastpeny element

int _prio; //priorytet elementu

public:
~SNode();//destruktor

SNode();//konstruktor bezparametrowy

SNode(const TYPE & elem, const int prio); //konstruktor z paramtrami


/*Gettery i settery potrzebne do dostania się do prywatnych składników klasy*/

TYPE &get_elem();

SNode<TYPE>* get_next_elem();

int &get_prio();

void set_elem(const TYPE & elem);

void set_next_elem(SNode<TYPE>& next_elem);

void set_priority(const int & prio);

/*operatory przeciążenia*/
bool operator<(SNode<TYPE> & Node);//przeciążenie "<"

bool operator>(SNode<TYPE> & Node); //przeciążenie ">"

bool operator<=(SNode<TYPE> & Node);//przeciążenie"<="

bool operator>=(SNode<TYPE> & Node);//przeciążenie ">="



};






#endif