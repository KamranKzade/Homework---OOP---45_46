#pragma once



class Student : public Base
{
	string _speciality = "";
	double _score = 0;
	double _money = 0;
	BankCard _bankKart;
	vector<Exam> _exams;

public:
	Student() = default;

	Student(string name, string surname, size_t age, string speciality,
		double score, double money, BankCard bankKart, vector<Exam> exams)
		: Base(name, surname, age)
	{
		_speciality = speciality;
		_score = score;
		_money = money;
		_bankKart = bankKart;
		_exams = exams;
	}

	double getScore() const { return _score; }
	double getMoney() const { return _money; }
	void print() const
	{
		Base::print();
		cout << "Speciality: " << _speciality << endl;
		cout << "Score: " << _score << endl;
		cout << "Money: " << _money << endl;
		cout << "Bank Card About: " << endl;
		_bankKart.print();

		cout << "Exams: " << endl;
		for (size_t i = 0; i < _exams.size(); i++)
			_exams[i].print();
	}
};

