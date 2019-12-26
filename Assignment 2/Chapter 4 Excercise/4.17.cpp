#include<iostream>
using namespace std;
int main(){
	int firstmax=0;
	int secondmax=0;
	int thirdmax=0;
	int c=1,num;
	while(c<=10){
	cout<<"Plzz enter value:";
	cin>>num;	

	if(firstmax<num){
	thirdmax = secondmax;
	secondmax = firstmax;
	firstmax = num;	
    	}else if(secondmax<num){
    		thirdmax = secondmax;
    		secondmax = num;
    
		}else if(thirdmax<num){
		thirdmax = num;
		}c++;
	}
		cout<<"The First Max Number is"<<firstmax<<endl;
		cout<<"The Second Max Number is"<<secondmax<<endl;
		cout<<"The Third Max Number is"<<thirdmax<<endl;

}
