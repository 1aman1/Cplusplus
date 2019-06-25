#include<iostream>
using namespace std;

int main() {
  int a = 9415;
  int* ptr = nullptr;
  int** _ptr = nullptr;

  ptr = &a;
  _ptr = &ptr;

  cout << "variable : " << a << endl;
  cout << "pointer : " << ptr << " points to value " << *ptr << endl;
  cout << "pointer to pointer : " << _ptr << " points to  " << *_ptr << " which stores "<< **_ptr << endl ;
	
  return 0;
}

