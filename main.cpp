#include <iostream>
using namespace std;
//find a number is prime or not

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"enter a number:"<<endl;
  cin>>n;

  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
      cout<<"non prime"<<endl;
      break;
    }
  }
  if(i==n){
    cout<<"prime number"<<endl;
  }
  return 0;
}