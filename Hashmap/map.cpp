//------------------>>In ordered map key values are stored in a sorted manner(alphabetical order) but in unordered_map key values are --------------------stored in an unsorted manner.

//------------------>>Maps are not stored values in memory in continous memory location but in random places so we                   can't use iter+1 or iter+2 but we can use iter++;
#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    // ------------>>How to create a map
    unordered_map<string, int>student;



    // ------------>>How to insert into the map

    //method 1)
    student["shikha"]= 98;
    student["kajal"]= 34;
    // student["priyu"]= 43;
    // student["sukanya"]= 78;
    // student["naman"]= 94;
    // student["raman"];           //store a garbage int in this index
    // student["kajal"]=0;         //map doesn't create a duplicate keybut it replace the previous value

    //method 2)
    // We can declare it like this also 
    // map<string, int>student{{"shikha",93},{"ritik",92},{"pawan",21},{"pranshu",3},{"su",93} };

    //mathod 3)
    pair<string, int> p=make_pair("babbar", 54);
    student.insert(p);

    //method 4)
    pair<string, int> pair2("pagal", 98);
    student.insert(pair2);            



    //----------->>How to acceess
    //method 1)
    // cout<<student.at("paga");             //If this key is not present it give error "Key not Found"
                                             //but if this line is present below the below line then it also give 0
    //method 2)
    // cout<<student["babba"];                  //If this key is not present it does'nt throw error it give value 0
    
    



    //------------->> HOw to check size
    cout<<student.size()<<endl;


    //---------->>To check presence
    // cout<<student.count("pagal");          //give 0 if that key is not present and 1 for presence


    //--------->>How to erase
    // student.erase("babbar");
    // cout<<student.size()<<endl;

    //--------->> How to iterate

    // method 1)
    // map<string, int>::iterator iter;
    // for(iter=student.begin(); iter!=student.end(); iter++){
    //     cout<<(*iter).first<<" "<<(*iter).second<<endl;
    // }


    // method 2)
    // for(auto i:student){
    //     cout<<i.first<<"  "<<i.second;
    //     cout<<endl;
    // }
     
    return 0;
}



//1)              GivenN N strings, print unique strings in lexiographicalorder with their frequency

// #include<iostream>
// #include<map>
// using namespace std; 

// int main(){
//     map<string, int> m;
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s;
//         cin>>s;
//         m[s]++;
//     }
//     map<string, int>::iterator iter;
//     for(iter=m.begin(); iter!=m.end(); iter++){
//         cout<<(*iter).first<<" "<<(*iter).second<<endl;
//     }
// }



