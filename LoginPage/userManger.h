#pragma once
#include <string>
#include "user.h"
#include <vector>
using namespace std;
class userManager 
{
private:
    vector<user> users;
public:
    void registerUser();
    bool Login(string username,string password);
    void showUsers();
    void serachUser(string username);
    void deleteUser(string username);
};
