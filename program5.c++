#include <iostream>
using namespace std;
void solve( int n ){
   int i, j;
   for( i = 1; i <= n; i++ ) {
      for( j = 1; j <= i; j++ ) {
         cout << "* ";
      }
      cout << endl;
   }
}
int main(){
   int n = 5;
   cout << "Left Star Pattern using " << n << " number of lines:" << endl;
   solve( n );
}