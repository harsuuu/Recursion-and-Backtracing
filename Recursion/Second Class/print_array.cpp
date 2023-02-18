#include<iostream>
using namespace std;
void printArray(int arr[], int index,int size)
{
    if(index==size)
    {
        return;
    }
    cout<<arr[index]<<endl;
    printArray( arr,(index+1), size);
}
int main(){
int arr[]={2,4,5,6,7,8,9};
int size=7;
int index=0;
printArray(arr,index,size);
return 0;
}