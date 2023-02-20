#include<iostream>
using namespace std;
void reverse(string &str, int i, int j)
{
 if(i>=j)
 {
    return;
 }   
 swap(str[i],str[j]);

 reverse(str, i+1,j-1); 

}
int main(){
string str="harsh";

int i=0;

int j=str.length()-1;

reverse(str,i,j);

cout<<"Reverse string is :"<<str<<endl;

return 0;
}