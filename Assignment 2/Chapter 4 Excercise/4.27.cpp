#include<iostream>
using namespace std;
int main() {
   int num=0;
   while (!num) {
      cout<<"Five-digit number: ";
      cin>>num;
      if(num<10000)
         num=0;
      if(num>99999)
         num=0;
   }
   if (num/10000==num%10){
   	if (num%10000/1000==num%100/10){
      	 cout<<num<<" is Palindrome: "<<endl;
	  }
   }else{
	  	cout<<num<<" is not a Palindrome: "<<endl;
	  }
}
