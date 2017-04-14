#pragma once
#include "Node.h"
#include "Student.h"
#include"CourseList.h"
#include<iostream>
using namespace std;

class StudentList
{
public:
	StudentList();
	~StudentList();

	Node<Student>* head;
	Node<Student>* rear;

	void add(Student stu);
	void remove(string id);
	Node<Student>* get(string id);
	void sort();
	void printAll();
};
