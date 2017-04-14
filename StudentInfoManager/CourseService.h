#pragma once
#include<string>
#include"DataBase.h"
#include"Util.h"
#include<iostream>
using namespace std;

class CourseService
{
public:
	CourseService();
	~CourseService();

	static void addCourseService();
	static void removeCourseService();	
	static void queryCourseService();		
	static void printAllStudentService();
private:

};