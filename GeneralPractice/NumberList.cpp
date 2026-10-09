#include<iostream>
using namespace std;
class NumberList{
    private:
    int* data;//pointer
    int count;
    public:
    NumberList(): data(nullptr),count(0){}
    NumberList(int n,int fillValue):count(n){
        if(n<=0){
            data=nullptr;
        }
        else{
        data=new int[n];
        for(int i=0;i<count;i++){
            data[i]=fillValue;//fill each pointer with value till freq reach
        }
    }
    }
NumberList(NumberList &src){
    this->count=src.count;
            if(src.count<=0){
            data=nullptr;
        }
        else{
        data=new int[src.count];
        for(int i=0;i<count;i++){
            data[i]=src.data[i];//fill each pointer with value till freq reach
        }
    }

}  //operator overloading(assignment)
NumberList &operator=(const NumberList &src){
    if(this == &src) return *this; //self copy,same value as copy
    delete[] data;
     if(src.count<=0){
            data=nullptr;
        }
        else{
        data=new int[src.count];
        for(int i=0;i<count;i++){
            data[i]=src.data[i];//fill each pointer with value till freq reach
        }
    }

}
~NumberList(){
    delete[] data;
}
int size() const{
    return count;

}
void print(){
    for(int i=0;i<count;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
void insertAt(int index,int value){
    if(index<0 || index>count) return;
    for(int i=count;i>index;i--){

        data[i]=data[i-1];
}  
   data[index]=value; 
   count++;//increase size
}
void removeAt(int index){
     if(index<0 || index>count) return;
    for(int i=index;i<count-2;i--){

        data[i]=data[i+1];
}   
   count--;//reduce size

}



};
int main(){
    NumberList a(4,7);
    cout<<"Size is : ";
    cout<<a.size();
    cout<<endl;
    a.print();
    NumberList b(a);
    cout<<"Size of copied array is : ";
   cout<<b.size();
   cout<<endl;
   b.print();
   b.insertAt(0,10);
   b.insertAt(1,20);
   b.insertAt(1,10);
   b.insertAt(2,30);
   b.insertAt(2,50);
   b.insertAt(0,5);
   b.removeAt(2);
   b.print();

}
