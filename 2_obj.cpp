//There are 2 ways to define a member function:
// 1> inside class defination
// 2> outside class defination

#include <bits/stdc++.h>
using namespace std;

class Geeks{
    public:
    string geekname;
    int id;

    void printname();

    void printid()
    {
        cout << "Geek id is "<<id;
    }
};



//This is called scope resolution::operator
void Geeks::printname()
{
    cout << "Geeks name is " << geekname;
}


int main()
{
    Geeks g1;
    g1.geekname = "Sangam";
    g1.id = 53;
    g1.printname();
    g1.printid();
}