#include<iostream>
#include<queue>

using namespace std;

int main() { 
	priority_queue <int> pQ;
	
	pQ.emplace(1024);
	cout << pQ.top() << endl;
  
  //for an adaptor container like priority queue, push and emplace dont create much of a difference
	pQ.push(512);
	pQ.pop();
	cout << pQ.top() << endl;

	pQ.emplace(2048);
	cout << pQ.top() << endl;

	pQ.pop();
	cout << pQ.top() << endl;

	if( !pQ.empty() )
		cout << pQ.size() << endl;

	system("pause");
	return 0;
}
