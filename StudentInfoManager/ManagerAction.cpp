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
	cout << "�������޸�ѧ����Ϣ��ID:" << endl;
	string id;
	cin >> id;
	modifyStudentMenu(id);
}

//�޸�ѧ����Ϣ����
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
//�γ̹������
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
	cout << "������ѧ��ID:" << endl;
	string id;
	cin >> id;
	courseSelectionView(id);
}

void ManagerAction::courseSelectionView(string id)
{
	Util::clear();
	cout << "------------------ѡ��------------------" << endl;
	cout << "          �γ̱��          �γ���          ����ѧ��" << endl;
	DataBase::courseList->printAll();
	cout << "----------------------------------------" << endl;
	cout << "������γ̱��:" << endl;
	string courseID;
	cin >> courseID;
	StudentService::courseSelectionService(id, courseID);
	Util::pressAnyKeyToContinue();
}