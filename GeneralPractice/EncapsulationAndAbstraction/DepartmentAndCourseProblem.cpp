#include<iostream>
using namespace std;
int main(){
    int dept=0;//initialized to ignore garbage value
    cout<<"Enter number of departments:";
    cin>>dept;
    int** arr=new int*[dept];
    int* courseCount=new int[dept];

    //allocating memory for user input departments
    for(int i=0;i<dept;i++){
        cout<<"Enter course count"<<i+1<<":";
        cin>>courseCount[i];
        arr[i]=new int [courseCount[i]];
        for(int j=0;j<courseCount[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<dept;i++){
        for(int j=0;j<courseCount[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
for(int i=0;i<dept;i++){
    delete[] arr[i];
}
delete[]arr;
delete[]courseCount;
return 0;
}