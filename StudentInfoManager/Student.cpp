#include "Student.h"

Student::Student() 
{
}
Student::Student(string id, string name, string schoolClass, string sex, string phoneNumber, string course)
{
	this->id = id;
	this->name = name;
	this->schoolClass = schoolClass;
	this->sex = sex;
	this->phoneNumber = phoneNumber;
	this->course = course;
}
Student::~Student() {}

void Student::setId(string id)
{
	this->id = id;
}
string Student::getId()
{
	return id;
}

void Student::setName(string name)
{
	this->name = name;
}
string Student::getName()
{
	return name;
}

void Student::setSchoolClass(string schoolClass)
{
	this->schoolClass = schoolClass;
}
string Student::getSchoolClass()
{
	return schoolClass;
}

void Student::setSex(string sex)
{
	this->sex = sex;
}
string Student::getSex()
{
	return sex;
}

void Student::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
string Student::getPhoneNumber()
{
	return phoneNumber;
}

void Student::setCourse(string course)
{
	this->course = course;
}
string Student::getCourse()
{
	return course;
}

/*CourseList Student::getCourse_List()
{
	return *course_List;
}*/

void Student::print()
{
	cout << "        " + getId() + "        " + getName() + "     " + getSchoolClass() + "       " + getSex() +
		"     " + getPhoneNumber() + "      " + course_List.courseString();
}