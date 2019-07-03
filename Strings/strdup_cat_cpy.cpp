#include<iostream>
#include<cstring>

using namespace std;

typedef struct _String {
  char * str;
} String;

int main() {
  String fn, sn, Fn;
  fn.str = strdup("TI");
  sn.str = strdup("ME");
  Fn.str = new char;
  
  strcpy(Fn.str, fn.str);
  strcat(Fn.str, sn.str);
  
  cout << Fn.str;
  //	system("pause");
  return 0;
}
