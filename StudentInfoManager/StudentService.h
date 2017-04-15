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

	static void addStudentService();		//����ѧ��
	static void removeStudentService();		//ɾ��ѧ��
	static void modifyStudentInfoService(string id,int inputIndex);	//�޸�ѧ����Ϣ
	static void queryStudentService();		//��ѯѧ����Ϣ
	static void sortStudentService();		//����
	static void courseSelectionService(string id, string courseID);
	static void printAllStudentService();
	static void modifyStudentIDService(string id);
	static void modifyStudentNameService(string id);
	static void modifyStudentClassService(string id);
	static void modifyStudentSexService(string id);
	static void modifyStudentPhoneNumberService(string id);
private:

};