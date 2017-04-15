#include<iostream>
#include"MainMenuAction.h"
#include"DataBase.h"
#include"Util.h"
using namespace std;

void main()
{
	Util::init();
	//DataBase::studentList->head->data.print();
	MainMenuAction::showMainMenu();
	system("pause");
}