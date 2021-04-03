#include <iostream>

// Klasa modelujaca obiekt przekazwyany do kolejki priorytetowej
template<typename TYPE>
struct Mess
{
private:

int _key; //priorytet

TYPE _value; //wartosc wiadomosci

public:

Mess(); //konstruktor bezparametryczny

Mess(int key, const TYPE & value); //konstruktor parametryczny

/*Gettery i settery potrzebne do dostania sie do prywatnych elementów klasy*/
TYPE get_value() const;

 void set_value(const TYPE & value);

int get_key() const;

void set_key(int key);

};





