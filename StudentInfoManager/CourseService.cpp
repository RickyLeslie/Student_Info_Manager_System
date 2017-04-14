#include"CourseService.h"
CourseService::CourseService()
{
}

CourseService::~CourseService()
{
}

void CourseService::addCourseService()
{
	Util::clear();
	string courseId;     //�γ̱��
	string courseName;   //�γ�����
	string courseSemester;//����ѧ��

	cout << "������γ̱��:" << endl;
	cin >> courseId;
	cout << "������γ�����:" << endl;
	cin >> courseName;
	cout << "�����뿪��ѧ��:" << endl;
	cin >> courseSemester;
	Course course(courseId, courseName, courseSemester);
	//cout << "������ѧ����ѡ�޿γ�:" << endl;
	DataBase::courseList->add(course);
	Util::pressAnyKeyToContinue();
}
void CourseService::removeCourseService() 
{
	Util::clear();
	string id;
	cout << "����������Ҫɾ���γ���Ϣ��ID:" << endl;
	cin >> id;
	DataBase::courseList->remove(id);
	Util::pressAnyKeyToContinue();
}
void CourseService::queryCourseService() 
{
	Util::clear();
	cout << "�������ѯ�γ̵�ID:" << endl;
	string id;
	cin >> id;
	DataBase::courseList->get(id)->data.print();
	Util::pressAnyKeyToContinue();
}
void CourseService::printAllStudentService() 
{
	Util::clear();
	cout << "------------------ѡ��------------------" << endl;
	cout << "          �γ̱��          �γ���          ����ѧ��" << endl;
	DataBase::courseList->printAll();
	cout << "----------------------------------------" << endl;
	Util::pressAnyKeyToContinue();
}