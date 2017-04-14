#pragma once
#include<iostream>
#include"StudentList.h"
#include"CourseList.h"
#include<fstream>
#include <vector>
#include <cstdlib>
#include"Util.h"
using namespace std;

class DataBase
{
public:
	DataBase();
	~DataBase();

	static StudentList* studentList;//学生链表
	static CourseList* courseList;//课程链表
	static void initDataBase();
	static void saveDataBase();

private:

};

