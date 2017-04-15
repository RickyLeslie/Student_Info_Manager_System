#include"Util.h"
//��̬�����ĳ�ʼ��   ��Ȼ�����LNK2001����ı�������
int Util::inputIndex = 0;

Util::Util() {}
Util::~Util() {}

void Util::clear()
{
	system("cls");
}

//�����и��ַ���
vector<string> Util::split(string str, string pattern)
{
	string::size_type pos;
	vector<string> result;
	str += pattern;//��չ�ַ����Է������
	int size = str.size();
	for (int i = 0; i<size; i++)
	{
		pos = str.find(pattern, i);
		if (pos<size)
		{
			string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + pattern.size() - 1;
		}
	}
	return result;
}

void Util::pressAnyKeyToContinue()
{
	system("pause");
}

template <class T>
int Util::getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]) - 1);
}

void Util::init()
{
	Student stu = Student("7", "Ricky", "15�����3��", "��", "15011918911", "�������");
	Student stu1 = Student("8", "Ricky", "15�����3��", "��", "15011918911", "�������");
	Student stu2 = Student("3", "Ricky", "15�����3��", "��", "15011918911", "�������");
	Student stu3 = Student("9", "Ricky", "15�����3��", "��", "15011918911", "�������");
	DataBase::studentList->add(stu1);
	DataBase::studentList->add(stu);
	DataBase::studentList->add(stu2);
	DataBase::studentList->add(stu3);

	Course c = Course("001","�㷨���������","�����ѧ�ڵ�һ��");
	Course c1 = Course("002", "���������ϵͳ", "�����ѧ�ڵ�һ��");
	DataBase::courseList->add(c);
	DataBase::courseList->add(c1);
}