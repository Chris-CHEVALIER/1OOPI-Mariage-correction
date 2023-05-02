#include "Man.hpp"

Man::Man()
{
}
Man::Man(string newFirstName, string newLastName, int newAge) : Person(newFirstName, newLastName, newAge)
{
}
bool Man::isSingle() const
{
    return partner.getFirstName() == "" && partner.getLastName() == "" && partner.getAge() == 0;
}
Person Man::getPartner() const
{
    return partner;
}
void Man::setPartner(Person newPartner)
{
    partner = newPartner;
}
void Man::display() const
{
    Person::display();
    cout << (isSingle() ? "Il est célibataire " : "Il est marié à " + partner.getFirstName());
    /* if (isSingle())
    {
        cout << "Elle est célibataire" << endl;
    }
    else
    {
        cout << "Elle est mariée à " << partner.getFirstName() << endl;
    } */
}