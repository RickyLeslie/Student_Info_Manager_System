#pragma once
#include<iostream>
#include"DataBase.h"
using namespace std;


class Util
{
public:
	Util();
	~Util();

	static CourseList* courseList;//课程链表
	static void clear();//清屏
	static vector<string> Util::split(string str, string pattern);
	static void pressAnyKeyToContinue();//按任意键继续
	template <class T>
	static int getArrayLen(T& array);


	static int inputIndex;
	static void init();
};