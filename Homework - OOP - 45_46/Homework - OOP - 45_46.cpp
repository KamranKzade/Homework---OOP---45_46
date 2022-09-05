#include <iostream>
#include <vector>


using namespace std;

#include "Base.h"
#include "Lesson.h"
#include "Exam.h"
#include "BankCard.h"
#include "Student.h"
#include "Group.h"
#include "Teacher.h"
#include "Bank.h"
#include "University.h"


int main()
{
	Lesson lesson1("History", 40);
	Lesson lesson2("Math", 80);

	vector<Lesson> lessons;
	lessons.push_back(lesson1);
	lessons.push_back(lesson2);

	Exam exam1(lesson1, 95);
	Exam exam2(lesson2, 100);
	
	vector<Exam> exams;
	exams.push_back(exam1);
	exams.push_back(exam2);
	
	BankCard StudentKart1("1234 5678 9123 4567", "Kamran", 398.2, "11", "2024");
	BankCard StudentKart2("1934 1654 0012 4861", "Aydin", 268, "08", "2023");
	
	BankCard TeacherKart("9876 4321 0987 6543", "Tural", 3398.2, "09", "2027");
	
	Student student1("Kamran", "Karimzada", 23, "IT", 11.2, 398.2, StudentKart1, exams);
	Student student2("Aydin", "Xirdalanli", 17, "IT", 10.8, 268, StudentKart2, exams);
	
	vector<Student> students;

	students.push_back(student1);
	students.push_back(student2);

	Group group1("4214", students, lessons);
	
	Teacher teacher1("Tural", "Novruzov", 29, "IT departament", 3398.2, TeacherKart);

	
	Bank kapital("Kapital", "Baki");
	kapital.addBankCard(StudentKart1);
	kapital.addBankCard(StudentKart2);
	kapital.addBankCard(TeacherKart);
	
	


	University Adiu("Iqtisad universiteti");
	Adiu.addStudent(student1);
	Adiu.addStudent(student2);

	Adiu.addTeacher(teacher1);


	Adiu.showAllStudents();
	cout << "University score: "<< Adiu.getUniversityScore() << endl;

	cout << "Payment of University: " << Adiu.getPayment() << endl;
}