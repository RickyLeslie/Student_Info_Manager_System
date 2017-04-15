#include"CourseList.h"

CourseList::CourseList() {}
CourseList::~CourseList() {}

//1.插入：将某学生的基本信息插入到登记表中；
void CourseList::add(Course cou)
{
	Node<Course>* list = rear;
	Node<Course>* newNode = new Node<Course>(list, cou, nullptr);
	rear = newNode;
	if (list == nullptr)
	{
		head = newNode;
	}
	else
	{
		list->next = newNode;
	}
}
//2.删除：将满足条件的基本信息删除；
void CourseList::remove(string id)
{
	Node<Course>* removeCourse = get(id);
	if (removeCourse == NULL)
	{
		cout << "没有该课程信息，请返回" << endl;
		return;
	}
	if (removeCourse == head)
	{
		head = removeCourse->next;
	}
	else
		removeCourse->prev->next = removeCourse->next;
	delete removeCourse;
}
//4.查询：查找满足条件（学号或姓名等字段）的学生；
Node<Course>* CourseList::get(string id)
{
	Node<Course>* target = head;
	for (; target != NULL; target = target->next)
	{
		if (target->data.getCourseId() == id)
		{
			return target;
		}
		if ((target->data.getCourseId() != id) && (target->next == NULL))
		{
			cout << "没有该学生信息，返回" << endl;
			return NULL;
		}
	}
}
//8.输出：将登记表中的所有学生的（或满足条件）信息全部输出，要求格式清晰，方便查看。
void CourseList::printAll() 
{
	Node<Course>* showCourse = head;
	for (; showCourse != NULL; showCourse = showCourse->next)
	{
		showCourse->data.print();
		cout << endl;
	}
}

string CourseList::courseString()
{
	Node<Course>* showCourse = head;
	string str;
	for (; showCourse != NULL; showCourse = showCourse->next)
	{
		str=showCourse->data.getCourseName()+"、"+str;
	}
	return str;
}