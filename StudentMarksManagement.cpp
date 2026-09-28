#include<iostream>
#include<cstring>
using namespace std;
class Student{
 private:
    int rollnum;
    char* name;
    int* marks;
    int numsubjects;
 public:
     Student(){//non parametrized constructor
        cout<<"Default constructor";
        rollnum=0;
        name=nullptr;
        marks=nullptr;
        numsubjects=0;
     }
     Student(int r,const char* n,int count ,const int *mar){
        rollnum=r;
        numsubjects=count;
        //allocate marks dynamically
        marks=new int[count];//we allocate to original pointer
        for(int i=0;i<count;i++){
           marks[i]=mar[i];
        }
        //allocate char dynamically
         name=new char[strlen(n)+1];
         strcpy(this->name,n);
     }
     Student( const Student &obj){
        cout<<"Copy constructor"<<endl;
        this->rollnum=obj.rollnum;
        this->numsubjects=obj.numsubjects;
        if(obj.name != nullptr){
            this->name=new char[strlen(obj.name)+1];
            strcpy(this->name,obj.name);
        }
        else{
            this->name=nullptr;
        }
        if(obj.marks != nullptr){
            this->marks=new int[obj.numsubjects];
            for(int i=0;i<obj.numsubjects;i++){
                this->marks[i]=obj.marks[i];
            }
        }
        else{
            this->marks=nullptr;
        }
     }
     ~Student(){
        cout<<"DISTRUCTOR IS USED"<<endl;
        delete[] marks;
        delete[] name;

     }
     //as we keep variables private so we can set then using seperate functions
     void setMark(int index, int value) {
        if (index >= 0 && index < numsubjects)
            marks[index] = value;
    }

    void setName(const char* n) {
        delete[] name;                        // free the old name first
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    void display() {
        cout << rollnum << " " << name << " | Marks:";
        for (int i = 0; i < numsubjects; i++)
            cout << " " << marks[i];
        cout << endl;
    }

};
int main(){
    int m[2]={10,20};
    Student s1(1,"ALI",2,m);
    //copy ctor
    Student s2=s1;
    Student s3(s1);
    s2.setMark(1,50);
    s2.setName("Ali");
    s1.display();
    s2.display();
    s3.display();

}