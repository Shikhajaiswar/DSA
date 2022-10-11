#include<iostream>
using namespace std;

class employee{ 
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
    class employee emp[30]; 
    FILE * fp; 
    fp = fopen ("employee.dat", "w"); 

    if (fp== NULL) 
    { 
        cout<<"Error opened file"; 
        exit (1); 
    } 

    emp[0]= {"Shikha", "100", "Human Resource",1000,"Mumbai",12347689,"shikha12@xyz.com","sales manager",3}; 
    emp[1]= {"Priyanshu", "101", "Human Resource",1200,"Bihar",12343446,"priyanshu43@xyz.com","HR",4}; 
    emp[2]= {"Kajal", "102", "Technical",8000,"Bandra",12347489,"kajal778@xyz.com","Developer",3}; 
    emp[3]= {"Supriya", "103", "Technical",9000,"Delhi",12343467,"Supriya@xyz.com","Designer",4}; 
    emp[4]= {"Shivani", "104", "Technical",2400,"Bengal",12346783,"Shivani@xyz.com","Debugger",1};
    emp[5]= {"Rahul", "105", "Management",2400,"Kerala",12346783,"rahul@xyz.com","Manager",1};  
    fwrite (&emp, sizeof(class employee), 6, fp); 
    fclose(fp);

    FILE *p;
    class employee inp[30];
    p = fopen ("employee.dat", "r");
    if (p == NULL) {
       cout<<"Error to open the file";
       exit (1);
    }

    while(fread(&inp, sizeof(class employee), 1, p)){
      cout<<"name ="<<inp[0].name<<" id: "<< inp[0].id<<endl;

    }  
    fclose (p);




    cout<<endl;
    //------------->>Operations on the following data

    // a. Search for 4th person ( by ID) and print name of the employee
    FILE *p1;
    class employee sar[30];
    p1 = fopen ("employee.dat", "r");
    if (p1 == NULL) {
       cout<<"Error to open the file";
       exit (1);
    }

    while(fread(&sar,sizeof(class employee), 1, p1)){
      cout<<"The id of the 4th person :  "<<sar[3].id<<", Name is : "<<sar[3].name<<endl;

    }  
    fclose (p1);
    
    


// cout<<"eefhe";
    cout<<endl;
    // b. Print data for the first employee
    // cout<<"name ="<<inp[0].name<<", id: "<< inp[0].id<<", Department is : "<<inp[0].department<<", Salary is : "<<inp[0].salary<<", address : "<<inp[0].address<<", contact is : "<<inp[0].contact<<", email is : "<<inp[0].email<<", position is : "<<inp[0].postition<<", experience is : "<<inp[0].exp<<endl;



    // cout<<endl;
    // // c. Print data for the last employee
    // cout<<"name ="<<inp[4].name<<" id: "<< inp[4].id<<" Department is : "<<inp[4].department<<" Salary is : "<<inp[4].salary<<" address : "<<inp[4].address<<" contact is : "<<inp[4].contact<<" email is : "<<inp[4].email<<" position is : "<<inp[4].postition<<" experience is : "<<inp[4].exp<<endl;



    cout<<endl;
    // d. Delete data for the employee at last position

    // FILE *p1;
    // class employee inp[40];
    // p1 = fopen ("employee.dat", "r");
    // if (p1 == NULL) {
    //    cout<<"Error to open the file";
    //    exit (1);
    // }

    // // while(fread(&inp, sizeof(class employee), 1, p1))
    // //   cout<<"name ="<<inp[0].name<<" id: "<< inp[0].id<<endl;
    // // fclose (p1);
    

    // while(fread(&inp, sizeof(class employee), 1, p1)){

    // }
    return 0;
}