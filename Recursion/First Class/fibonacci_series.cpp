#include<iostream>
using namespace std;

int Fibonacci(int n){

if(n==0) return 0;

if(n==1) return 1;

int ans =(Fibonacci(n-1) + Fibonacci(n-2));
return ans;

}

int main(){

int m, x;

cout<<"Please enter the total number of values you want in the Fibonacci series :";
cin>>m;

cout<<"Enter the value of series (matlab series m kon kon se element hai):";
for(int i=0;i<m;i++)
{
    cin>>x;
}

int n;
cout<<"Enter the value which term you want to search";
cin>>n;
cout<<"Nth term is :"<<Fibonacci(n);
}


