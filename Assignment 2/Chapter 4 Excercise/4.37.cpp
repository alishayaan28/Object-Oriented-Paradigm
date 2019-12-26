#include <iostream>
using namespace std;

int main() {
	int org,input,first,second,third,forth,r;
	cout<<"Enter 4 digit value: ";
	cin>>input;

	r=input%10;
	input=input/10;
	forth=r;
		r=input%10;
	input=input/10;
	third=r;
		r=input%10;
	input=input/10;
	second=r;
		r=input%10;
	input=input/10;
	first=r;
	first=(first+7)%10;
	second=(second+7)%10;
	third=(third+7)%10;
	forth=(forth+7)%10;
	
	cout<<"THE ENCRYPTED VALUE: "<<third<<forth<<first<<second<<endl;
	return 0;
}
