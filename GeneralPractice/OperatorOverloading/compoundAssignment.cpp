#include<iostream>
using namespace std;
//complex natural numbers 
class Complex{
    int real;
    int img;
    public:
    Complex():real(0),img(0){}
     Complex(int re,int im):real(re),img(im){}
    Complex& operator+=(const Complex &c){
        real+=c.real;
        img+=c.img;
        return *this;//returns current obj
    }
      Complex& operator-=(const Complex &c){
        real-=c.real;
        img-=c.img;
        return *this;//returns current obj
    }
      Complex& operator*=(const Complex &c){
        int r=real*c.real-img*c.img;
        int i=real*c.real+img*c.img;
        real=r;
        img=i;
        return *this;//returns current obj
    }
    Complex& operator/=(const Complex &c){
        int d=real*c.real-img*c.img;
        int r=(real*c.real+img*c.img)/d;
        int i=(img*c.real-real*c.img);
        real=r;
        img=i;
        return *this;//returns current obj
    }
    void print()const{
        cout<<"("<<real<<","<<img<<")"<<endl;
    }
     friend istream& operator>>(istream& in, Complex &c){
        in>>c.real>>c.img;
        return in;

    }//prototype defined inside for ostream outside the class
    //friend is used only for prototype
    friend ostream& operator<<(ostream& out, Complex &c);
};
ostream& operator<<(ostream& out, Complex &c){
        out<<"the real value: "<<c.real<<" "<<"the imaginary value : "<<c.img<<endl;
        return out;

    }
int main(){
    Complex c1(2,3);
    Complex c2(5,6);
    c1.print();
    c2.print();
    cout<<"The compund add is : ";
    c1+=c2;
    c1.print();
        cout<<"The compund sub is : ";
    c1-=c2;
    c1.print();
        cout<<"The compund mult is : ";
    c1*=c2;
    c1.print();
        cout<<"The compund divide is : ";
    c1/=c2;
    c1.print();
    cin>>c2;
    cout<<c2;

}