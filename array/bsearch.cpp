#include<iostream>
#include<algorithm>
using namespace std;

void shoutOut( string Here ) {
  std::transform( Here.begin(), Here.end(), Here.begin(), ::toupper );
  cout << Here << endl;
}

int binarySearch(int *arr, int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        shoutOut( __FUNCTION__ );
        cout << l << " : " << r << endl;

        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then possibility reduces to left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // If element is smaller than mid, then possibility reduces to right subarray 
       return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not present in array 
    return -1; 
} 

int main() {
  size_t size;
  int item;
	
  cout << "size of array : ";
  cin >> size;

  int *arr = new int[size-1];

  for(int i= 0; i < size; ++i ) 
    cin >> arr[i];

  cout << "seeking value ? ";
  cin >> item;

  binarySearch(arr, 0, size, item) != -1 ?  cout << "found\n" : cout << "cant find\n" ;
		
	return 0;
}
