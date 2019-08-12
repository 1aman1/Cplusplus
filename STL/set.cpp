#include<set>
#include<iostream>
#include<numeric>

using namespace std;

void print(set<int> s, int typ = 1) {
	cout << "set " << typ << ":";
	if (!s.empty())
		for (auto i : s) cout << " " << i;
	else
		cout << " empty";
	cout << endl;
}

int main() {
	set<int> s;
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

	// in set the lower and upper bounds would differ only by 1
	// unlike multiset, set doesnot allow duplicates
	auto itr = s.lower_bound(64); 
	cout << *itr << endl;
	
	itr = s.upper_bound(64);
	cout << *itr << endl;
	
	system("pause");
	return 0;
}
