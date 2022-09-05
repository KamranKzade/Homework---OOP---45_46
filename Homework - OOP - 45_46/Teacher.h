#pragma once



class Teacher :Base
{
	vector<Group> _groups;
	string _department;
	double _salary;
	BankCard _bankcard;
public:
	Teacher() = default;
	Teacher(string name, string surname, size_t age, string depar, double salary, BankCard bank)
		:Base(name, surname, age)
	{
		_department = depar;
		_salary = salary;
		_bankcard = bank;
	}

	void addGroup(Group group)
	{
		_groups.push_back(group);
	}


	double getSalary() const { return _salary; }

	void print() const
	{
		Base::print();
		for (size_t i = 0; i < _groups.size(); i++)
			_groups[i].print();

		cout << "Department: " << _department << endl;
		cout << "Salary: " << _salary << endl;
		cout << "BankCart info: " << endl;
		_bankcard.print();
	}
};