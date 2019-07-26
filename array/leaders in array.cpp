//find leaders in an array
//leaders are those values that are greater than all the elements to their right side
//NOTE:last element has no element on right side, hence its a leader too
#include <iostream>
using namespace std;

int main() {
  size_t Q, Len; // Q variable name stands for Query
  cin >> Q;
  
  while( Q-- ){
    cin >> Len;
    
    int *arr = new int[Len-1];
    
    for( int i = 0; i < Len; ++i )
      cin >> arr[i];
    for( int i = 0; i < Len; ++i )  {
      int j;
      for( j = i+1; j < Len; ++j ) {
        if(  arr[i] <= arr[j] )
          break;
      }
      if( j == Len )
        cout << "->" << arr[i] ;
    }
  }
  cout << endl;
  return 0;
}
