#include <iostream>
using namespace std;
void solve( int n ){
   int i, j, k;
   for( i = 1; i <= n; i++ ) {
      for( k = 1; k <= (n - i); k++ ) {
         cout << ". ";
      }
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