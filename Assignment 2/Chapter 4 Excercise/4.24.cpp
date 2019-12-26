#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter the Value of x and y:"<<endl;
	cin>>x>>y;
	if ( x < 10 &&  y > 10 ){
	cout << "*****" << endl;
	}else{
		cout << "#####" << endl;
        cout << "$$$$$" << endl;
	}
	cout<<"Enter the Value of x and y:"<<endl;
	cin>>x>>y;
	if ( x < 10 ){
       if ( y > 10 ){
       	cout << "*****" << endl;
	   }
    }else{
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }
return 0;
}
