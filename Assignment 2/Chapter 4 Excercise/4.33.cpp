#include<iostream>
using namespace std;
int main()
{
double a, b, c;
cout << "Enter the three numbers: " << endl;
cin >> a >> b >> c;
if( (a + b <= c) || (b + c <= a) || (a + c <= b) )
cout << "They could NOT represent the sides of a triangle" << endl;
else
cout << "They could represent the sides of a triangle" << endl;
system("PAUSE") ;
return 0;
}
