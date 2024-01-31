#include "data_header.h"

using namespace std;
void login::authentic()
{
    string username, password;
    cout << " ENTER USERNAME: ";
    cin >> username;
    cout << " ENTER PASSWORD: ";
    sign_up S1;
    password = S1.maskedInput();

    ifstream file(username + ".txt");
    if (!file.is_open())
    {
        cout << "user not exist!" << endl;
        exit(0);
    }

    string storedPassword;
    bool found = false;
    string line;
    while (getline(file, line))
    {
        if (line.find("password:") != string::npos)
        {
            storedPassword = line.substr(line.find(":") + 1);
            if (storedPassword == password)
            {
                cout << "Login Successful!" << endl;
                found = true;
                break;
            }
        }
    }

    file.close(); // Close the file associated with the entered username

    if (!found)
    {
        cout << "Incorrect Username or Password!" << endl;
        handlePasswordRecovery(username);
    }
}
void login ::handlePasswordRecovery(const string &username)
{
a:
    string choice;
    cout << "Forgot Password? Enter 'phone' or 'gmail': ";
    cin >> choice;

    string valueToMatch;
    if (choice == "phone")
    {
        cout << "Enter Your Phone No: ";
        cin >> valueToMatch;
    }
    else if (choice == "gmail")
    {
        cout << "Enter Your Gmail: ";
        cin >> valueToMatch;
    }
    else
    {
        cout << "Invalid choice!" << endl;
        return;
    }

    ifstream file(username + ".txt");
    if (!file.is_open())
    {
        cout << "Error opening file!" << endl;
        return;
    }

    string storedValue;
    string foundPassword;
    while (getline(file, storedValue))
    {
        if (storedValue.find(choice + ":") != string::npos)
        {
            foundPassword = storedValue.substr(storedValue.find(":") + 1);
            if (foundPassword == valueToMatch)
            {
                cout << "Your password is: " << storedValue << endl;
                return;
            }
        }
    }

    cout << "No match found!" << endl;
    goto a;
}