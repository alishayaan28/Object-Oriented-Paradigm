#include<iostream>
using namespace std;
int main(){
	int input,first,second,third,fourth,r,org;
	cout<<"Enter four digit value:";
	cin>>input;
	org=input;
	r=input%10;
	input = input/10;
	fourth = r;
	r=input%10;
	input = input/10;
	third = r;
	r=input%10;
	input = input/10;
	second = r;
	r=input%10;
	input = input/10;
	first = r;
	first = (first+7)%10;
    second = (second+7)%10;	
	third = (third+7)%10;
	fourth = (fourth+7)%10;	
   cout<<"The Original Text is:"<<org<<endl;
   cout<<"The encrypted Text is:"<<third<<fourth<<first<<second;
}
