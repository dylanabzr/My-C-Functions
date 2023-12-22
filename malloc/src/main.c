#include "../include/malloc.h"

int main(){
  startHeap();
  int *test = (int *) my_malloc(sizeof(int) * 3);
  for (int i = 0; i < 3; i++){
    test[i] = i+2;
    printf("Pos %d: %d; address: %p\n", i+1, test[i], test +i);
  }
  my_free(test);
  finish_heap();
}
