#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of Rows";
    cin>>m;
    cout<<"Enter the number of colomuns";
    cin>>n;
    int **arr=new int* [m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    //inputing
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=i*j;
        }
    }
    //printing
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    //deleting memory
    for(int i=0;i<m;i++){
        delete[]arr[i];
    }
    delete[] arr;
    return 0;


}