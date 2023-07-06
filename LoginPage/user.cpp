#include "user.h"

user::user(string name, string pass)
{
	username = name;
	password = pass;
}

string user::getUser()
{
	return username;
}

string user::getPassword()
{
	return password;
}
