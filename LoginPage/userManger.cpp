#include "userManger.h"
#include <iostream>
#include <vector>
void userManager::registerUser()
{
	string username, password;
	cout << "Enter user Name :"<<"\n";
	cin >> username;
	cout << "Enter password :" <<"\n";
	cin >> password;
	user newuser(username, password);
	users.push_back(newuser);
	cout << "\t \t user added";
}

bool userManager::Login(string username, string password)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].getUser() == username && users[i].getPassword() == password) {
			cout << "Login Successfully";
			return true;
		}
	}
	cout << "invalid user or password";
	return false;
}

void userManager::showUsers()
{
	for (int i = 0; i < users.size(); i++)
	{
		cout << users[i].getUser() << "\n";
	}
}



void userManager::serachUser(string username)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].getUser() == username) {
			cout << "User Found \n";
		}
	}
}

void userManager::deleteUser(string username)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].getUser() == username) {
			users.erase(users.begin() + i);
			cout << "User Deleted \n";
		}
	}
}




	