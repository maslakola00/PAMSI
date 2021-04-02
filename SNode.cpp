#include "SNode.h"

template<typename TYPE>
SNode<TYPE>::~SNode()
{

}

template<typename TYPE>
SNode<TYPE>::SNode(): _next_elem(nullptr)
{

}

template<typename TYPE>
SNode<TYPE>::SNode(const TYPE & elem, const int prio): _next_elem(nullptr),  _elem(elem), _prio(prio)
{

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
bool SNode<TYPE>::operator<(SNode<TYPE> & Node) 
{
    return this->get_prio() > Node.get_prio();
}

template<typename TYPE>
bool SNode<TYPE>::operator>(SNode<TYPE> & Node)
{
return !(*this<Node);
}

template<typename TYPE>
bool SNode<TYPE>::operator<=(SNode<TYPE> & Node) 
{
    return this->get_prio() >= Node.get_prio();
}

template<typename TYPE>
bool SNode<TYPE>::operator>=(SNode<TYPE> & Node)
{
return !(*this<=Node);
}






