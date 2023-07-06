<h1>User Manager</h1>
	<p>This program allows you to manage a list of users.</p>

<h2>Usage</h2>
	<ol>
		<li>Compile the program using a C++ compiler.</li>
		<li>Run the executable.</li>
		<li>Select an option from the menu:</li>
		<ul>
			<li><strong>Register User:</strong> Allows you to add a new user to the list.</li>
			<li><strong>Login:</strong> Allows you to log in as an existing user.</li>
			<li><strong>Users List:</strong> Displays a list of all the users in the system.</li>
			<li><strong>Search User:</strong> Searches for a user by name.</li>
			<li><strong>Delete User:</strong> Deletes a user from the system.</li>
			<li><strong>Exit:</strong> Exits the program.</li>
		</ul>
		<li>Follow the prompts to complete the selected action.</li>
		<li>When prompted, indicate whether you want to continue or exit the program.</li>
	</ol>

<h2>Code:</h2>
	<p>Here is the main code for the program:</p>
	<pre>
#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;vector&gt; 
#include "userManger.h"
using namespace std;

int main()
{
    userManager usermange;
    string c;
    int choice;

   do {
        cout &lt;&lt; "\n\n\t\t 1-Register User " &lt;&lt; endl;
        cout &lt;&lt; "\t\t 2-Login" &lt;&lt; endl;
        cout &lt;&lt; "\t\t 3-Users List" &lt;&lt; endl;
        cout &lt;&lt; "\t\t 4-Search User" &lt;&lt; endl;
        cout &lt;&lt; "\t\t 5-Delete User" &lt;&lt; endl;
        cout &lt;&lt; "\t\t 6-Exit" &lt;&lt; endl;
      cin &gt;&gt; choice;
        switch (choice)
        {
        case 1: {
            usermange.registerUser();
            break;
        }
        case 2:
        {
            string username, password;
            cout &lt;&lt; "Enter user Name :" &lt;&lt; "\n";
            cin &gt;&gt; username;
            cout &lt;&lt; "Enter password :" &lt;&lt; "\n";
            cin &gt;&gt; password;
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
            cout &lt;&lt; "Enter user Name :" &lt;&lt; "\n";
            cin &gt;&gt; name;
            usermange.serachUser(name);
            break;
        }
        case 5:
        {
            string name;
            cout &lt;&lt; "Enter user Name :" &lt;&lt; "\n";
            cin &gt;&gt; name;
            usermange.deleteUser(name);
            break;
        }
        case 6:
            exit(1);

  default:
            break;
        }

   cout &lt;&lt; "\n Do you want continue[y/n] ?";
        cin &gt;&gt; c;
    } while (c == "y");

  return 0;
}
	</pre>
