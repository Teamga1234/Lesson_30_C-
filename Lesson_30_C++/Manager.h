#pragma once
#include "Employee.h"
class Manager : public Employee
{
protected:
	int percent;
	float sales;
public:
	Manager();
	Manager(string name, float salary, int percent, float sales);

	void setPercent(int percent);
	void setSales(int sales);
	int getPercent()const;
	float getSales()const;

	void showInfo()const override;
	float calcSalary()const override;

};

