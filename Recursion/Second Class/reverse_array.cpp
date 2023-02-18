#include<iostream>
using namespace std;
void revereArray(int arr[], int index,int size)
{
    if(index==size)
    {
        return;
    }
    revereArray( arr,(index+1), size);
    cout<<arr[index]<<endl;
}
int main(){
int arr[]={2,4,5,6,7,8,9};
int size=7;
int index=0;
revereArray(arr,index,size);
return 0;
}