#include"Util.h"
//静态变量的初始化   不然会出现LNK2001问题的编译问题
int Util::inputIndex = 0;

Util::Util() {}
Util::~Util() {}

void Util::clear()
{
	system("cls");
}

//用于切割字符串
vector<string> Util::split(string str, string pattern)
{
	string::size_type pos;
	vector<string> result;
	str += pattern;//扩展字符串以方便操作
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
	Student stu = Student("7", "Ricky", "15级软件3班", "男", "15011918911", "软件工程");
	Student stu1 = Student("8", "Ricky", "15级软件3班", "男", "15011918911", "软件工程");
	Student stu2 = Student("3", "Ricky", "15级软件3班", "男", "15011918911", "软件工程");
	Student stu3 = Student("9", "Ricky", "15级软件3班", "男", "15011918911", "软件工程");
	DataBase::studentList->add(stu1);
	DataBase::studentList->add(stu);
	DataBase::studentList->add(stu2);
	DataBase::studentList->add(stu3);

	Course c = Course("001","算法分析于设计","大二下学期第一周");
	Course c1 = Course("002", "计算机操作系统", "大二下学期第一周");
	DataBase::courseList->add(c);
	DataBase::courseList->add(c1);
}