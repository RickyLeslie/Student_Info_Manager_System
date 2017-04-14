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

	cout << "������ѧ��ѧ��:" << endl;
	cin >> id;
	Node<Student>* addStu = DataBase::studentList->get(id);
	if (addStu != NULL)
	{
		cout << "�Ѵ��ڸ�ѧ����Ϣ,�뷵��" << endl;
		system("pause");
		return;
	}
	cout << "������ѧ������:" << endl;
	cin >> name;
	cout << "������ѧ���༶:" << endl;
	cin >> schoolClass;
	cout << "������ѧ���Ա�:" << endl;
	cin >> sex;
	cout << "������ѧ���绰����:" << endl;
	cin >> phoneNumber;
	Student stu(id, name, schoolClass, sex, phoneNumber, "�������");
	//cout << "������ѧ����ѡ�޿γ�:" << endl;
	DataBase::studentList->add(stu);
	Util::pressAnyKeyToContinue();
}
void StudentService::removeStudentService()
{
	Util::clear();
	string id;
	cout << "����������Ҫɾ��ѧ����Ϣ��ID:" << endl;
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
	cout << "�������µ�ID:" << endl;
	string newID;
	cin >> newID;
	DataBase::studentList->get(id)->data.setId(newID);
}
void StudentService::modifyStudentNameService(string id)
{
	Util::clear();
	cout << "�������µ�����:" << endl;
	string name;
	cin >> name;
	DataBase::studentList->get(id)->data.setName(name);
	//DataBase::studentList->modifyByName(stu, name);
}
void StudentService::modifyStudentClassService(string id )
{
	Util::clear();
	cout << "�������µİ༶:" << endl;
	string schoolClass;
	cin >> schoolClass;
	DataBase::studentList->get(id)->data.setSchoolClass(schoolClass);
}
void StudentService::modifyStudentSexService(string id)
{
	Util::clear();
	cout << "�������µ��Ա�:" << endl;
	string sex;
	cin >> sex;
	DataBase::studentList->get(id)->data.setSex(sex);
}
void StudentService::modifyStudentPhoneNumberService(string id)
{
	Util::clear();
	cout << "�������µĵ绰����:" << endl;
	string phoneNumber;
	cin >> phoneNumber;
	DataBase::studentList->get(id)->data.setPhoneNumber(phoneNumber);
}

void StudentService::queryStudentService()
{
	Util::clear();
	cout << "�������ѯѧ����ID:" << endl;
	string id;
	cin >> id;
	if (DataBase::studentList->get(id) != NULL)
	{
		cout << "------------------ѧ����Ϣ------------------" << endl;
		cout << "        ѧ��        ����        �༶        �Ա�        �ֻ�����        ѡ�޿γ�" << endl;
		DataBase::studentList->get(id)->data.print();
		cout << endl;
	}
	else
		cout << "ϵͳû�и�ѧ����Ϣ" << endl;
	Util::pressAnyKeyToContinue();
}
void StudentService::sortStudentService()
{
	Util::clear();
	DataBase::studentList->sort();
	cout << "����ɹ���" << endl;
	Util::pressAnyKeyToContinue();
}

void StudentService::printAllStudentService()
{
	Util::clear();
	cout << "------------------ѧ����Ϣ------------------" << endl;
	cout << "        ѧ��        ����        �༶        �Ա�        �ֻ�����        ѡ�޿γ�" << endl;
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