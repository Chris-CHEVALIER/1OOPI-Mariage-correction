#include "Man.cpp"
#include "Woman.cpp"
#include "Person.cpp"

int main()
{
    Woman meghan("Meghan", "Markle", 36);
    Man harry("Harry", "De Sussex", 33);
    meghan.display();
    harry.display();
    meghan.setPartner(harry);
    harry.setPartner(meghan);
    meghan.display();
    harry.display();

}