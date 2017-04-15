#include "ManagerAction.h"

ManagerAction::ManagerAction() {}
ManagerAction::~ManagerAction() {}

void ManagerAction::showManagerMenu()
{
	while (true)
	{
		Util::clear();
		View::showManagerMenu();
		cin >> Util::inputIndex;
		switch (Util::inputIndex)
		{
		case 1:StudentService::addStudentService(); showManagerMenu(); break;
		case 2:StudentService::removeStudentService(); showManagerMenu(); break;
		case 3:modifyStudentId(); showManagerMenu(); break;
		case 4:StudentService::queryStudentService(); showManagerMenu(); break;
		case 5:StudentService::sortStudentService(); showManagerMenu(); break;
		case 6:showCourseMenu(); break;
		case 7:courseSelectionByStudentId(); showManagerMenu(); break;
		case 8:StudentService::printAllStudentService(); showManagerMenu(); break;
		case 9: DataBase::saveDataBase(); showManagerMenu(); break;
		case 10:MainMenuAction::showMainMenu(); break;
		default:showManagerMenu(); break;
		}
		break;
	}
}

void ManagerAction::modifyStudentId()
{
	Util::clear();
	cout << "请输入修改学生信息的ID:" << endl;
	string id;
	cin >> id;
	modifyStudentMenu(id);
}

//修改学生信息界面
void ManagerAction::modifyStudentMenu(string id)
{
	while (true)
	{
		//Util::clear();
		View::showManagerModifyView();
		cin >> Util::inputIndex;
		StudentService::modifyStudentInfoService(id, Util::inputIndex);
		break;
	}
}
//课程管理界面
void ManagerAction::showCourseMenu()
{
	while (true)
	{
		Util::clear();
		View::showCourseView();
		cin >> Util::inputIndex;
		switch (Util::inputIndex)
		{
		case 1:CourseService::addCourseService(); showCourseMenu(); break;
		case 2:CourseService::removeCourseService(); showCourseMenu(); break;
		case 3:CourseService::queryCourseService(); showCourseMenu(); break;
		case 4:CourseService::printAllStudentService(); showCourseMenu(); break;
		case 5:showManagerMenu(); break;
		default:showManagerMenu(); break;
		}
		break;
	}
}

void ManagerAction::courseSelectionByStudentId()
{
	Util::clear();
	cout << "请输入学生ID:" << endl;
	string id;
	cin >> id;
	courseSelectionView(id);
}

void ManagerAction::courseSelectionView(string id)
{
	Util::clear();
	cout << "------------------选课------------------" << endl;
	cout << "          课程编号          课程名          开课学期" << endl;
	DataBase::courseList->printAll();
	cout << "----------------------------------------" << endl;
	cout << "请输入课程编号:" << endl;
	string courseID;
	cin >> courseID;
	StudentService::courseSelectionService(id, courseID);
	Util::pressAnyKeyToContinue();
}