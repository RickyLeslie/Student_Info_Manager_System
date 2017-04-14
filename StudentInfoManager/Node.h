#pragma once
#include<iostream>
using namespace std;

/*typedef Student datatype;
typedef class Node* pointer;*/
//typedef class Node* linkedList;
template<typename T>
class Node
{
public:
	Node() {}
	Node(Node* prev, T data, Node* next)
	{
		this->prev = prev;
		this->data = data;
		this->next = next;
	}
	~Node() {}
	T data;
	Node* prev;
	Node* next;
};