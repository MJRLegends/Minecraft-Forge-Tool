#include<stdio.h>
#include<iostream>
using namespace std;
void main()
{
	int myChoice;
	Menu:
	do{
		//system("cls");
		cout << "Minecraft Forge Tool Made By MJR:" << '\n';
		cout << "1 - Setup Workspace(setupDevWorkspace)" << '\n';
		cout << "2 - Setup Workspace(setupDevcompWorkspace)" << '\n';
		cout << "3 - Setup eclipse" << '\n';
		cout << "4 - Build to jar" << '\n';
		cout << "5 - Quit" << '\n';
		Answer:
		cout << "Please enter an option: ";
		cin >> myChoice;

		myChoice = toupper(myChoice);

		switch (myChoice){
			case 1:
				system("gradlew.bat setupDevWorkspace");
				break;
			case 2:
				system("gradlew.bat setupDecompWorkspace");
				break;
			case 3:
				system("gradlew.bat eclipse");
				break;
			case 4:
				system("gradlew.bat build");
				cout << "Go to \build\libs\ to get the jar file" << '\n';
				break;
			case 5:
				break;
			default:
				cout << "You choose is not a valid option" << '\n';
				goto Answer;
				break;
		}
	}while (myChoice != 5);
}