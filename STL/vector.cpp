#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

void print(vector<int> V, int type = 1) {
	cout << "vector " << type << ":";
	if ( !V.empty() )
		for (auto i : V) cout << " " << i;
	else
		cout << " empty";
	cout << endl;
}

int main() {
	vector<int> vec(5);
	// intialize 
	iota(vec.begin(), vec.end(), 1);
	print(vec);

	//add at end
	vec.push_back(6);
	print(vec);
	
	//emplace is a genericFn of emplace_back
	vec.emplace(vec.begin(), 0);
	vec.emplace_back(7);
	print(vec);

	//resize for containing 'N' elements
	vec.resize(vec.size() - 2);
	print(vec);

	vec.front() = 256;
	vec.back() = 256;
	print(vec);

	vec.assign(1, 25);
	vec.pop_back();
	print(vec);

	vec.insert(vec.begin(), 4);
	vec.insert(vec.end(), 5);
	print(vec);

	vec.erase(vec.begin(), vec.end());
	print(vec);

	vec.resize(6);
	iota(vec.begin(), vec.end(), 1);

	vector<int> vec2;
	// to clone a vector
	vec2.assign(vec.begin(), vec.end());
	print(vec2, 2);

	//juxtaposition for insert & emplace 
	vec.insert(vec.begin() + 2, 256);
	vec2.emplace(vec2.begin() + 2, 256);

	print(vec);
	print(vec2, 2);

	//begin, cbegin, rbegin, crbegin
	//end, cend, rend, crend

	for (auto it = vec.begin(); it != vec.end(); ++it) {
		*it -= 10;
	}
	print(vec);
	
	// to avoid above scenario(if needed), use cbegin/cend that returns const iterator
	/*
	here modification is not possible/ giving the sequence container READ-ONLY purpose
	for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
		*it += 10;
	}
	*/
	
	for (auto it = vec2.rbegin(); it != vec2.rend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	//  # SOME MIXING #  //
	// used begin/cend, iteration flows normally
	for (auto it = vec2.begin(); it != vec2.cend(); ++it) {
		*it -= 10;
	}
	print(vec2, 2);
	
	// former iteration works, whereas latter doesn't
	// using cbegin/end
	/*
	for (auto it = vec2.cbegin(); it != vec2.end(); ++it) {
		*it -= 10;
	}
	*/
  /* now crbegin, crend fall intuitively into understanding that they provide read-only/const-iterator from reverse  */
	system("pause");
	return 0;
}
