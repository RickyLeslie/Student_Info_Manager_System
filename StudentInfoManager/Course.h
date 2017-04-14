#pragma once
#include<iostream>
#include<string>
using namespace std;

class Course
{
private:
	string courseId;     //课程编号
	string courseName;   //课程名字
	string courseSemester;//开课学期
public:
	Course();
	Course(string courseId, string courseName, string courseSemester);
	~Course();

	void setCourseId(string courseId);
	string getCourseId();

	void setCourseName(string courseName);
	string getCourseName();

	void setCourseSemester(string courseSemester);
	string getCourseSemester();

	void print();
};