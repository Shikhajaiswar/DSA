#include<iostream>
#include<string.h>
using namespace std;

class Employee{
   
    string Name;
    string ID;
    string Department;
    int salary;
    string address;
    int Contact_no;
    int Email_ID;
    string position;
    int Experience_in_year;
    public:
    void set_value(string Name, string ID, string Department, int salary, string address, int contact_no, int Email_id, string position, int Experience);
    void display();
    
};

void Employee::set_value(string Name, string ID, string Department, int salary, string address, int contact_no, int Email_id, string position, int Experience){
    
    this->Name=Name;
    this->ID=ID;
    this->Department=Department;
    this->salary=salary;
    this->address=address;
    this->Contact_no=contact_no;
    this->Email_ID=Email_ID;
    this->position=position;
    this->Experience_in_year=Experience;

}


void Employee::display(){
    cout<<"The Employee Name is : "<<Name<<endl;
    cout<<"The Employee ID is : "<<ID<<endl;
    cout<<"The Employee Department is : "<<Department<<endl;
    cout<<"The Employee salary is : "<<salary<<endl;
    cout<<"The Employee address is : "<<address<<endl ;
    cout<<"The Employee Contact_no is : "<<Contact_no<<endl;
    cout<<"The Employee Email_ID is : "<<Email_ID<<endl;
    cout<<"The Employee position is : "<<position<<endl;
    cout<<"The Employee Experience_in_year is : "<<Experience_in_year<<endl;

}

int main()
{
    Employee Employee_1;
    // cout<<"Ent
    Employee_1.set_value("Rahul", "12","HR", 1500, "dwarka", 45738475, 234, "Engineer", 4);

    Employee_1.display();
    return 0;
}