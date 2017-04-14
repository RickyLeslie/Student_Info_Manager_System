#pragma once
#include"Node.h"
#include"Course.h"
#include<iostream>
using namespace std;

class CourseList
{
public:
	CourseList();
	~CourseList();

	Node<Course>* head;
	Node<Course>* rear;

	void add(Course cou);
	void remove(string id);
	Node<Course>* get(string id);
	void printAll();
	string courseString();
};