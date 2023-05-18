#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    void insert(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << id << " " << name << endl;
    }
};

int main(void)
{
    Student s1; // creating an object of Stu dent
    Student s2; // creating an object of Stu dent
    s1.insert(201, "Sonoo");
    s2.insert(202, "Nakul");
    s1.display();
    s2.display();
    return 0;
}