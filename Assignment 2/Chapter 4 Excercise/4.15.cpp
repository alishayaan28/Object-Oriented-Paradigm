#include<iostream>
using namespace std;
int main(){
	double sales,salary;
	
	while(sales!=-1){
		cout<<"Enter the Sales in Rs:";
		cin>>sales;
		salary=(sales/100*9)+200;
		cout<<"Your Salary is :"<<salary<<endl;
		cout<<"Enter the Sales in Rs:";
		cin>>sales;
	}
	return 0;
}
