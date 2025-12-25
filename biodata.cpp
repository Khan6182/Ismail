#include <iostream>
#include <conio.h>
using namespace std;
class student
{
public:
    int id;
    float gpa;
    string name;
    int age;

    void display()
    {
        cout<< "Name: "<<name<<endl;
        cout<< "Id: "<<id<<endl;
        cout<< "GPA: "<<gpa<<endl;
        cout<< "Age: "<<age<<endl;
        cout<<endl;
    }

};

int main()
{
    student Ismail,Sakib,ziad,sabit;
    int n,m,o,p;
    cout<< "Enter Sakib's age: ";
    cin>>m;
    cout<< "Enter Ziad's age: ";
    cin>>p;
    cout<< "Enter Sabit's age: ";
    cin>>o;
    cout<< "Enter Ismail's age: ";
    cin>>n;

    cout<<endl;
    Ismail.id=25629762;
    Ismail.name="Ismail";
    Ismail.gpa=3.67;
    Ismail.age=n;
    Ismail.display();

    cout<<endl;
    Sakib.id=23689461;
    Sakib.gpa=3.89;
    Sakib.name="Sakib";
    Sakib.age=m;
    Sakib.display();

    cout<<endl;
    sabit.id=24536981;
    sabit.gpa=3.99;
    sabit.name="Sabit";
    sabit.age=o;
    sabit.display();

    cout<<endl;
    ziad.gpa=3.87;
    ziad.name="Ziad";
    ziad.id=23562483;
    ziad.age=p;
    ziad.display();

getch();
}