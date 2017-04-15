#pragma once
#include<iostream>
#include"View.h"
#include"Util.h"
#include"MainMenuAction.h"
#include"StudentService.h"
#include"CourseService.h"
using namespace std;

class ManagerAction
{
public:
	ManagerAction();
	~ManagerAction();

	static void showManagerMenu();
	//static void showModifyStudent();
	static void modifyStudentMenu(string id);
	static void modifyStudentId();
	static void showCourseMenu();
	static void courseSelectionByStudentId();
	static void courseSelectionView(string id);

private:

};