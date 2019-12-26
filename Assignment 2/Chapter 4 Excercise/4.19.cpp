#include<iostream>
using namespace std;
int main(){

	int firstmax=0;
	int secondmax=0;
	int c=1,num;
	while(c<=10){
	cout<<"Plzz enter value:";
	cin>>num;	
	if(firstmax<num){
		secondmax = firstmax;
	    firstmax = num;	
	} else if(secondmax<num){
		firstmax = secondmax;
		secondmax = num;
	}c++;
	
	}
		cout<<"The First Max Number is:"<<firstmax<<endl;
		cout<<"The Second Max Number is:"<<secondmax<<endl;

}
