#include <iostream>
 using namespace std;
 bool isFactor( int, int );
int main() {
 while ( true ) {
       int a, b;
cout << "Two integer numbers (0 to end): ";
       cin >> a;
       if ( !a ) break;
       cin >> b;
       cout << b << " is " << ( isFactor( a, b ) ? "" : "not " )
          << "a factor of " << a << "\n\n";
    }
    return 0;
}
