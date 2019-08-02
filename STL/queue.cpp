//#include<bits/stdc++.h>
#include<queue>
#include<iostream>
#include<algorithm>

using namespace std;

void shoutOut( string Here ) {
  std::transform( Here.begin(), Here.end(), Here.begin(), ::toupper );
  cout << Here << endl;
}

int main() {
  shoutOut( __FUNCTION__ );
  queue<int> Myqueue;

  cout << "is queue empty[0/1] : " << Myqueue.empty() << endl;
  for(int i = 0; i < 4; ++i)
		Myqueue.push(i);

  cout << "--*--\n";
  cout << "size : " <<  Myqueue.size() << endl;
  cout << "front : " << Myqueue.front() << endl;
	cout << "rear : " << Myqueue.back() << endl;

  Myqueue.emplace(404);
 
  cout << "--*--\n";
  cout << "size : " << Myqueue.size() << endl;
  cout << "front : " << Myqueue.front() << endl;
	cout << "rear : " << Myqueue.back() << endl;

  Myqueue.pop();
	
  cout << "--*--\n";
  cout << "size : " << Myqueue.size() << endl;
  cout << "front : " << Myqueue.front() << endl;
	cout << "rear : " << Myqueue.back() << endl;

  //	system("pause");
	return 0;
}
 
