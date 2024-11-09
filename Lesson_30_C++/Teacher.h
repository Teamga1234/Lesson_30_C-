#pragma once
#include "Employee.h"
class Teacher : public Employee
{
protected:
	int cost;
	int hours;
public:
	Teacher();
	Teacher(string name, float salary, int cost, int hours);
	void setCost(int cost);
	void setHours(int hours);

	int getCost()const;
	int getHours()const;

	void showInfo()const override;
	float calcSalary()const override ;//final -забороняє змінювати метод у нащадків
};

