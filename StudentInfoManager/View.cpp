#include "View.h"

View::View() {}
View::~View() {}

void View::showMainMenu()
{
	cout << "----------��ӭ����ѧ����Ϣ����ϵͳ----------" << endl;
	cout << "1.����Ա" << endl;
	cout << "2.�˳�" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "��ѡ��:" << endl;
}

void View::showManagerMenu()
{
	cout << "----------����Աϵͳ----------" << endl;
	cout << "1.����ѧ��" << endl;
	cout << "2.ɾ��ѧ��" << endl;
	cout << "3.�޸�ѧ����Ϣ" << endl;
	cout << "4.��ѯѧ����Ϣ" << endl;
	cout << "5.����" << endl;
	cout << "6.�γ̹���" << endl;
	cout << "7.ѡ��" << endl;
	cout << "8.�鿴ѧ����Ϣ" << endl;
	cout << "9.������Ϣ" << endl;
	cout << "10.����" << endl;
	cout << "------------------------------" << endl;
	cout << "��ѡ��:" << endl;
}

void View::showManagerModifyView()
{
	cout << "----------�޸���Ϣ----------" << endl;
	cout << "1.�޸�ѧ��" << endl;
	cout << "2.�޸�����" << endl;
	cout << "3.�޸İ༶" << endl;
	cout << "4.�޸��Ա�" << endl;
	cout << "5.�޸��ֻ�����" << endl;
	cout << "6.�޸Ŀγ�" << endl;
	cout << "7.����" << endl;
	cout << "------------------------------" << endl;
	cout << "��ѡ��:" << endl;
}

void View::showCourseView()
{
	cout << "----------�γ̹���----------" << endl;
	cout << "1.���ӿγ�" << endl;
	cout << "2.ɾ���γ�" << endl;
	cout << "3.��ѯ�γ���Ϣ" << endl;
	cout << "4.�鿴���пγ�" << endl;
	cout << "5.����" << endl;
	cout << "------------------------------" << endl;
	cout << "��ѡ��:" << endl;
}

void View::showInputStudentIdView()
{
	cout << "����������ѧ��ID:" << endl;
}

void View::showInputCourseIdView()
{
	cout << "����������γ�ID:" << endl;
}

void View::showCourseInterfaceIdView()
{

}

void View::showFuzzyQueryView()
{
	cout << "������ؼ���:" << endl;
}

