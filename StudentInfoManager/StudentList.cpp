#include "StudentList.h"

StudentList::StudentList() 
{
	head = NULL;
}
StudentList::~StudentList() {}

//1.���룺��ĳѧ���Ļ�����Ϣ���뵽�ǼǱ��У�
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
//2.ɾ���������������Ļ�����Ϣɾ����
void StudentList::remove(string id)
{
	Node<Student>* removeStu = get(id);
	if (removeStu == NULL)
	{
		cout << "û�и�ѧ����Ϣ������" << endl;
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
//4.��ѯ����������������ѧ�Ż��������ֶΣ���ѧ����
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
//5.���򣺸���ѧ����Ϣ�����磺ѧ�Ż�绰����ȣ��������򣬾�������߲��Һ�ά�����ܣ�
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
//8.��������ǼǱ��е�����ѧ���ģ���������������Ϣȫ�������Ҫ���ʽ����������鿴��
void StudentList::printAll()
{
	Node<Student>* showStu = head;
	for (; showStu != NULL; showStu = showStu->next)
	{
		showStu->data.print();
		cout << endl;
	}
}
//ģ����ѯ
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