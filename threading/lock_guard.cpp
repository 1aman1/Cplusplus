#include <iostream>
#include <thread>
#include <list>
#include <algorithm>
#include <mutex>

using namespace std;

// a global variable
list<int>myList;

// a global instance of mutex to protect global variable
mutex myMutex;

void addToList(int max, int interval) {
  // the access to this function is mutually exclusive
  lock_guard< mutex> guard(myMutex);
  for (int i = 0; i < max; i++) {
    if( (i % interval) == 0) myList.push_back(i);
  }
}

void printList() {
  // the access to this function is mutually exclusive
  lock_guard< mutex> guard(myMutex);
  for (auto itr = myList.begin(), end_itr = myList.end(); itr != end_itr; ++itr ) {
    cout << *itr << ",";
  }
}

int main() {
  int max = 100;

  thread t1(addToList, max, 25);
  thread t2(addToList, max, 10);
  thread t3(printList);

  t1.join();
  t2.join();
  t3.join();

  return 0;
}
