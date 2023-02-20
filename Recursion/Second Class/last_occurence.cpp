#include<iostream>
using namespace std;
int lastOccurenece(int arr[], int index, int size,int key)
{
    if(index<0)
    {
        return -1;
    }
    if(arr[index]==key)
    {
        return index;
    }
    lastOccurenece(arr,(index-1),size,key);
}
int main(){
int arr[]={2,3,2,3,4,2,4,53,4,5};
int size=10;
int index=size-1;
int key; 
cout<<"Enter the key which last occurence you want :";
cin>>key;
cout<<"Key is on index no. :"<<lastOccurenece(arr,index,size,key);
return 0;
}  