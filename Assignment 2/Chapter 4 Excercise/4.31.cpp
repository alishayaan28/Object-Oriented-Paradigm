#include<iostream>
using namespace std;
int main(){
	double radius,pi = 3.14,spherecircumference,diameter,area;
	cout<<"Enter radius of a circle: ";
	cin>>radius;
	diameter=radius*2;
	spherecircumference=(4/3)*pi*radius*radius*radius;
	area=pi*radius*radius;
	cout<<"Diameter of a circle is: "<<diameter<<endl;
	cout<<" Sphere's Circumference of a circle is: "<<spherecircumference<<endl;
	cout<<"Area of a circle is: "<<area<<endl;
}
