#include <iostream>
using namespace std;

int main() {
	size_t Len, shift;
	
	cin >> Len;
	int * arr = new int[Len-1];
	
	cout << "the " << Len << " elements are : ";
	for( int i = 0 ; i < Len; ++i )
		cin >> arr[i];
		
	//shifting elements by this rotation parameter
	cin >> shift;
	
	for( int i = 0 ; i < Len; ++i )
		cout << arr[(i+shift)%Len] << " " ;
	
	cout << endl;
	return 0;
}
