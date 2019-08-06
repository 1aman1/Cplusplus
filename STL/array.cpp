#include<array>
#include<numeric>
#include<iostream>
using namespace std;

int main() {
	array<int, 6> arr;
	
	iota(arr.begin(), arr.end(), 0);
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
	
	//front and back provide ptr to the resp. position
	cout << arr.front() + arr.back() << endl;
		
	//begin and end provide iterator to front and end
	for (auto it = arr.begin(); it != arr.end(); ++it)
		cout << *it << " ";
	cout << endl;
	
	array<int, 6> dummy;
	arr.swap(dummy);

	for (auto i : dummy)
		cout << i << " ";
	cout << endl;
	
	system("pause");
    return 0;
}
