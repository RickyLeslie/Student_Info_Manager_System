#pragma once
#include<iostream>
#include<string>
using namespace std;

class View
{
public:
	View();
	~View();
	static void showMainMenu();//���˵�
	static void showManagerMenu();//����Ա�˵�
	static void showManagerModifyView();//����Ա�޸�ѧ����Ϣ����
	static void showCourseView();//�γ̹������
	static void showInputStudentIdView();//����ѧ��ID����
	static void showInputCourseIdView(); //����γ�ID����;
	static void showCourseInterfaceIdView(); //����ѡ�ν���;
	static void showFuzzyQueryView();//ģ����ѯ����
};