#include<iostream>
using namespace std;

void Decreasing(int n)
{
    //base call
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    //Recusive call
    Decreasing(n-1);
}

int main(){
int n;
cout<<"Enter the value of n :";
cin>>n;

cout<<"Printing in decreasing order "<<endl;

Decreasing(n);    //function call
return 0;
}