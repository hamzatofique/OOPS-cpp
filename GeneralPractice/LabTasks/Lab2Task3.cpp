#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter N:";
 cin>>n;
 int* arr=new int [n];
 cout<<"Enter "<<n<<"values";
 //inputing gthe values
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 cout<<endl;
 int uniquecount=0;
 for(int i=0;i<n;i++){
    bool isduplicate=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
        isduplicate=true;
        break;
    }
    if(!isduplicate){
        uniquecount++;
    }
    }
 }
 int* result=new int[uniquecount];
 int pos=0;
 for(int i=0;i<n;i++){
    bool isduplicate=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
        isduplicate=true;
        break;
    }
    if(!isduplicate){
        result[pos++]=arr[i];
    }
  }
 }
 for(int i=0;i<uniquecount;i++){
    cout<<result[i];
 }
 delete[] arr;
 delete[] result;
 return 0;

}