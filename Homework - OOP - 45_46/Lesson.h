#pragma once



class Lesson
{
	string _name = "";
	size_t _timeOfLesson = 0;
public:
	Lesson() = default;
	Lesson(string name, size_t time)
	{
		_name = name;
		_timeOfLesson = time;
	}


	void print() const
	{
		cout << "Name: " << _name << endl;
		cout << "Time of Lesson: " << _timeOfLesson << endl;
	}
};