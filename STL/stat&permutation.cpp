#include<algorithm>
#include<numeric>
#include<vector>
#include<iostream>
using namespace std;

int main() {

	vector<int> vec(15);

	/*	iota can replace this code, which makes iota a sequence initialiser
	int val = 0;
	for (auto &i : vec) i = ++val;
	*/
	iota(vec.begin(), vec.end(), 1);

	/*PRINT(VEC);*/ for (auto i:vec) cout << i << " ";
	
	cout << "\nsum : " << accumulate(vec.cbegin(), vec.cend(), 0);

	cout << "\nmaxelement " << *max_element(vec.cbegin(), vec.cend());
	cout << "\nminelement " << *min_element(vec.cbegin(), vec.cend());
	
	cout << "\ncount occurrence for x : " << count(vec.cbegin(), vec.cend(), 4);

	cout << "\nfind an element " << ((find(vec.cbegin(), vec.cend(), 4) == vec.end()) ? "abs" : "pres");

	//    ( times, value )
	vec.assign(5, 50);
	vec.emplace_back(51);
	vec.emplace_back(52);

	auto l = lower_bound(vec.cbegin(), vec.cend(), 50);
	cout << "\nlower bound " << l - vec.begin();

	auto u = upper_bound(vec.cbegin(), vec.cend(), 50);
	cout << "\nupper bound " << u - vec.begin();

	cout << "\n" << vec.size() << endl;
	vec.erase(vec.begin());
	cout << vec.size() << endl;

	vec.assign(1, 1);
	vec.push_back(200);
	vec.push_back(3);

	/*PRINT(VEC);*/ for (auto i:vec) cout << i << " ";

	cout << endl;
	next_permutation(vec.begin(), vec.end());
	/*PRINT(VEC);*/ for (auto i:vec) cout << i << " ";

	cout << endl;
	prev_permutation(vec.begin(), vec.end());
	/*PRINT(VEC);*/ for (auto i:vec) cout << i << " ";

	cout << "\ndistance " << distance(vec.begin(), find(vec.begin(), vec.end(), 3));

	cout << endl;
	//system("pause");
	return 0;
}
// one might give a word for /*PRINT(VEC);*/
// but this subtly helps in going fast thru the code
