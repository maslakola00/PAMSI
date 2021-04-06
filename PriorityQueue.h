/*
 *KLASA MESS_PRIO
 *modeluje obiekt przekazywany do kolejki priorytetowej
 * */

#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE
#include "LinkedList.h"


template<typename TYPE>
class PriorityQueue
{
private:
LinkedList<TYPE> _elem; //element
int _number; //zmienna przechowujaca ilosc elementow w kolejce
public:

PriorityQueue(); //konstruktor bezparametrowy

~PriorityQueue(); //destruktor

/*
 * Enqueue()
 * dodawanie do kolejki wedlug ustalonego wczesniej priorytetu
 * const TYPE& elem - element O typie const TYPE
 * int prio - priorytet
 * */
void Enqueue(const TYPE& elem, int prio);


/*
 * Dequeue()
 * usuwanie elementu o najwyzszym priorytecie
 * */
void Dequeue();

/*
 *get_front()
 *zwraca pierwszy element kolejki
 * */
const TYPE& get_front() const;

/*
 * get_size()
 * return _number - zwraca ilosc obiektow w kolejce
 * */

int get_size() const ;

/*
 * empty()
 * sprawdzanie czy kolejka jest pusta
 * return true - kolejka jest pusta
 * return false - kolejka nie jest pusta
 */
bool empty();

/*
 * print()
 * wypisuje elementy kolejki
 * */
void print();


};


#endif