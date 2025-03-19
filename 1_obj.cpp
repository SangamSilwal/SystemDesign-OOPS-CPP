#include <iostream>
#include <string>

using namespace std;

class Person{
    public:
    string name;
    int age;

    void introduce()
    {
        cout << "Hi my name is "<<name << " and I am " << age << " years old" << endl;
    }
};



int main()
{
    Person p1;
    p1.name = "Sangam";
    p1.age = 19;

    p1.introduce();
    return 0;
}

