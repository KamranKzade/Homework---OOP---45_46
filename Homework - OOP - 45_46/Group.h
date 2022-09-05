#pragma once


class Group
{
	string _name;
	vector <Student> _students;
	vector<Lesson> _lessons;

public:
	Group() = default;

	Group(string name, vector<Student> student, vector<Lesson> lessons)
	{
		_name = name;
		_students = student;
		_lessons = lessons;
	}


	void addStudent(Student student)
	{
		_students.push_back(student);
	}

	void addLesson(Lesson lesson)
	{
		_lessons.push_back(lesson);
	}

	void print() const
	{
		cout << "Name: " << _name << endl;
		for (size_t i = 0; i < _students.size(); i++)
			_students[i].print();

		for (size_t i = 0; i < _lessons.size(); i++)
			_lessons[i].print();
	}
};