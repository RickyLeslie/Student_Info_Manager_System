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

	static StudentList* studentList;//ѧ������
	static CourseList* courseList;//�γ�����
	static void initDataBase();
	static void saveDataBase();

private:

};

