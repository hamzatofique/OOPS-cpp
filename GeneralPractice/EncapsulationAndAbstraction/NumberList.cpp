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
        for(int i=0;i<src.count;i++){
            data[i]=src.data[i];//fill each pointer with value till freq reach
        }
    }
    count=src.count;
    return *this;

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
    int* newdata =new int [count+1];
    for(int i=0;i<index;i++)
    newdata[i]=data[i];
    newdata[index]=value;
    for(int i=index;i<count;i++)
    newdata[i+1]=data[i];
    delete[] data;
    data=newdata;
    count++;

}
bool removeAt(int index){
     if(index<0 || index>count) return false;;
    for(int i=index;i<count-1;i++){

        data[i]=data[i+1];
}   
   count--;//reduce size
   return true;

}
int indexOf(int value)const{
for(int i=0;i<count;i++){
if(data[i]==value){//linear search
return i;//index return
}
}
return -1;//not found

    }
void rotateLeft(int k){
//If k is bigger than the size, it wraps around (k = 7 on 5 elements acts like k = 2).
//If k is negative, it rotates right instead.
//An empty list or a one-element list stays unchanged.
int n=size();
if(size()==1 || data==nullptr || k==size()) return;
if(k>n){
    k=k%n;
}
if(k<0){
    k+=n;
}
int* temp=new int [n];
for(int i=0;i<k;i++){
    temp[i]=data[i];
}
for(int i=k;i<n;i++){
    data[i-k]=data[i];
}
for(int i=0;i<k;i++){
    data[n-k+i]=temp[i];
}
delete[] temp;
}
bool isSorted()const{
    for(int i=0;i<size();i++)
{
    if(data[i]==data[i+1])
    continue;
    else
    return false;
}
return true;
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
// operator= runs, b is reused, not created

}
