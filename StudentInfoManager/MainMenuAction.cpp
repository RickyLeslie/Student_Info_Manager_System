#include "MainMenuAction.h"

MainMenuAction::MainMenuAction(){}

MainMenuAction::~MainMenuAction(){}

void MainMenuAction::showMainMenu()
{
	while (true)
	{
		Util::clear();//清屏
		View::showMainMenu();//主界面
		cin >> Util::inputIndex;
		switch (Util::inputIndex)
		{
		case 1:ManagerAction::showManagerMenu(); break;
		case 2:cout << "退出系统成功" << endl; return ; break;
		default:showMainMenu(); break;
		}
		break;
	}
	
}