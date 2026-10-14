#include<iostream>
using namespace std;
int main(){
    //merging two arrays
    int sizeA, sizeB,totalsize;
    cout<<"Enter the size of array A: ";
    cin>>sizeA;
    int*arrA = new int[sizeA];
    for(int i=0;i<sizeA;i++){
        cout<<"Enter element "<<i+1<<" of array A: ";
        cin>>arrA[i];
    }
    cout<<"Enter the size of array B: ";
    cin>>sizeB;
    int*arrB = new int[sizeB];
    for(int i=0;i<sizeB;i++){
        cout<<"Enter element "<<i+1<<" of array B: ";
        cin>>arrB[i];
    }
    totalsize = sizeA + sizeB;
    int*arrC = new int[totalsize];
    for(int i=0;i<sizeA;i++){
        arrC[i] = arrA[i];
    }
    for(int i=0;i<sizeB;i++){
        arrC[sizeA+i] = arrB[i];
    }
    cout<<"Merged array C: ";
    for(int i=0;i<totalsize;i++){
        cout<<arrC[i]<<" ";
    }
    delete[] arrA;
    delete[] arrB;
    delete[] arrC;
    return 0;
}