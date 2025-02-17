#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
string username, password;
string username1, password1;
char press;
int per = 0;
struct emp
{
    string name, id, address;
    int contact, salary;
};
emp info[100];
int total = 0;
int choice;
void enter_data();
void enter_data()
{

    cout << "\t\tEnter Data" << endl;
    cout << "\t\tHow many employees do you want to add" << endl;
    cin >> choice;
    for (int i = total; i < total + choice; i++)
    {
        cout << "\n\t\tEnter the data of employee " << i + 1 << endl;
        cout << "\t\tEnter employee's Name\t";
        cin >> info[i].name;
        cout << "\t\tEnter employee's ID]t";
        cin >> info[i].id;
        cout << "\t\tEnter employee's Address\t";
        cin >> info[i].address;
        cout << "\t\tEnter employee's Contact\t";
        cin >> info[i].contact;
        cout << "\t\tEnter employee's Salary\t";
        cin >> info[i].salary;
    }
    total += choice;
}
void show_data();
void show_data()
{
    if (total != 0)
    {
        cout << "\t\tEmployee's Data" << endl;
        for (int i = 0; i < total; i++)
        {
            cout << "\t\tData of employee " << i + 1 << endl;
            cout << "\t\tEmployee's Name: " << info[i].name << endl;
            cout << "\t\tEmployee's ID: " << info[i].id << endl;
            cout << "\t\tEmployee's Address: " << info[i].address << endl;
            cout << "\t\tEmployee's Contact: " << info[i].contact << endl;
            cout << "\t\tEmployee's Salary: " << info[i].salary << endl;
        }
    }
    else
    {
        cout << "\t\tYour record is empty" << endl;
    }
}
void search_data();
void search_data()
{
    string id;
    if (total != 0)
    {
        cout << "Search Data" << endl;
        cout << "\t\tEnter the ID of the employee whose data is to be searched\t";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == info[i].id)
            {
                for (int i = 0; i < total; i++)
                {
                    cout << "\t\tData of employee " << i + 1 << endl;
                    cout << "\t\tEmployee's Name: " << info[i].name << endl;
                    cout << "\t\tEmployee's ID: " << info[i].id << endl;
                    cout << "\t\tEmployee's Address: " << info[i].address << endl;
                    cout << "\t\tEmployee's Contact: " << info[i].contact << endl;
                    cout << "\t\tEmployee's Salary: " << info[i].salary << endl;
                    for (int i = total; i < total + choice; i++)
                    {
                        cout << "\n\t\tEnter the data of employee " << i + 1 << endl;
                        cout << "\t\tEnter employee's Name\t";
                        cin >> info[i].name;
                        cout << "\t\tEnter employee's ID]t";
                        cin >> info[i].id;
                        cout << "\t\tEnter employee's Address\t";
                        cin >> info[i].address;
                        cout << "\t\tEnter employee's Contact\t";
                        cin >> info[i].contact;
                        cout << "\t\tEnter employee's Salary\t";
                        cin >> info[i].salary;
                    }

                    break;
                }
            }
            else
            {
                cout << "\t\tNo such record found" << endl;
            }
        }
    }

    else
    {
        cout << "\t\tYour record is empty" << endl;
    }
}
void update_data();
void update_data()
{
    string id;
    if (total != 0)
    {
        cout << "\t\tUpdate Data" << endl;
        cout << "\t\tEnter the ID of the employee whose data is to be updated\t";
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (id == info[i].id)
            {
                for (int i = 0; i < total; i++)
                {
                    cout << "Previous Data" << endl;
                    cout << "\t\tData of employee " << i + 1 << endl;
                    cout << "\t\tEmployee's Name: " << info[i].name << endl;
                    cout << "\t\tEmployee's ID: " << info[i].id << endl;
                    cout << "\t\tEmployee's Address: " << info[i].address << endl;
                    cout << "\t\tEmployee's Contact: " << info[i].contact << endl;
                    cout << "\t\tEmployee's Salary: " << info[i].salary << endl;
                    cout << "\t\tEnter new data" << endl;

                    break;
                }
            }
            else
            {
                cout << "\t\tNo such record found" << endl;
            }
        }
    }

    else
    {
        cout << "\t\tYour record is empty" << endl;
    }
}
void delete_data();
void delete_data()
{
    char choice;
    if (total != 0)
    {

        cout << "\t\tPress 1 to delete full record" << endl;
        cout << "\t\tPress 2 to delete specific record" << endl;
        choice = getch();
        if (choice == '1')
        {
            total = 0;
            cout << "\t\tAll record has been deleted" << endl;
        }
        else if (choice == '2')
        {
            string id;
            cout << "\t\tEnter the id of the employee whose data is to be deleted\t";
            cin >> id;
            for (int i = 0; i < total; i++)
            {
                if (id == info[i].id)
                {
                    for (int j = i; j < total; j++)
                    {

                        info[j].name = info[j + 1].name;
                        info[j].id = info[j + 1].id;
                        info[j].address = info[j + 1].address;
                        info[j].contact = info[j + 1].contact;
                        info[j].salary = info[j + 1].salary;
                        total--;
                        cout << "\t\tYour required record is deleted" << endl;
                        break;
                    }
                }
                else
                {
                    cout << "\t\tNo such record found" << endl;
                }
            }
        }
        else
        {
            cout << "\t\tYour record is empty" << endl;
        }
    }
}
void print_menu();
void print_menu()
{
    Sleep(3000);
    system("CLS");
    cout << "\n\t\tPress 1 to enter data\n";
    cout << "\t\tPress 2 to show data\n";
    cout << "\t\tPress 3 to search data\n";
    cout << "\t\tPress 4 to update data\n";
    cout << "\t\tPress 5 to delete data\n";
    cout << "\t\tPress 6 to logout\n";
    cout << "\t\tPress 7 to exit\n";
}
void sign_up();
void sign_up()
{
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\n\t\t Sign Up" << endl;
    cout << "\n\t\tEnter username";
    cin >> username;
    cout << "\n\t\tEnter password";
    cin >> password;
    cout << "\n\t\tYour ID is creating please wait" << endl;
    cout << "\n\t\t";
    for (int i = 0; i < 10; i++)
    {
        per += 10;
        cout << "." << per << "%";
        Sleep(1000);
    }
    cout << "\n\t\tYour ID created successfully!" << endl;
    Sleep(3000);
}
void login();
void login()
{
start:
    system("CLS");
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\n\t\t LOGIN" << endl;
    cout << "\n\t\tEnter username";
    cin >> username1;
    cout << "\n\t\tEnter password";
    cin >> password1;

    if (username1 == username && password1 == password)
    {
        system("CLS");

        while (true)
        {

            print_menu();
            press = getch();
            switch (press)
            {
            case '1':
                enter_data();
                break;
            case '2':
                show_data();
                break;
            case '3':
                search_data();
                break;
            case '4':
                update_data();
                break;
            case '5':
                delete_data();
                break;
            case '6':
                goto start;
                break;
            case '7':
                exit(0);
            default:
                cout << "\a\t\tInvalid Entry" << endl;
            }
        }
    }
    else if (username1 != username)
    {
        cout << "\t\tYour username is incorrect" << endl;
        Sleep(3000);
        goto start;
    }
    else if (password1 != password)
    {
        cout << "\t\tYour password is incorrect" << endl;
        Sleep(3000);
        goto start;
    }
}
int main()
{

    sign_up();

    login();

    return 0;
}