#pragma once
#include<iostream>
#include<string>
using namespace std;

class Course
{
private:
	string courseId;     //�γ̱��
	string courseName;   //�γ�����
	string courseSemester;//����ѧ��
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