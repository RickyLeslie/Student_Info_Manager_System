#include"CourseList.h"

CourseList::CourseList() {}
CourseList::~CourseList() {}

//1.���룺��ĳѧ���Ļ�����Ϣ���뵽�ǼǱ��У�
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
//2.ɾ���������������Ļ�����Ϣɾ����
void CourseList::remove(string id)
{
	Node<Course>* removeCourse = get(id);
	if (removeCourse == NULL)
	{
		cout << "û�иÿγ���Ϣ���뷵��" << endl;
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
//4.��ѯ����������������ѧ�Ż��������ֶΣ���ѧ����
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
			cout << "û�и�ѧ����Ϣ������" << endl;
			return NULL;
		}
	}
}
//8.��������ǼǱ��е�����ѧ���ģ���������������Ϣȫ�������Ҫ���ʽ����������鿴��
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
		str=showCourse->data.getCourseName()+"��"+str;
	}
	return str;
}