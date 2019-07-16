#include<iostream>
using namespace std;

int& func_ret(int &x) {
  return (x);
}

int main() {
  int f, a = 2;
  int &b = a;

  func_ret(b) = 7;

	cout << a << "\n" << b << "\n" << &b << "\n" ;
  cout << __FUNCTION__ << endl;  
//	system("pause");
	return 0;
}
