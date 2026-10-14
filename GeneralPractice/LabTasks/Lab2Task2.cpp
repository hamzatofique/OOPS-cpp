#include<iostream>
using namespace std;
int main(){
    int capacity=5;
    int count=0;
    int* arr=new int [capacity];
    cout<<"Enter numbers one by one (-1 to stop)";
    while(true){
        int num;
        cin>>num;
        cout<<num<<" ";
        if(num==-1) break;
        if(count==capacity){//if array becomes full
            int biggercapacity=capacity*2; //new size of array
            int* bigger =new int [biggercapacity];//new alocation of memory
            //copying the elements of old array into new array
            for(int i=0;i<count;i++){
                bigger[i]=arr[i];// copying the values of old array to new array               delete[] arr; //delete the old array
                //old array now points to new array
            }
            delete [] arr;//deletes arr so that it points to new address that is bigger one
            arr=bigger;
        }
        arr[count]=num;
        count++;

    }
    //final array
    cout<<endl;
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;


}