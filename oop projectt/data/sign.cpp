#include "data_header.h"

using namespace std;

sign_up::sign_up(){

};

void sign_up::saveToFile()
{
    ofstream out(name + ".txt", ios::app);
    if (out.is_open())
    {
        out << "name:" << name << endl;
        out << "phone:" << phone_no << endl;
        out << "username:" << username << endl;
        out << "gmail:" << gmail << endl;
        out << "password:" << password << endl;
        out.close();
        cout << "Sign-up successful! Data saved to file." << endl;
    }
    else
    {
        cout << "Error creating user file!" << endl;
    }
}
void sign_up::getdata()
{
    cout << "=================================" << endl
         << endl;

    bool usernameTaken = false;
    string inputUsername;

    do
    {
    z:
        cout << " ENTER YOUR NAME     = ";
        cin >> name;
        cout << " ENTER YOUR PHONE NO = ";
        cin >> phone_no;
        cout << " ENTER YOUR GMAIL    = ";
        cin >> gmail;
        cout << " ENTER USERNAME      = ";
        cin >> inputUsername;

        ifstream userFile(inputUsername + ".txt");
        if (userFile.is_open())
        {
            cout << "Username already taken. Please choose a different username." << endl;
            usernameTaken = true;
        }
        else
        {
            usernameTaken = false;
            username = inputUsername;
        }

        userFile.close();
    } while (usernameTaken);

    string inputPassword;
    bool passwordTaken = false;

    do
    {
        cout << " ENTER PASSWORD      = ";
        inputPassword = maskedInput();

        ifstream file;
        file.open(username + ".txt");
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                if (line.find("password:") != string::npos)
                {
                    string storedPassword = line.substr(line.find(":") + 1);
                    if (storedPassword == inputPassword)
                    {
                        cout << "Password already taken. Please choose a different password." << endl;
                        passwordTaken = true;
                        break;
                    }
                }
            }
        }

        file.close();
        if (!passwordTaken)
        {
            password = inputPassword;
        }
    } while (passwordTaken);

    cout << "=================================" << endl
         << endl;

    saveToFile();

    int o;
    cout << "\t\t\t\t\t\tARE YOU SURE ? " << endl
         << endl
         << "\t\t\t\t1. create \t\t\t\t2. discard";
    cin >> o;

    if (o == 1)
    {
        system("cls");
        cout << endl
             << endl
             << endl
             << "\t\tCongratulation ! your account is created now you can login!!!!!";
        cout << "press any key to continue.....";
        _getch();
        saveToFile();
    }
    else if (o == 2)
    {
        system("cls");
        cout << endl
             << endl
             << endl
             << "\t\tall the data you entered is discarded , sign up again";
        goto z;
        cout << "press any key to continue.....";

        _getch();
        saveToFile();
    }
}
string sign_up:: maskedInput()
{
    const char RETURN = 13;
        string input;
        char ch = 0;

        while ((ch = _getch()) != RETURN)
        {
            if (ch != '\b')
            {
                cout << '*';
                input += ch;
            }
            else if (input.length() > 0)
            {
                cout << "\b \b";
                input.resize(input.length() - 1);
            }
        }

        cout << endl;
        return input;
}
