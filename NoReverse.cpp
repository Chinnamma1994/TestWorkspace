#include<iostream>
using namespace std;
int main()
{ 
int num,temp,sum=0,r;
cout<<"Enter the number:"<<endl;
cin>>num;
temp=num;
while(num>0)
 { 
   r=num%10;
  sum=(sum*10)+r;
 num=num/10;
  

 }
if(temp==sum)
{
cout<<"number is palindrome"<<endl;
}
else
{
cout<<"number is not palindrome"<<endl;
}
 
  return 0;
}
