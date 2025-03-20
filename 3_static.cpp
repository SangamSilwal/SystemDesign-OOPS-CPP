#include <iostream>
using namespace std;

class stMember {
    public:
    int val;
    stMember(int v = 10): val(v){
        cout<< "Static Object Created" << endl;
    }
};

class A {
    public:
    static stMember s;
    A(){
        cout << "A's Constructor is called" << endl;
    }
};

//initializing the static member variable
//we need to initialize the static memeber variable before main
//Note : while initializing the static member variable we need to use a scope resolution operator
// syntax : dataType classname::varaible_name = assigned_value




stMember A::s = stMember(11);

int main()
{
    cout << A::s.val<<endl;
    A obj1;
    A obj2;
    cout << obj1.s.val<<endl;
    cout << obj2.s.val << endl;
    return 0;
}