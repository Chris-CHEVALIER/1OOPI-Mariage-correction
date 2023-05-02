#include "Person.hpp"

class Woman : public Person
{
private:
    Person partner;

public:
    Woman();
    Woman(string newFirstName, string newLastName, int newAge);
    bool isSingle() const;
    Person getPartner() const;
    void setPartner(Person newPartner);
    void display() const;
};