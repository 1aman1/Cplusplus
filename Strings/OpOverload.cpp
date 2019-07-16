#include<iostream>
#include<cstring>

using namespace std;

typedef struct _String {
  public:
    char* str;
    _String():str(nullptr)
  {}
} String;

String operator+(const String s1,const String s2) {
	String segregatedStr;
	segregatedStr.str = new char;
	strcpy(segregatedStr.str, s1.str);
	strcat(segregatedStr.str, s2.str);
	return segregatedStr;
}

int main() {
  String fn, sn, Fn;
  fn.str = strdup("TI");
  sn.str = strdup("ME");

  Fn = fn + sn;
  cout << sizeof(Fn.str) << endl;
	cout << Fn.str;

  //	system("pause");
	return 0;
}
