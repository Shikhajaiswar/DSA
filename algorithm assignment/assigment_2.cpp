#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    string Passanger_Name;
    Node *next;
};

class Flights
{
    Node *head = nullptr;

public:
    void Book_reservation(string name_of_passanger);
    void cancel_booking(string name_of_passanger);
    void names_of_passanger();
    int numberOfPAssanger();
    int lengthOfLinkedlist();
};

void Flights::Book_reservation(string name_of_passanger)
{    
    Node* temp; 
    Node* tail;
    if(head==nullptr){
        // cout<<"new\n";
        head = new Node;
        head->Passanger_Name = name_of_passanger;
        head->next = nullptr;
        tail = head;
    }

    else{
        // cout<<"\nnext";
        temp = new Node;
        temp->Passanger_Name = name_of_passanger;
        temp->next = nullptr;
        tail->next = temp;
        tail = temp;
    }
}

void Flights::cancel_booking(string name_of_passanger)
{
    cout<<"hee";
}

void Flights::names_of_passanger(){
    // cout<<"\nhi shikha";
    Node *p = head;
    // cout<<"\nhi shikha";
    if(p==nullptr){
        // cout<<"\nhellj djfns";
    }
    while(p!=nullptr){
        cout<<p->Passanger_Name<<"->";
        // cout<<"\nhi shikha";
        p = p->next;
    }
}

int Flights::numberOfPAssanger(){
    int k=0;
    Node *p = head;
    while(p!=nullptr){
        k++;
        p = p->next;
    }
    return k;
}



int main()
{
    Flights fligth_1;
    Flights fligth_2;
    Flights fligth_3;
    Flights fligth_4;

    fligth_1.Book_reservation("shikha");
    fligth_1.Book_reservation("shikha_2");
    fligth_1.Book_reservation("shikha_3");
    fligth_1.Book_reservation("shikha_4");

    fligth_1.names_of_passanger();

    // // cout << endl;
    // cout << "Enter 1 for Booking a reservation" << endl;
    // cout << "Enter 2 for Cancelling a reservation." << endl;
    // cout << "Enter 3 for printing names of passengers" << endl;
    // cout << "Enter 4 for Print number of passengers" << endl;
    // int a;
    // cin >> a;

    // string passangerNAme;
    // int PassangerID;

    // switch (a)
    // {
    //     case 1:

    //         cout<<"Enter 1 to perform operation on flight 1"<<endl;
    //         cout<<"Enter 2 to perform operation on flight 2"<<endl;
    //         cout<<"Enter 3 to perform operation on flight 3"<<endl;
    //         cout<<"Enter 4 to perform operation on flight 4"<<endl;
    //         int num;
    //         cin>>num;
    //         switch(num){
    //             case 1:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_1.Book_reservation(passangerNAme) ;
    //                 break;

    //             case 2:  
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_2.Book_reservation(passangerNAme) ; 
    //                 break;

    //             case 3:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_3.Book_reservation(passangerNAme) ; 
    //                 break;

    //             case 4:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_4.Book_reservation(passangerNAme) ;   
    //                 break;

    //             default:
    //             break;         
    //         }

    //     break;

    //     case 2:

    //         cout<<"Enter 1 to perform operation on flight 1"<<endl;
    //         cout<<"Enter 2 to perform operation on flight 2"<<endl;
    //         cout<<"Enter 3 to perform operation on flight 3"<<endl;
    //         cout<<"Enter 4 to perform operation on flight 4"<<endl;
    //         int num_2;
    //         cin>>num_2;
    //         switch (num_2)
    //         {
    //             case 1:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_1.cancel_booking(passangerNAme) ;
    //                 break;

    //             case 2:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_2.cancel_booking(passangerNAme) ;
    //                 break;

    //             case 3:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_3.cancel_booking(passangerNAme) ;
    //                 break;

    //             case 4:
    //                 cout<<"Enter Passanger name : "; 
    //                 cin>>passangerNAme;
    //                 fligth_4.cancel_booking(passangerNAme) ;
    //                 break;

    //             default:
    //                 break;           
            
    //         }
    //     break;    
        
    //     case 3:

    //         cout<<"Enter 1 to perform operation on flight 1"<<endl;
    //         cout<<"Enter 2 to perform operation on flight 2"<<endl;
    //         cout<<"Enter 3 to perform operation on flight 3"<<endl;
    //         cout<<"Enter 4 to perform operation on flight 4"<<endl;
    //         int num_3;
    //         cin>>num_3;
    //         switch(num_3){
    //             case 1:
    //                 cout<<"sjbdf";
    //                 fligth_1.names_of_passanger();
    //                 break;

    //             case 2:
    //                 fligth_2.names_of_passanger();
    //                 break;

    //             case 3:
    //                 fligth_3.names_of_passanger();
    //                 break;

    //             case 4:
    //                 fligth_4.names_of_passanger();
    //                 break; 
    //             default:
    //                 break;      

    //         }
    //     break;    

    //     case 4:
    //         cout<<"Enter 1 to perform operation on flight 1"<<endl;
    //         cout<<"Enter 2 to perform operation on flight 2"<<endl;
    //         cout<<"Enter 3 to perform operation on flight 3"<<endl;
    //         cout<<"Enter 4 to perform operation on flight 4"<<endl;
    //         int num_4;
    //         cin>>num_4;
    //         switch(num_3){
    //             case 1:
    //                 cout<<fligth_1.numberOfPAssanger()<<endl;
    //                 break;

    //             case 2:
    //                 cout<<fligth_2.numberOfPAssanger()<<endl;
    //                 break;

    //             case 3:
    //                 cout<<fligth_3.numberOfPAssanger()<<endl;
    //                 break;

    //             case 4:
    //                 cout<<fligth_4.numberOfPAssanger()<<endl;
    //                 break; 
    //             default:
    //                 break;      

    //         }
    //     break;    

    //     default:
    //     break;
    // }

    

    return 0;
}