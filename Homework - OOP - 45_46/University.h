#pragma once


class University
{
	string _name;
	vector<Teacher> teachers;
	vector<Student> students;
	double score;
	double payment;

public:
	University() = default;
	University(string name)
	{
		_name = name;
	}


	void addTeacher(Teacher teac)
	{
		teachers.push_back(teac);
	}

	void addStudent(Student student)
	{
		students.push_back(student);
	}

	double getUniversityScore()
	{

		for (size_t i = 0; i < students.size(); i++)
			score += students[i].getScore();

		score /= students.size();
		return score;
	}

	void showAllStudents()
	{
		for (size_t i = 0; i < students.size(); i++)
		{
			cout << endl;
			students[i].print();
			cout << endl;
		}
	}


	double getPayment()
	{
		for (size_t i = 0; i < students.size(); i++)
			payment += students[i].getMoney();

		for (size_t i = 0; i < teachers.size(); i++)
			payment += teachers[i].getSalary();

		return payment;
	}
};