#include "Employee.h"

Employee::Employee()
{
    name = "none";
    salary = 7000;
}

Employee::Employee(string name, float salary)
{
    this->name = name;
    this->salary = salary;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setSalery(float salary)
{
    this->salary = salary;

}

string Employee::getName() const
{
    return name;
}

float Employee::getSalary() const
{
    return salary;
}

void Employee::showInfo() const
{
    
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

float Employee::calcSalary() const
{
    return salary * 0.805;
}
