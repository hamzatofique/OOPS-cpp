#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
int rollno;
};
class GraduateStudent : public Student{
    public:
string studyArea;
};
int main(){
    GraduateStudent g1;
    g1.age=23;
    g1.name="Hamza Toufeeque";
    g1.studyArea="computer Science";
    g1.rollno=529;


}