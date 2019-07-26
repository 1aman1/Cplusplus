#include<iostream>
//#include<>
using namespace std;

/*struct {
 * };
 *
 * class {
 * };
 * */
void oThen1Fn1( int arr[], int n ) {
  int left = 0, right = n-1;
  while( left < right ) {
    while( !(arr[left] &1) && left < right )
      left++;
    while( arr[right] &1 && left < right )
      --right;
    if( left < right ) {
      int tmp = arr[left];
      arr[left] = arr[right];
      arr[right] = tmp;
    }
  }
}

void oThen1Fn2( int arr[], int n ) { 
  int cZero = 0;
  for (int i = 0;i< 10;++i )
    if( arr[i] == 0 )
      ++cZero;
  int  i ;
  for( i = 0; i < n; ++i ) {
    if( i < cZero )
      arr[i] = 0;
    else
      arr[i] = 1;
  }
}

int main() {
  int arr[10] = {0,1,0,1,0,1,0,1,0,1};
/**
 *TRY BOTH, FUNCTION1 and 2
 * */
  oThen1Fn1( arr, 10 );
//  oThen1Fn2( arr, 10 );
  for( int i = 0 ; i < 10; ++i)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}
