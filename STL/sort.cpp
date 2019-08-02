#include<iostream>
#include<algorithm>
using namespace std;
 
// say, An interval 
struct Interval {
    int start, end;
};
 
// Compares two intervals 
bool compareInterval(Interval i1, Interval i2) {
    return (i1.start < i2.start);
}
 
int main() {
  int ar[7] = {7,6,5,4,3,2,1};
  
  sort(ar, ar+7);
  cout << "Default sort  : ";
  for( auto i:ar) cout << i << " ";

  Interval arr[] =  { {6,8}, {4,7}, {2,4}, {1,9} };
  int n = sizeof(arr)/sizeof(arr[0]);

  // sort(arr, arr+n, greater<int>()); 
  sort(arr, arr+n, compareInterval);

  cout << endl;
  cout << "Custom sort : Intervals sorted by start time : ";
  for (int i = 0; i < n; i++ ) 
    cout << "[" << arr[i].start << "," << arr[i].end << "] ";

  cout << endl;
  return 0;
}
