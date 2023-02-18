#include<iostream>
using namespace std;
int maxElement(int arr[], int size, int index, int &maxi)
{
    if(index==size)
    {
        return 0;
    }
    maxi=max(maxi,arr[index]);
    int maximum=maxElement(arr,size,(index+1),maxi);
    return maximum;
}
int main(){
int arr[]={2,3,4,5,23};
int size=5;
int index=0;
int maxi=INT_MIN;
maxElement(arr,size,index,maxi);
cout<<"Maximum element is :"<<maxi;
return 0;
}