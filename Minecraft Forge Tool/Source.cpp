#include<stdio.h>
#include <string>
#include<iostream>
using namespace std;
void main()
{
	int myChoice;
	string myChoiceString = "";
	string command = "";
	do{
		//system("cls");
		cout << "Minecraft Forge Tool v1.5.2" << '\n';
		cout << "Made By MJRLegends:" << '\n';
		cout << "" << '\n';
		cout << "1 - Setup Workspace(setupDevWorkspace)" << '\n';
		cout << "2 - Setup Workspace(setupDevcompWorkspace)" << '\n';
		cout << "3 - Setup Workspace(setupCiWorkspace)" << '\n';
		cout << "4 - Setup Eclipse Files" << '\n';
		cout << "5 - Setup IntelliJ IDEA Files" << '\n';
		cout << "6 - Build Project (build)" << '\n';
		cout << "7 - Build Project (tasks)" << '\n';
		cout << "8 - Clean Eclipse Files" << '\n';
		cout << "9 - Clean IntelliJ IDEA Files" << '\n';
		cout << "10 - Clean Build Directory." << '\n';
		cout << "11 - Run Minecraft Client" << '\n';
		cout << "12 - Run Minecraft Server" << '\n';
		cout << "13 - Generate Javadoc API documentation" << '\n';
		cout << "14 - Quit" << '\n';
		Answer:
		cout << "" << '\n';
		cout << "Please enter an option: ";
		cin >> myChoice;

		switch (myChoice){
			case 1:
				system("gradlew.bat setupDevWorkspace");
				break;
			case 2:
				system("gradlew.bat setupDecompWorkspace");
				break;
			case 3:
				system("gradlew.bat setupCiWorkspace");
				break;
			case 4:
				system("gradlew.bat eclipse");
				break;
			case 5:
				system("gradlew.bat idea");
				break;
			case 6:
				system("gradlew.bat build");
				cout << "Go to \build\libs\ to get the jar file" << '\n';
				break;
			case 7:
				cout << "Please enter the name of the task:";
				cin.ignore();
				getline(cin, myChoiceString);
				command = "gradlew.bat " + myChoiceString;
				system(command.c_str());
				cout << "Go to \build\libs\ to get the jar file" << '\n';
				break;
			case 8:
				system("gradlew.bat cleanEclipse");
				break;
			case 9:
				system("gradlew.bat cleanIdea");
				break;
			case 10:
				system("gradlew.bat clean");
				break;
			case 11:
				system("gradlew.bat runClient");
				break;
			case 12:
				system("gradlew.bat runServer");
				break;
			case 13:
				system("gradlew.bat javadoc");
				break;
			case 14:
				break;
			default:
				cout << "You choose is not a valid option" << '\n';
				goto Answer;
				break;
		}
	}while (myChoice != 14);
}