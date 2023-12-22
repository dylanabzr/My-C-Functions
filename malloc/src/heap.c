#include "../include/heap.h"
#include <sys/mman.h>
#include <stdlib.h>

void *heap_start;

void startHeap(){
  heap_start = mmap(NULL, HEAP_SIZE, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
  if (heap_start == MAP_FAILED){
    perror("Was not possible to create HEAP");
    exit(1);
  }
  struct heap_space *head = (struct heap_space*) heap_start;
  head->size = HEAP_SIZE - sizeof(struct heap_space);
  head->is_occupied = 0; 
}

void finish_heap(){
  if(munmap(heap_start, HEAP_SIZE) == -1){
    perror("Erro ao finalizar a heap");
    exit(2);
  }
}
