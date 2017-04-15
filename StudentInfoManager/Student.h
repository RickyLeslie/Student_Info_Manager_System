#pragma once
#include "CourseList.h"
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string id;
	string name;
	string schoolClass;
	string sex;
	string phoneNumber;
	string course;
	//CourseList *course_List=new CourseList;
public:
	CourseList course_List;

	Student();
	Student(string id, string name, string schoolClass, string sex, string phoneNumber, string course);
	~Student();

	void setId(string id);
	string getId();

	void setName(string name);
	string getName();

	void setSchoolClass(string schoolClass);
	string getSchoolClass();

	void setSex(string sex);
	string getSex();

	void setPhoneNumber(string phoneNumber);
	string getPhoneNumber();

	void setCourse(string course);
	string getCourse();

	//CourseList getCourse_List();

	void print();
};