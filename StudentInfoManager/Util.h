#pragma once
#include<iostream>
#include"DataBase.h"
using namespace std;


class Util
{
public:
	Util();
	~Util();

	static CourseList* courseList;//�γ�����
	static void clear();//����
	static vector<string> Util::split(string str, string pattern);
	static void pressAnyKeyToContinue();//�����������
	template <class T>
	static int getArrayLen(T& array);


	static int inputIndex;
	static void init();
};