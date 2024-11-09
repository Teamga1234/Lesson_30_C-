#include "Teacher.h"
#include "Manager.h"
#include <vector>
#include <typeinfo>
#include <algorithm>
int main()
{
	Employee a("Oleg", 19993);
	/*a.showInfo();
	cout << "Total salary: " << a.calcSalary() << endl;
	cout << endl;*/

	Teacher b("Oleg2", 10000, 20, 500);
	/*b.showInfo();
	cout << "Total salary: " << b.calcSalary() << endl;
	cout << endl;*/

	Manager c("ne Oleg", 10000, 50, 50000);
	/*c.showInfo();
	cout << "Total salary: " << c.calcSalary() << endl;
	cout << endl;*/
	vector<Employee*> itStep = { &a, &b, &c, new Employee("Ivan", 17500)
	, new Manager("Ehor", 7000, 25, 100000)
	, new Manager("Vlad", 7000, 15, 200000)
	, new Teacher("Lukashov Vladyslav", 15000, 50, 1000)
	};
	itStep.push_back(new Teacher("Kyrylo", 27000, 10, 500));
	//------------------------------------------------------
	for (int i = 0; i < itStep.size(); i++)
	{
		cout << endl;
		itStep[i]->showInfo();
		cout << "Total salary: " << itStep[i]->calcSalary() << endl;
	}
	cout << "-----------------------------------------\n\n";
	cout << "List of manager:\n ";
	for (int i = 0; i < itStep.size(); i++)
	{
		if (typeid(*itStep[i]) == typeid(Manager))
		{
			cout << "\t" << itStep[i]->getName() << endl;
		}
	}
	cout << "-----------------------------------------\n\n";
	cout << "Teacher:\n ";
	for (int i = 0; i < itStep.size(); i++)
	{
		
			Teacher* p = dynamic_cast<Teacher*>(itStep[i]);
			if (p != nullptr)
			{
				cout << "\tName: " << p->getName() << endl;
				cout << "\tOld cost: " << p->getCost()<< "UAH" << endl;

				p->setCost(p->getCost() + 100);
				cout << "\tNew cost: " << p->getCost() << "UAH" << endl;
				cout << endl;
			}
		
	}
	cout << "-----------------------------------------\n\n";
	cout << "Sorting by total salary: \n";
	sort(itStep.begin(), itStep.end(), [](Employee* a, Employee* b)
		{
			return a->calcSalary() > b->calcSalary();
		});
	for (auto item : itStep)
	{
		cout << item->getName()<< " " << item->calcSalary() << endl;
	}
	//------------------------------------------------------

	/*for (int i = 3; i < itStep.size(); i++)
	{
		delete itStep[i];
	}*/
}