#pragma once
#include<iostream>
#include<string>
#include"Student.h"
using namespace std;

class StudentDao
{
public:
	StudentDao();
	~StudentDao();

	static void addStudentDao();		//增加学生
	static void removeStudentDao();		//删除学生
	static void modifyStudentInfoDao();	//修改学生信息
	static void queryStudentDao();		//查询学生信息
	static void sortStudentDao();		//排序

private:

};