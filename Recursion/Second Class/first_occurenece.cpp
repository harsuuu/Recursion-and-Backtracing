#include<iostream>
using namespace std;
int firstOccurenece(int arr[], int index, int size,int key)
{
    if(index==size)
    {
        return -1;
    }
    if(arr[index]==key)
    {
        return index;
    }
    int answer=firstOccurenece(arr,(index+1),size,key);

}
int main(){
int arr[]={2,3,2,3,4,2,4,53,4,5};
int size=10;
int index=0;
int key;
cout<<"Enter the key which occurence you want :";
cin>>key;
cout<<"Key is on index no. :"<<firstOccurenece(arr,index,size,key);
return 0;
}