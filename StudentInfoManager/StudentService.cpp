#include "StudentService.h"

StudentService::StudentService()
{
}

StudentService::~StudentService()
{
}

void StudentService::addStudentService()
{
	Util::clear();
	string id;
	string name;
	string schoolClass;
	string sex;
	string phoneNumber;
	string course;

	cout << "请输入学生学号:" << endl;
	cin >> id;
	Node<Student>* addStu = DataBase::studentList->get(id);
	if (addStu != NULL)
	{
		cout << "已存在该学生信息,请返回" << endl;
		system("pause");
		return;
	}
	cout << "请输入学生姓名:" << endl;
	cin >> name;
	cout << "请输入学生班级:" << endl;
	cin >> schoolClass;
	cout << "请输入学生性别:" << endl;
	cin >> sex;
	cout << "请输入学生电话号码:" << endl;
	cin >> phoneNumber;
	Student stu(id, name, schoolClass, sex, phoneNumber, "软件工程");
	//cout << "请输入学生的选修课程:" << endl;
	DataBase::studentList->add(stu);
	Util::pressAnyKeyToContinue();
}
void StudentService::removeStudentService()
{
	Util::clear();
	string id;
	cout << "请输入您想要删除学生信息的ID:" << endl;
	cin >> id;
	DataBase::studentList->remove(id);
	Util::pressAnyKeyToContinue();
}
void StudentService::modifyStudentInfoService(string id,int inputIndex)
{
	Util::clear();
	switch (inputIndex)
	{
	case 1:modifyStudentIDService(id); ManagerAction::modifyStudentMenu(id); break;
	case 2:modifyStudentNameService(id); ManagerAction::modifyStudentMenu(id); break;
	case 3:modifyStudentClassService(id); ManagerAction::modifyStudentMenu(id); break;
	case 4:modifyStudentSexService(id); ManagerAction::modifyStudentMenu(id); break;
	case 5:modifyStudentPhoneNumberService(id); ManagerAction::modifyStudentMenu(id); break;
	case 6:/*courseView();*/ break;
    case 7:ManagerAction::showManagerMenu(); break;
	}
}

void StudentService::modifyStudentIDService(string id)
{
	Util::clear();
	cout << "请输入新的ID:" << endl;
	string newID;
	cin >> newID;
	DataBase::studentList->get(id)->data.setId(newID);
}
void StudentService::modifyStudentNameService(string id)
{
	Util::clear();
	cout << "请输入新的姓名:" << endl;
	string name;
	cin >> name;
	DataBase::studentList->get(id)->data.setName(name);
	//DataBase::studentList->modifyByName(stu, name);
}
void StudentService::modifyStudentClassService(string id )
{
	Util::clear();
	cout << "请输入新的班级:" << endl;
	string schoolClass;
	cin >> schoolClass;
	DataBase::studentList->get(id)->data.setSchoolClass(schoolClass);
}
void StudentService::modifyStudentSexService(string id)
{
	Util::clear();
	cout << "请输入新的性别:" << endl;
	string sex;
	cin >> sex;
	DataBase::studentList->get(id)->data.setSex(sex);
}
void StudentService::modifyStudentPhoneNumberService(string id)
{
	Util::clear();
	cout << "请输入新的电话号码:" << endl;
	string phoneNumber;
	cin >> phoneNumber;
	DataBase::studentList->get(id)->data.setPhoneNumber(phoneNumber);
}

void StudentService::queryStudentService()
{
	Util::clear();
	cout << "请输入查询学生的ID:" << endl;
	string id;
	cin >> id;
	if (DataBase::studentList->get(id) != NULL)
	{
		cout << "------------------学生信息------------------" << endl;
		cout << "        学号        姓名        班级        性别        手机号码        选修课程" << endl;
		DataBase::studentList->get(id)->data.print();
		cout << endl;
	}
	else
		cout << "系统没有该学生信息" << endl;
	Util::pressAnyKeyToContinue();
}
void StudentService::sortStudentService()
{
	Util::clear();
	DataBase::studentList->sort();
	cout << "排序成功！" << endl;
	Util::pressAnyKeyToContinue();
}

void StudentService::printAllStudentService()
{
	Util::clear();
	cout << "------------------学生信息------------------" << endl;
	cout << "        学号        姓名        班级        性别        手机号码        选修课程" << endl;
	DataBase::studentList->printAll();
	cout << "----------------------------------------" << endl;
	Util::pressAnyKeyToContinue();
}

/*void StudentService::courseSelectionService(string id,string courseID)
{
	DataBase::studentList->courseSelection(id, courseID);
}*/

void StudentService::courseSelectionService(string id, string courseID)
{
	Node<Student>* target = DataBase::studentList->get(id);
	target->data.course_List.add(DataBase::courseList->get(courseID)->data);
}