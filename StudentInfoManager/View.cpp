#include "View.h"

View::View() {}
View::~View() {}

void View::showMainMenu()
{
	cout << "----------欢迎来到学生信息管理系统----------" << endl;
	cout << "1.管理员" << endl;
	cout << "2.退出" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "请选择:" << endl;
}

void View::showManagerMenu()
{
	cout << "----------管理员系统----------" << endl;
	cout << "1.增加学生" << endl;
	cout << "2.删除学生" << endl;
	cout << "3.修改学生信息" << endl;
	cout << "4.查询学生信息" << endl;
	cout << "5.排序" << endl;
	cout << "6.课程管理" << endl;
	cout << "7.选课" << endl;
	cout << "8.查看学生信息" << endl;
	cout << "9.导出信息" << endl;
	cout << "10.返回" << endl;
	cout << "------------------------------" << endl;
	cout << "请选择:" << endl;
}

void View::showManagerModifyView()
{
	cout << "----------修改信息----------" << endl;
	cout << "1.修改学号" << endl;
	cout << "2.修改姓名" << endl;
	cout << "3.修改班级" << endl;
	cout << "4.修改性别" << endl;
	cout << "5.修改手机号码" << endl;
	cout << "6.修改课程" << endl;
	cout << "7.返回" << endl;
	cout << "------------------------------" << endl;
	cout << "请选择:" << endl;
}

void View::showCourseView()
{
	cout << "----------课程管理----------" << endl;
	cout << "1.增加课程" << endl;
	cout << "2.删除课程" << endl;
	cout << "3.查询课程信息" << endl;
	cout << "4.查看所有课程" << endl;
	cout << "5.返回" << endl;
	cout << "------------------------------" << endl;
	cout << "请选择:" << endl;
}

void View::showInputStudentIdView()
{
	cout << "请输入输入学生ID:" << endl;
}

void View::showInputCourseIdView()
{
	cout << "请输入输入课程ID:" << endl;
}

void View::showCourseInterfaceIdView()
{

}

void View::showFuzzyQueryView()
{
	cout << "情输入关键字:" << endl;
}

