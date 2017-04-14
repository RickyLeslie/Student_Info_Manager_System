#pragma once
#include<iostream>
#include<string>
using namespace std;

class View
{
public:
	View();
	~View();
	static void showMainMenu();//主菜单
	static void showManagerMenu();//管理员菜单
	static void showManagerModifyView();//管理员修改学生信息界面
	static void showCourseView();//课程管理界面
	static void showInputStudentIdView();//输入学生ID界面
	static void showInputCourseIdView(); //输入课程ID界面;
	static void showCourseInterfaceIdView(); //输入选课界面;
	static void showFuzzyQueryView();//模糊查询界面
};