#include<iostream>
using namespace std;
class Student{
    public:
    string dept;
    double* cgpaPtr;
    Student(string dept,double cgpa){
        this->dept=dept;
        cgpaPtr = new double;//allocates one float memory
        *cgpaPtr=cgpa;//store our cgpa to the address where pointer points

    }
    Student(Student &obj){
        this->dept=obj.dept;
        this->cgpaPtr=obj.cgpaPtr;//this makes shallow copy and chnage the original value in the pointer 
        // cgpaPtr=new double;//deep copy we allocate new memory for each cgpa that is newly entered so that other doesnot chnage 
        // (*this->cgpaPtr)=*(obj.cgpaPtr);//derefrence to the location and copy the content in it 
    }
    void displayinfo(){
        cout<<"Department is "<<dept<<endl;
         cout<<"cgpa is "<<*cgpaPtr<<endl;//derefernce 
    
    }
~Student(){// destructor are memory cleaner
    delete cgpaPtr;
}
    
};
int main(){
    Student s1("computer science",3.5);
    s1.displayinfo();
    Student s2(s1);
    *(s2.cgpaPtr)=4.0;
     s2.dept="science";
    s2.displayinfo();
    s1.displayinfo();


}