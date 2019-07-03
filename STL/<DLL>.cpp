// A C++ program to demonstrate STL sort() using
// our own comparator
#include<bits/stdc++.h>
using namespace std;

void print( list<int> list1 ) {
  if( !list1.empty() ) {
    for( auto i: list1)
      cout << i << " " ;
    cout << endl;
  }
  else
    cerr << "empty list\n";
}
 
int main() {
  // forward_list for singly linked list declaration
  // list for doubly linked list declaration
  list<int> list1;

  for( int i = 0 ; i < 5; ++i) 
    list1.push_back(i);
  print(list1);

  for( int i = 0 ; i < 5; ++i) 
    list1.push_front(i);
  print(list1);

  cout << "front " << list1.front() << endl;
  cout << "back " << list1.back() << endl;

  list1.reverse();
  print(list1);

  list1.sort();
  print(list1);

  list1.clear();
  cout << list1.size() << endl;
  
  if( list1.empty() )
    cout << "empty\n";

  for(int i = 0; i < 5; ++i ) 
    list1.push_back(i);

  auto it = list1.begin();

  list1.emplace( it, 404);
  print(list1);

  list1.assign(4,40);
  print(list1);

  list1.emplace(list1.begin(), 400 );
  print( list1);

  list1.emplace_front( 300 );
  print( list1);

  list1.emplace_back( 200 );
  print( list1);

  cout << "cloning list1\t";
  list<int> list2;
  list2.assign(list1.begin(), list1.end() );
  print(list2);

  cout << "cleaning both lists\n";
  list2.clear();
  list1.clear();
  list2.emplace_front(-1);
  list1.emplace_front(1);

  //list2.merge(list1);
  // the list1 that calls for merger, follows the other list
  // hence list1 follows list2

  list1.merge(list2);
  print(list1);
  print(list2);

  list2.clear(), list1.clear();
  list2.assign(3,100);
  cout << "list2 assigned 100->3 times\n";
  list2.remove(100);
  cout << "remove element that equals 100\n";
  if(list2.empty())
    cout <<"list2 empty\n";
  
  cout << "list2 assigned 300->2 times\n";
  list2.assign(2, 300);
  cout << "remove element that equals 300, using lambda Fn\n";
  list2.remove_if([](int x){return x==300;});
  if(list2.empty())
    cout <<"list2 empty\n";

  list2.clear();

  cout << "list2 assigned 100->3 times\n";
  list2.assign(3,100);
  cout << "applying unique\n";
  list2.unique();
  print(list2);

  //lets check if it sorts
  cout << "inserting new elements to explore operation 'unique'\n";
  list2.emplace_front(3);
  list2.emplace_front(40);
  list2.emplace_front(40);
  list2.emplace_front(40);
  list2.emplace_front(400);
  print(list2);
  cout << "applying unique\n";
  list2.unique();
  print(list2);

  auto itr = list2.begin();
  cout << *itr;
  //lets advancen the iterator
  advance( itr, 3);
  cout << "->" << *itr; 
  // :-) yeah worked

  list1.clear(), list2.clear();
  list1.assign(2,15);
  list2.assign(2,30);
  list2.emplace_front(3);
  list2.emplace_front(40);
  list2.emplace_front(40);
  list2.emplace_front(40);
  list2.emplace_front(400);
  cout << endl << "renew\n";
  print(list1);
  print(list2);
 
  cout << "new ";
  itr = list1.begin();
  advance(itr, 1);
  list1.splice(itr, list2);
  print(list1);

  return 0;
}

