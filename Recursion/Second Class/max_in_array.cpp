#include<iostream>
using namespace std;
int maxElement(int arr[],int size, int index)
{
    if(index==size)
    {
        return INT_MIN;
    }
    int myans=arr[index];
    int recanswer=maxElement(arr,size,(index+1));
    int finalanswer=max(myans,recanswer);
        return finalanswer;
    
}
int main(){
int arr[]={11,12,32,4,2,44,223,442,42};
int size=9;
int index=0;

cout<<"Maximum element is : " <<maxElement(arr,size,index);
return 0;
}