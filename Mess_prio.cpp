
#include "Mess_prio.h"

template<typename TYPE>
Mess<TYPE>::Mess(){} //konstruktor bezparametrowy

template<typename TYPE>
Mess<TYPE>::Mess(int key, const TYPE & value) //konstruktor parametrowy
{   
_key=key;

_value = value;
}

template<typename TYPE>
TYPE Mess<TYPE>::get_value() const 
{
return _value;
}

template<typename TYPE>
void Mess<TYPE>::set_value(const TYPE & value)
{
_value=value;
}

template<typename TYPE>
 int Mess<TYPE>::get_key() const
{
return _key;
}

template<typename TYPE>
void Mess<TYPE>::set_key(int key)
{
_key=key;
}






