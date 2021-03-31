#include <iostream>
#include "LinkedList.h"


//inicjuje obiekt ktory nie poakzuje na nic (NULL)
template<typename TYPE>
LinkedList<TYPE>::LinkedList()
{
    head = nullptr; 
}


//zwraca 1 element listy
template<typename TYPE>
const TYPE & LinkedList<TYPE>::front() const
{
    return head->get_elem();
}


template<typename TYPE>
void LinkedList<TYPE>::addFront(const TYPE& Node, const int &prio) 
{

    SNode<TYPE>* temp = new SNode<TYPE>; //tworzymy nowa zmienna do, ktorej przypiszemy wartosc podanego argumentu
    temp->set_elem(Node); //podpisujemy wartosc
    temp->set_priority(prio); //podpisujemy priority
    temp->set_next_elem(*head); //podpisuje pod adres aktualnego poczatku
    head = temp; //nowa inicjalizacja poczatku temp staje sie head
}


template<typename TYPE>
void LinkedList<TYPE>::removeFront() 
{

    SNode<TYPE>* temp = head; //tworzymy zmienna ktora pokazuje na head zeby nie zgubic pamieci head
    head = head->get_next_elem(); //przestawiamy head na nastepny element

delete temp; //usuwamy pamiec ktora byla pod head

}


template<typename TYPE>
void LinkedList<TYPE>::print()
{
SNode<TYPE>* tmp = head; //podpisanie zmiennej pod wartosc i adres head(by od pcozatku printowac liste)
while(tmp->get_next_elem() !=nullptr ) //jesli lista nie jest pusta
    {
        std::cout << tmp->get_elem() << std::endl;  //print wartosc pod adresem tmp
        tmp = tmp->get_next_elem(); //przestaw na kolejne miejsce
    }
    std::cout << tmp->get_elem() <<std::endl;
}


template<typename TYPE>
bool LinkedList<TYPE>::empty() const
{
if(head == nullptr) //jesli head nie pokazuje na NULL true
    return true;
else
    return false; //jesli head jest NULL to nie ma elementow bo nic na nic nie pokazuje
}

template<typename TYPE>
void LinkedList<TYPE>::add_by_priority(const TYPE& Node, const int &prio)
{

SNode<TYPE>* start_temp; //zmienna pomocnicza by wyszukac odpowiednie miejsce 
SNode<TYPE>* temp = new SNode<TYPE>; 

temp->set_elem(Node); //podpisujemy wartosc
temp->set_priority(prio); //podpisujemy priority

    if(head->get_prio() > prio || head == nullptr) //jesli head ma wiekszy prio niz nowe podane prio lub lista jest puste
        {
            temp->set_next_elem(*head); // pod temp podpisz head
            head = temp; //temp staje sie head (wstawienie Node) utworzenie i wstawienie nowego node z wyzszym priorytetem
        }
    else
        {
    start_temp = head; //ustaw zmienna na head (poczatek listy)
            while(start_temp->get_next_elem() != NULL && start_temp->get_next_elem()->get_prio() < prio) //rob dopoki nie skonczy sie lista 
            {                                                                                     //lub znajdzie priorytet wiekszy od obecnego 
                start_temp = start_temp->get_next_elem(); //przejdz na kolejny element listy
            }

    temp->get_next_elem() = start_temp->get_next_elem(); //wez nastepny element(petla zakonczyla sie element wczesniej)

    start_temp->set_next_elem(*temp); //ustawia nowy node w poprawnie wybranym miejscu

        }
}




























































