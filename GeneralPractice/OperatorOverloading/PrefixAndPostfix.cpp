#include<iostream>
using namespace std;
class Numbers{
    int n;
    public:
    Numbers():n(0){}
    Numbers(int num):n(num){}
    Numbers( const Numbers &c):n(c.n){}
    //prefix->pass ny reference,modify original
    Numbers& operator++(){
        ++n;
        return *this;
    }
    //postfix->pass ny value
    Numbers operator++(int){//dummy parameter
        Numbers old=*this;
        ++n;
        return old;
    }
    void print()const{
        cout<<"The value is : "<<n<<endl;
    }
};
int main(){
    Numbers n1(5);
    n1.print();
    ++n1;
    n1.print();
    (n1++).print();

}