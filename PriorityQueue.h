#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE
#include "LinkedList.h"


template<typename TYPE>
class PriorityQueue
{
private:
LinkedList<TYPE> _elem;
int _number;
public:

PriorityQueue();

~PriorityQueue();

void Enqueue(const TYPE& elem, int prio);

void Dequeue();

const TYPE& get_front() const;

int get_size() const ;

bool empty();

void print();


};



#endif