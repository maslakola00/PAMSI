#include "PriorityQueue.h"
#include <memory.h>

template<typename TYPE>
PriorityQueue<TYPE>::~PriorityQueue()
{

}

template<typename TYPE>
PriorityQueue<TYPE>::PriorityQueue(): _elem(), _number(0)
{

}

template<typename TYPE>
void PriorityQueue<TYPE>::Enqueue(const TYPE& elem, int prio)
{
_elem.add_by_priority(elem, prio);
_number++;
}


template<typename TYPE>
void PriorityQueue<TYPE>::Dequeue()
{
_elem.removeFront();
_number--;
}


template<typename TYPE>
const TYPE& PriorityQueue<TYPE>::get_front() const
{
return _elem.front();
}

template<typename TYPE>
int PriorityQueue<TYPE>::get_size() const 
{
    return _number;
}


template<typename TYPE>
bool PriorityQueue<TYPE>::empty()
{
    if(_number == 0) //jesli head pokazuje na NULL true
    return true;
else
    return false;
}


template<typename TYPE>
void PriorityQueue<TYPE>::print()
{
    _elem.print();
}



template<typename TYPE>
void mix(TYPE arr1[], int arr2[], int size)
{
for(int i=0; i<size;i++)
    {
    int a = std::rand() % size;
    std::swap(arr1[i], arr1[a]);
    std::swap(arr2[i], arr2[a]);
    }


}





