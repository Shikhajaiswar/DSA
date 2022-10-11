#include<iostream>
using namespace std;
class base1{
    public:
    void great(){
        cout<<"HEllo";
    }
};
class base2{
    public:
    void great(){
        cout<<"good Morning";
    }
};

class derived: public base1, public base2{
    public:
    void great(){
        base2::great();
    }
};

int main()
{
    base1 obj1;
    base2 obj2;
    derived obj3;
    obj3.great();       //------------->>IT'll create ambiguity(whose fun should run)
    return 0;
}