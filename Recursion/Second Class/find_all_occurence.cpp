#include<iostream>
#include<vector>
using namespace std;
void allOccurence(int arr[], int size, int index, int key,vector<int>&ans)
{
    
    if(index==size)
    {
        return;
    }
    if(arr[index]==key)
    {
     ans.push_back(index);
    }
    allOccurence(arr,size, (index+1), key,ans);

}
int main(){
int arr[]={1,2,2,3,2,4,6,7,4,3,6};
int size=11;
int index=0;
int key;
cout<<"Enter the key which all occurence you want :";
cin>>key;
vector<int>ans;
allOccurence(arr,size,index,key,ans);
cout<<"Printing the answer of indexs of input key :";
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return 0;
}