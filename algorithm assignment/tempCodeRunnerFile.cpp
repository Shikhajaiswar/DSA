#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    string Passanger_Name;
    int Passanger_id;
    Node *next;
};

int length=0;
class Flights
{
    Node *first = nullptr, *second = nullptr, *third = nullptr;
public:
    void Book_reservation(string name_of_passanger, int Passanger_id);
    void cancel_booking(string name_of_passanger, int Passanger_id);
    void names_of_passanger();
    int numberOfPAssanger();
    int lengthOfLinkedlist();
};

int Flights::lengthOfLinkedlist(){
    int count = 0;
    Node *p = first;
    while (p != nullptr)
    {
        count++;
        p = p->next;
    }
    return count; 
}


void Flights::Book_reservation(string name_of_passanger, int Passanger_id)
{
    Node *last, *t;
    first = new Node;
    t->Passanger_Name= name_of_passanger;
    t->Passanger_id = Passanger_id;
    t->next=nullptr;
    last = first;
    t=first;
    length++;
    
    if(length>0){
        t = new Node;
    t->Passanger_Name= name_of_passanger;
    t->Passanger_id = Passanger_id;
    t->next=nullptr;
        last->next = t;
        last = t; 
    }
        
}

void Flights::cancel_booking(string name_of_passanger, int Passanger_id)
{
    Node *p, *q = nullptr;
    // int x = lengthOfLinkedlist();
    
    if (length== 0)
    {
        p = first;
        delete p;
    }
    else
    {
        p = first;
        for (int i = 0; i < length; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        // x = p->data;
        delete p;
    }
    
    length--;
}

void Flights::names_of_passanger(){
    Node *p = first;
    cout<<"sdfsdfsd";
    while (p)
    { // This means jabtak p null nhi hota(p mai 0 assing nhi hota)
        cout<<"dfsdsdfsd";
        cout << p->Passanger_Name <<"   ";
        cout << p->Passanger_id ;
        p = p->next;
    }
    cout << endl;
}

int Flights::numberOfPAssanger(){
    Node *p = first;
    int count=0;
    while (p){
        count++;
    }
    return count;
}



int main()
{
    Flights fligth_1;
    Flights fligth_2;
    Flights fligth_3;
    Flights fligth_4;

    // cout << endl;
    cout << "Enter 1 for Booking a reservation" << endl;
    cout << "Enter 2 for Cancelling a reservation." << endl;
    cout << "Enter 3 for printing names of passengers" << endl;
    cout << "Enter 4 for Print number of passengers" << endl;
    int a;
    cin >> a;

    string passangerNAme;
    int PassangerID;

    switch (a)
    {
        case 1:

            cout<<"Enter 1 to perform operation on flight 1"<<endl;
            cout<<"Enter 2 to perform operation on flight 2"<<endl;
            cout<<"Enter 3 to perform operation on flight 3"<<endl;
            cout<<"Enter 4 to perform operation on flight 4"<<endl;
            int num;
            cin>>num;
            switch(num){
                case 1:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_1.Book_reservation(passangerNAme,PassangerID) ;
                    break;

                case 2:  
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_2.Book_reservation(passangerNAme,PassangerID) ; 
                    break;

                case 3:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_3.Book_reservation(passangerNAme,PassangerID) ; 
                    break;

                case 4:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_4.Book_reservation(passangerNAme,PassangerID) ;   
                    break;

                default:
                break;         
            }

        break;

        case 2:

            cout<<"Enter 1 to perform operation on flight 1"<<endl;
            cout<<"Enter 2 to perform operation on flight 2"<<endl;
            cout<<"Enter 3 to perform operation on flight 3"<<endl;
            cout<<"Enter 4 to perform operation on flight 4"<<endl;
            int num_2;
            cin>>num_2;
            switch (num_2)
            {
                case 1:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_1.cancel_booking(passangerNAme,PassangerID) ;
                    break;

                case 2:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_2.cancel_booking(passangerNAme,PassangerID) ;
                    break;

                case 3:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_3.cancel_booking(passangerNAme,PassangerID) ;
                    break;

                case 4:
                    cout<<"Enter Passanger name : "; 
                    cin>>passangerNAme;
                    cout<<"Enter Passanger ID : ";
                    cin>>PassangerID;
                    fligth_4.cancel_booking(passangerNAme,PassangerID) ;
                    break;

                default:
                    break;           
            
            }
        break;    
        
        case 3:

            cout<<"Enter 1 to perform operation on flight 1"<<endl;
            cout<<"Enter 2 to perform operation on flight 2"<<endl;
            cout<<"Enter 3 to perform operation on flight 3"<<endl;
            cout<<"Enter 4 to perform operation on flight 4"<<endl;
            int num_3;
            cin>>num_3;
            switch(num_3){
                case 1:
                    fligth_1.names_of_passanger();
                    break;

                case 2:
                    fligth_2.names_of_passanger();
                    break;

                case 3:
                    fligth_3.names_of_passanger();
                    break;

                case 4:
                    fligth_4.names_of_passanger();
                    break; 
                default:
                    break;      

            }
        break;    

        case 4:
            cout<<"Enter 1 to perform operation on flight 1"<<endl;
            cout<<"Enter 2 to perform operation on flight 2"<<endl;
            cout<<"Enter 3 to perform operation on flight 3"<<endl;
            cout<<"Enter 4 to perform operation on flight 4"<<endl;
            int num_4;
            cin>>num_4;
            switch(num_3){
                case 1:
                    cout<<fligth_1.numberOfPAssanger()<<endl;
                    break;

                case 2:
                    cout<<fligth_2.numberOfPAssanger()<<endl;
                    break;

                case 3:
                    cout<<fligth_3.numberOfPAssanger()<<endl;
                    break;

                case 4:
                    cout<<fligth_4.numberOfPAssanger()<<endl;
                    break; 
                default:
                    break;      

            }
        break;    

        default:
        break;
    }

    

    return 0;
}