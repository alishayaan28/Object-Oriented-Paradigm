#include<iostream>
using namespace std;
int main(){
    int gallon;
    float mile,mpg;
    float avg=0;
    int count=0;
    
    while(mile!=-1){
    	count++;
    	cout<<"Enter Distance in Miles(-1 to quite) :";
    	cin>>mile;
    	cout<<"Enetr Total Gallons :";
    	cin>>gallon;
    	mpg=mile/gallon;
    	avg=mpg/count;
    	cout<<"Miles per:"<<mpg<<endl;
    	cout<<"Total miles per Gallon :"<<avg<<endl;
    	cout<<"Enter Distance in Miles(-1 to quite) :";
    	cin>>mile;
	}
	return 0;
}
