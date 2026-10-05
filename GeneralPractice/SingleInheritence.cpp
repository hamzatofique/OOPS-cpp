//when properties and member functions of base class are passed on to the 
//derived class
//classA(parent,base)->classB(child,derived)
#include<iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;
    Person(int age,string name){//parent class
        this->name=name;
        this->age=age;

    }  
};
class Student: public Person{ //child class
    public:
    int rollno;
    Student(string name,int age,int rollno) :Person(age,name){//explicitly calling parent class constructor
        this->rollno=rollno;
    }
    void print(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<rollno<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    Student s1("hamza toufeeque",20,29);//making object of derived class
    s1.print();
    //implicit call Person(20,"Hamza Toufeeque") and remove call in parametrized ctor in child class

}