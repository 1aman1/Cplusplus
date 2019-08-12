#include<set>
#include<iostream>
#include<numeric>

using namespace std;

void print(multiset<int> s, int typ = 1) {
	cout << "set " << typ << ":";
	if (!s.empty())
		for (auto i : s) cout << " " << i;
	else
		cout << " empty";
	cout << endl;
}

int main() {
	multiset<int> s;
	s.insert(16);
	s.insert(32);
	s.insert(64);
	s.insert(128);
	s.insert(256);
	print(s);
	
	s.insert(s.begin(), 8);
	cout << s.count(32) << endl;
	print(s);

	s.erase(16);
	s.erase(s.find(32));
	print(s);

	s.insert(64);
	s.insert(64);
	s.insert(64);
	print(s);
	// use this instead of lower_bound and upper_bound, when finding span
	auto itr = s.equal_range(64);
	cout << "number of 64s " <<  distance(s.begin(), itr.second) - 1 /*No. of elements*/<< endl;
	
	system("pause");
	return 0;
}
