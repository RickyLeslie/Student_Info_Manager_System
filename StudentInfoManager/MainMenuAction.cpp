#include "MainMenuAction.h"

MainMenuAction::MainMenuAction(){}

MainMenuAction::~MainMenuAction(){}

void MainMenuAction::showMainMenu()
{
	while (true)
	{
		Util::clear();//����
		View::showMainMenu();//������
		cin >> Util::inputIndex;
		switch (Util::inputIndex)
		{
		case 1:ManagerAction::showManagerMenu(); break;
		case 2:cout << "�˳�ϵͳ�ɹ�" << endl; return ; break;
		default:showMainMenu(); break;
		}
		break;
	}
	
}