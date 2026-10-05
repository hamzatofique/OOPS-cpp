#include<iostream>
using namespace std;
class Teacher {
    private:
    string dept;
    string section;
    int salary;
    //default constructor is made when we not made our on constructor so compiler made it by itself
    public:
    Teacher(){//non-parametrized constructor
        dept="Computer science";
        section="Bachelors";
        salary=1500000;
        cout<<" Non-parametrized constructor called";
    }
    Teacher(string d,string s,int sal){//non-parametrized constructor
        cout<<"Parametrized constructor is called";
        dept=d;
        salary=sal;
        section=s;
    }
    Teacher(Teacher &orgobj){//non-parametrized constructor
        cout<<"I am copy constructor";
        this->dept=orgobj.dept;
                this->section=orgobj.section;
                        this->salary=orgobj.salary;
    }
    void display(){
        cout<<"Info of teacher is "<<dept<<" "<<section<<" "<<salary<<endl;
    }
};
int main(){
    Teacher t1;
    t1.display();
    Teacher t2("Programming","upper",50000);//compiler uses the constructor according to arguments passed
    t2.display();
    Teacher t3(t1);
    t3.display();


}