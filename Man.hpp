#include "Person.hpp"

class Man : public Person
{
private:
    Person partner;

public:
    Man();
    Man(string newFirstName, string newLastName, int newAge);
    bool isSingle() const;
    Person getPartner() const;
    void setPartner(Person newPartner);
    void display() const;
};