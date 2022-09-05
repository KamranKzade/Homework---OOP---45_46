#pragma once


class Exam
{
	Lesson _lessonname;
	size_t _point = 0;

public:
	Exam() = default;
	Exam(Lesson lesson, size_t point)
	{
		_lessonname = lesson;
		_point = point;
	}


	void print() const
	{
		cout << "Lesson name: " << endl;
		_lessonname.print();
		cout << "Point: " << _point<<endl;
	}

};