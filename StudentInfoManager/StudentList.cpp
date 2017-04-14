#include "StudentList.h"

StudentList::StudentList() 
{
	head = NULL;
}
StudentList::~StudentList() {}

//1.插入：将某学生的基本信息插入到登记表中；
void StudentList::add(Student stu)
{
	Node<Student>* list = rear;
	Node<Student>* newNode = new Node<Student>(list, stu, NULL);
	rear = newNode;
	if (list == NULL)
	{
		head = newNode;
	}
	else
	{
		list->next = newNode;
	}
}
//2.删除：将满足条件的基本信息删除；
void StudentList::remove(string id)
{
	Node<Student>* removeStu = get(id);
	if (removeStu == NULL)
	{
		cout << "没有该学生信息，返回" << endl;
		return;
	}
	if (removeStu == head)
	{
		head = removeStu->next;
	}
	else
		removeStu->prev->next = removeStu->next;
	delete removeStu;
}
//4.查询：查找满足条件（学号或姓名等字段）的学生；
Node<Student>* StudentList::get(string id)
{
	Node<Student>* target = head;
	for (; target!=NULL; target = target->next)
	{
		if (target->data.getId() == id)
		{
			return target;
		}
		if ((target->data.getId() != id)&&(target->next == NULL))
		{
			return NULL;
		}
	}
}
//5.排序：根据学生信息（例如：学号或电话号码等）进行排序，尽可能提高查找和维护性能；
void StudentList::sort()
{
	Node<Student>* temporary = head;
	Node<Student>* temporary2 = temporary->next;
	Student temp;
	for (; temporary!=NULL; temporary= temporary->next)
	{
		for (temporary2 = temporary->next; temporary2 != NULL; temporary2 = temporary2->next)
		{
			if (temporary->data.getId().compare(temporary2->data.getId())>0)
			{
				temp = temporary->data;
				temporary->data = temporary2->data;
				temporary2->data = temp;
			}
		}
	}
}
//8.输出：将登记表中的所有学生的（或满足条件）信息全部输出，要求格式清晰，方便查看。
void StudentList::printAll()
{
	Node<Student>* showStu = head;
	for (; showStu != NULL; showStu = showStu->next)
	{
		showStu->data.print();
		cout << endl;
	}
}
//模糊查询
void fuzzyQuery()
{

}

int BF(char S[], char T[])
{
	int index = 0;
	int i = 0, j = 0;
	while ((S[i] != NULL) && (T[j] != NULL) && (strlen(S) - i + 1 >= strlen(T) - j + 1))
	{
		if (S[i] == T[j]) {
			i++;
			j++;
		}
		else {
			index++;
			i = index;
			j = 0;
		}
	}
	if (T[j] == NULL) {
		return index + 1;
	}
	else {
		return 0;
	}
}

char* toArray(string s)
{
	char* arr = new char[10];
	//const char *arr = s.c_str();
	for (int i = 0; i < s.length(); ++i)
	{
		arr[i] = s[i];
	}
	arr[s.length()] = '\0';
	return arr;
}