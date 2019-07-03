#include<iostream>
using namespace std;

class A {
  private:
    int i;
  public:
    A(int x) : i(x)
  {}
    int get() const{	return i;}
    void set(int s) {	i =	s;}
};

void print(char* str) { 
  cout << str;
}

int main() { 
  const char* a = "are";
  //without const_cast, call would be incompatible due to char* in print Fn
  //hence for calling print, we send const-stripped pointer
  print( const_cast<char* >(a));
  const A ob(20);
  ob.get();
  //object is non0modifable
  //const_cast takes reference to stirp off the const_ness
  //const_cast argument can be->reference/pointer/pointer to memory object
  //ob.set(4);
	const_cast<A&>(ob).set(40);

	return 9;
}
