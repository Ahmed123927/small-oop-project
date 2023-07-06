#include <iostream>
#include <string>
#include <vector> 
#include "userManger.h"
using namespace std;
int main()
{
	userManager usermange;
	string c;
		int choise;

	do {
		cout << "\n\n\t\t 1-Register User " << endl;
		cout << "\t\t 2-Login" << endl;
		cout << "\t\t 3-Users List" << endl;
		cout << "\t\t 4-Search User" << endl;
		cout << "\t\t 5-Delete User" << endl;
		cout << "\t\t 6-Exit" << endl;

		cin >> choise;
		switch (choise)
		{
		case 1: {
			usermange.registerUser();
			break;
		}
		case 2:
		{
			string username, password;
			cout << "Enter user Name :" << "\n";
			cin >> username;
			cout << "Enter password :" << "\n";
			cin >> password;
			usermange.Login(username, password);
			break;
		}
		case 3:
		{
			usermange.showUsers();
			break;
		}
		case 4:
		{
			string name;
			cout << "Enter user Name :" << "\n";
			cin >> name;
			usermange.serachUser(name);
			break;
		}
		case 5:
		{
			string name;
			cout << "Enter user Name :" << "\n";
			cin >> name;
			usermange.deleteUser(name);
			break;
		}
		case 6:
			exit(1);

		default:
			break;
		}

		cout << "\n Do you want continue[y/n] ?";
		cin >> c;
	} while (c == "y");
	
}