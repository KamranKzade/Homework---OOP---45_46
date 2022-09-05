#pragma once



class Base
{
protected:
	string _name = "";
	string _surname = "";
	size_t _age = 0;

public:
	Base() = default;
	Base(string name, string surname, size_t age)
	{
		_name = name;
		_surname = surname;
		_age = age;
	}

	void print() const
	{
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Age: " << _age << endl;
	}
};

