#include<iostream>
using namespace std;
int main(){
	int side1,side2,side3;
	cout<<"Enter First Side of a trianle: ";
	cin>>side1;
	cout<<"Enter Second Side of a trianle: ";
	cin>>side2;
	cout<<"Enter Third Side of a trianle: ";
	cin>>side3;
	if((side1 < side2 + side3) && (side2 < side1 + side3) && (side3 < side1 + side2)){
		cout<<"Yes These three sides represent a triangle ";
	}else{
			cout<<"No These three sides could not represent a triangle ";
	}
}
