#include<iostream>
using namespace std;
void reverseArray(int arr[], int index)
{
    if(index<0)
    {
        return;
    }
    cout<<arr[index]<<endl;
    reverseArray(arr,(index-1));
}
int main(){
int arr[]={2,33,34,3,2,4,45,56};
int size=8;

reverseArray(arr,size-1);
return 0;
}