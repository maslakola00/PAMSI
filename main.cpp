#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "LinkedList.cpp"
#include "SNode.h"

int main()
{
int value,size;
LinkedList<int> list;

std::cout << " Podaj rozmiar listy: " <<std::endl;
std::cin >> size;
std::cout << std::endl;
for(int i=0; i< size; i++)
{
std::cout << "Enter the value: " << std::endl;
std::cin >> value;
std::cout << std::endl;
list.addFront(value);
list.print();

}



















}









