#include <iostream>
#include "LinkedList.h"



//inicjuje obiekt ktory nie poakzuje na nic (NULL)
template<typename TYPE>
LinkedList<TYPE>::LinkedList()
{
  head->set_next_elem(NULL);
  head->set_prev_elem(NULL);
}


//zwraca 1 element listy
template<typename TYPE>
const TYPE & LinkedList<TYPE>::get_front(const TYPE& data) const
{    
return head->get_elem();
}

template<typename TYPE>
SNode<TYPE>* LinkedList<TYPE>::get_new_node(const TYPE& data) const //tworzy nowe miejsce na node
{
SNode<TYPE>* new_node = new SNode<TYPE>;
new_node->set_elem(data);
new_node->set_next_elem(NULL);
new_node->set_prev_elem(NULL);

return new_node;
} 



template<typename TYPE>
void LinkedList<TYPE>::addFront(const TYPE& Node) 
{

SNode<TYPE>* new_node = get_new_node(Node); //tworzymy nowa zmienna do, ktorej przypiszemy wartosc podanego argumentu

if(head == NULL)
    {
        head = new_node;
        return;
    }

head->set_prev_elem(new_node);
new_node->set_next_elem(head);
new_node = head;
}



template<typename TYPE>
void LinkedList<TYPE>::removeFront() 
{
SNode<TYPE>* temp = head; //tworzymy zmienna ktora pokazuje na head zeby nie zgubic pamieci head
head = head->get_next_elem(); //przestawiamy head na nastepny element

delete temp; //usuwamy pamiec ktora byla pod head
temp->set_elem(NULL); // ustawiamy jego wartosc na NULL
}

template<typename TYPE>
void LinkedList<TYPE>::removeEnd() 
{
SNode<TYPE>* temp = head;


}

template<typename TYPE>
void LinkedList<TYPE>::print()
{
SNode<TYPE>* tmp = head; //podpisanie zmiennej pod wartosc i adres head(by od pcozatku printowac liste)
while(empty() == true) //jesli lista nie jest pusta
    {
        std::cout << tmp->get_elem() << std::endl;  //print wartosc pod adresem tmp
        tmp = tmp->get_next_elem(); //przestaw na kolejne miejsce
    }
}


template<typename TYPE>
bool LinkedList<TYPE>::empty() const
{
if(head != NULL) //jesli head nie pokazuje na NULL true
{
    return true;
}
std::cout <<"List is empty!" << std::endl;
return false; //jesli head jest NULL to nie ma elementow bo nic na nic nie pokazuje

}










































