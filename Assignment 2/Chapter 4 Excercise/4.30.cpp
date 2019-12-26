#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,fabonacci=0;
	int n;
	cin>>n;
	while(a<=n){
		cout<<a;
		fabonacci=a+b;
		b=a;
		a=fabonacci;
		cout<<endl;
	}cout<<fabonacci<<endl;
	return 0;
}
