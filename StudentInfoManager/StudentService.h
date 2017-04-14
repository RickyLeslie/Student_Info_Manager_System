#pragma once
#include<iostream>
#include<string>
//#include"Student.h"
#include"StudentDao.h"
#include"DataBase.h"
#include"Util.h"
#include"ManagerAction.h"
using namespace std;

class StudentService
{
public:
	StudentService();
	~StudentService();

	static void addStudentService();		//增加学生
	static void removeStudentService();		//删除学生
	static void modifyStudentInfoService(string id,int inputIndex);	//修改学生信息
	static void queryStudentService();		//查询学生信息
	static void sortStudentService();		//排序
	static void courseSelectionService(string id, string courseID);
	static void printAllStudentService();
	static void modifyStudentIDService(string id);
	static void modifyStudentNameService(string id);
	static void modifyStudentClassService(string id);
	static void modifyStudentSexService(string id);
	static void modifyStudentPhoneNumberService(string id);
private:

};