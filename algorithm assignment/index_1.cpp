#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    string id;
    string department;
    int salary;
    string address;
    int contact;
    string email;
    string postition;
    int exp;
};

int main()
{
    class employee emp[6];
    FILE *fp;
    fp = fopen("employee.dat", "w");

    if (fp == NULL)
    {
        cout << "Error opened file";
        exit(1);
    }
    else
    {
        emp[0] = {"Shikha", "100", "Human Resource", 1000, "Mumbai", 12347689, "shikha12@xyz.com", "sales manager", 3};
        emp[1] = {"Priyanshu", "101", "Human Resource", 1200, "Bihar", 12343446, "priyanshu43@xyz.com", "HR", 4};
        emp[2] = {"Kajal", "102", "Technical", 8000, "Bandra", 12347489, "kajal778@xyz.com", "Developer", 3};
        emp[3] = {"Supriya", "103", "Technical", 9000, "Delhi", 12343467, "Supriya@xyz.com", "Designer", 4};
        emp[4] = {"Shivani", "104", "Technical", 2400, "Bengal", 12346783, "Shivani@xyz.com", "Debugger", 1};
        emp[5] = {"Rahul", "105", "Management", 2400, "Kerala", 12346783, "rahul@xyz.com", "Manager", 1};

        fwrite(&emp, sizeof(class employee), 6, fp);
        fclose(fp);
    }

    FILE *p;
    class employee inp[6];
    p = fopen("employee.dat", "r");
    if (p == NULL)
    {
        cout << "Error to open the file";
        exit(1);
    }

    while (fread(&inp, sizeof(class employee), 1, p))
    {
        cout << "name =" << inp[0].name << " id: " << inp[0].id << endl;
    }
    fclose(p);

    cout << endl;
    // ------------->>Operations on the following data

    cout << "Enter 1: Search for 4th person ( by ID) and print name of the employee" << endl;
    cout << "Enter 2: Print data for the first employee" << endl;
    cout << "Enter 3 : Print data for the last employee" << endl;
    cout << "Enter 4 : Delete data for the employee at last position" << endl;
    cout << "Enter 5 : Delete data for the employee at first position" << endl;
    cout << "Enter 6 : Delete data for the employee at third position" << endl;
    cout << "Enter 7 : Insert data for a new employee at last position" << endl;
    cout << "Enter 8 : Insert data for a new employee at first position" << endl;
    cout << "Enter 9 : Insert data for a new employee at second position" << endl;

    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "name =" << emp[3].name << " id: " << emp[3].id << endl;

        break;

    case 2:
        cout << "name =" << emp[0].name << " id: " << emp[0].id << " Department is : " << emp[0].department << " Salary is : " << emp[0].salary << " address : " << emp[0].address << " contact is : " << emp[0].contact << " email is : " << emp[0].email << " position is : " << emp[0].postition << " experience is : " << emp[0].exp << endl;

        break;

    case 3:
        cout << "name =" << emp[4].name << " id: " << emp[4].id << " Department is : " << emp[4].department << " Salary is : " << emp[4].salary << " address : " << emp[4].address << " contact is : " << emp[4].contact << " email is : " << emp[4].email << " position is : " << emp[4].postition << " experience is : " << emp[4].exp << endl;

        break;

    case 4:
        
        break;

    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:

        break;
    case 9:

        break;

    default:
        break;
    }

    return 0;
}