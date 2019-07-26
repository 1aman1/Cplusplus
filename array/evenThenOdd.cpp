#include<iostream>
//#include<>
using namespace std;

/*struct {
 * };
 *
 * class {
 * };
 * */

void evenThenOdd( int arr[], int n){
  int left = 0, right = n-1;
  while( left < right ) {
    while( arr[right] &1 && left < right ) 
      right--;
    while( !(arr[left] &1) && left < right )
      left++;
    if( left < right ) {
      int tmp = arr[left];
      arr[left] = arr[right];
      arr[right] = tmp;
      ++left;
      --right;
    }
  }
}

int main() {
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  evenThenOdd( arr, 10);
  for( auto &e:arr ) cout << e << " ";
  cout << endl;

  return 0;
}
