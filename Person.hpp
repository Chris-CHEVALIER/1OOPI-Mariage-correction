#include <iostream>
#pragma once
using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int age;

public:
    Person();
    Person(string newFirstName, string newLastName, int newAge);
    void getOld();
    string getFirstName() const;
    void setFirstName(string newFirstName);
    string getLastName() const;
    void setLastName(string newLastName);
    int getAge() const;
    void setAge(int newAge);
    void display() const;
};