// A C++ program to demonstrate STL sort() using
// our own comparator
#include<bits/stdc++.h>
using namespace std;
 
// An interval has start time and end time
struct Interval {
    int start, end;
};
 
// Compares two intervals according to staring times.
bool compareInterval(Interval i1, Interval i2) {
    return (i1.start < i2.start);
}
 
int main() {
  Interval arr[] =  { {6,8}, {4,7}, {2,4}, {1,9} };
  int n = sizeof(arr)/sizeof(arr[0]);

  // sort the intervals in increasing order of start time
  // sort(arr, arr+n, greater<int>()); 
  sort(arr, arr+n, compareInterval);

  cout << "Intervals sorted by start time : ";
  for (int i = 0; i < n; i++ ) 
    cout << "[" << arr[i].start << "," << arr[i].end << "] ";

  cout << endl;
  return 0;
}
