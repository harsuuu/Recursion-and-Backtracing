#include<iostream>
using namespace std;
int Factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int ans= (n * Factorial(n-1));
    return ans;
}
int main(){
int n;
cout<<"Enter the number which factorial you want :";
cin>>n;

cout<<"Factorial of "<<n << " is :"<<Factorial(n);
return 0;
}