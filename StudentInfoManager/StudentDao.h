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

	static void addStudentDao();		//����ѧ��
	static void removeStudentDao();		//ɾ��ѧ��
	static void modifyStudentInfoDao();	//�޸�ѧ����Ϣ
	static void queryStudentDao();		//��ѯѧ����Ϣ
	static void sortStudentDao();		//����

private:

};