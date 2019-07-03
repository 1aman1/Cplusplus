#include<iostream>
using namespace std;

int main() {
  const int a = 5;
  int* q = const_cast<int *>(&a);
  //stripped off constness using const_cast 
  //allowing re-assignment to variable
  *q = 50;
  cout << a << " " << *q << endl;
//	system("pause");
	return 0;
}
