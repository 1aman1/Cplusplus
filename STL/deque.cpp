#include<iostream>
#include<deque>

using namespace std;

void print(deque<int> Q, int type = 1) {
	cout << "Queue " << type << ":";
	if (!Q.empty())
		for (auto i : Q) cout << " " << i;
	else
		cout << " empty";
	cout << endl;
}

int main() {

	deque<int> Q;
	Q.push_back(256);
	Q.push_front(128);
	print(Q);

	Q.emplace_front(64);
	Q.emplace_back(512);
	Q.emplace(Q.begin(), 32);
	print(Q);

	Q.erase(Q.begin() + Q.size() -1);
	print(Q);

	Q.erase(Q.begin(), Q.end());
	print(Q);

	Q.insert(Q.begin(), 64);
	Q.insert(Q.end(), 256);

	deque<int> Q2;
	
	//for cloning a queue
	//Q.assign(begin, end)
	Q2.assign(Q.begin(), Q.end());
	Q2.insert(Q2.begin() + Q2.size() -1, 128);
	
	print(Q);
	print(Q2, 2);

	Q2.erase(Q2.begin() + Q2.size() - 1);
	print(Q2, 2);

	print(Q);
	print(Q2, 2);
	Q.swap(Q2);
	print(Q);
	print(Q2, 2);

	system("pause");
	return 0;
}
