#include "SNode.h"

template<typename TYPE>
SNode<TYPE>::SNode(){}

template<typename TYPE>
SNode<TYPE>::SNode(const TYPE & elem, const SNode<TYPE>* next_elem)
{
_elem=elem;

next_elem= NULL;
}

template<typename TYPE>
TYPE &SNode<TYPE>::get_elem()
{
    return _elem;
}

template<typename TYPE>
SNode<TYPE>* SNode<TYPE>::get_next_elem()
{
    return _next_elem;
}

template<typename TYPE>
int &SNode<TYPE>::get_prio()
{
    return _prio;

}

template<typename TYPE>
void SNode<TYPE>::set_elem(const TYPE & elem)
{
    _elem=elem;
}

template<typename TYPE>
void SNode<TYPE>::set_next_elem( SNode<TYPE>& next_elem)
{
_next_elem = &next_elem;
}

template<typename TYPE>
void SNode<TYPE>::set_priority(const int & prio)
{
_prio = prio;
}

template<typename TYPE>
bool SNode<TYPE>::operator<(const SNode<TYPE> & Node) const
{
if((*this).get_prio() > Node.get_prio())
    return true;
return false;
}

template<typename TYPE>
bool SNode<TYPE>::operator>(const SNode<TYPE> & Node) const
{
return !(*this<Node);
}







