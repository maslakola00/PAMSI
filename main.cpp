#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "LinkedList.cpp"
#include "SNode.h"
#include <string>
#include "PriorityQueue.cpp"







int main()
    {

int num; 
int size,prio;
std::string value;
PriorityQueue<std::string> PriorityQueue;
int pom=0;

while(1)
{
std::cout<< std::endl;
std::cout << " Wybierz opcje: " << std::endl;
std::cout << "1. Podaj rozmiar pakietow,na ktore Jan chce podzielic wiadomosc " << std::endl;
std::cout << "2. Wpisz wiadomosc w pakiecie, podaj jego priorytet oraz wyslij do Anny " << std::endl;
std::cout << "3. Wyswietl posortowana wiadomosc " << std::endl;
std::cout << "4. Usun pakiet o najwyzszym priorytecie " <<std::endl;
std::cout << "5. Sprawdz czy kolejka jest pusta " <<std::endl;
std::cout << "6. Zakoncz dzialanie programu" <<std::endl;
std::cin >>num;
std::cout <<std::endl;

switch(num)
    {

case 1:
 {
std::cout << "Rozmiar wiadomosci: ";
std::cin >> size;
std::cout << std::endl;
break;
 }

case 2:
{
if(pom!=0)
    PriorityQueue.~PriorityQueue();

std::string* value_arr = new std::string[size];
int* prio_arr = new int[size];
int i=0;
while(i<size)
{   
if(i==0)
std::cout << "Podaj wiadomosc(kazde slowo po enter): " <<std::endl;
std::cin >> value;
std::cout << std::endl;

    value_arr[i] = value;
    prio_arr[i] = i;

if(i==size-1)
mix(value_arr,prio_arr,size);

i++;
}

std::cout << "Wiadomosc nieposortowana: " << std::endl;
for(int i=0;i<size;i++)
    std::cout << value_arr[i] << " ";
std::cout <<std::endl;

for(int i=0; i<size; i++)
PriorityQueue.Enqueue(value_arr[i],prio_arr[i]);

break;
}

case 3:
if(PriorityQueue.empty() != true)
PriorityQueue.print();
else
std::cout <<"Kolejka jest pusta! " << std::endl;
break;

case 4:
PriorityQueue.Dequeue();
break;

case 5:
if(PriorityQueue.empty()==true)
    std::cout<< "Kolejka jest pusta! " <<std::endl;
else
    std::cout << "Kolejka nie jest pusta! Jej aktualny rozmiar to: " << PriorityQueue.get_size() << std::endl; 
break;

case 6:
exit(1);
break;
    }   
}


return 0;

    }






