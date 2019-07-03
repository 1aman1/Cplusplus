#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;
struct box {
  int x;
  pthread_mutex_t lk;
  pthread_cond_t  ct;
  box(): x(0){}
};
//format says, only a void pointer can be sent to threadFn, which can be put to use after casting
void *threadFunction(void *tmp) {
  box* x = (box*)(tmp);
  for (int i = 0 ; i < 500; ++i) {
    //first call takes lock over mutex
    pthread_mutex_lock(&(x->lk));
    x->x += 1;
    //this call takes the lock off/unlocks the mutex
    pthread_mutex_unlock(&(x->lk));
  }
  //To visualize the working, sleep is put for slowing operation down
  sleep(1);
  return 0;
}

int main() {
  box V;
  //thread declared by pthread_t, analogous to int/float/etc..
  pthread_t pid1, pid2;

  //format (pointer->Ptr)
  //pthread_create(Ptr to thread, const Ptr to attribute, Ptr to routineFn the thread should execute, Ptr to arg
  pthread_create(&pid1, NULL, threadFunction, (void*)(&V));
  cout<<"created first  thread\n";
  pthread_create(&pid2, NULL, threadFunction, (void*)(&V));
  cout<<"created second thread\n";

  //once a thread is created, it parts execution sequence from main thread(NOTE#main is also a thread)
  //and is treated like any other thread for execution.
  //it is scheduled/run just like others
  //thread start->execute and finish
  //to get a hold on to thread, before it looses existence/terminated, we use join()
  //join adds wait to the thread specified
  
  int* y;
  //format
  //declaraion on line 46 could be anything i.e., int/float/etc..
  //pthread_join() call requires a pointer, which it keeps in case the call doesnt return NULL/as intended
  //return value should be NULL for acknowledgement of successful join
  pthread_join(pid1, (void**)(&y));
  pthread_join(pid2, (void**)(&y));

  cout <<"final value : " << V.x << endl; 
  return 0;
}
