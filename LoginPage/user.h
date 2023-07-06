#pragma once
#include <string>
#include <string>
using namespace std;
class user
{
private:
	string username,password;
public:
	user(string name,string pass);
	string getUser();
	string getPassword();
};

