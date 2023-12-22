#include "../include/malloc.h"
#include <stddef.h>

void* my_malloc(size_t size){
  struct heap_space *current = (struct heap_space *) heap_start;
  for (struct heap_space* new = current; new != NULL; new = new + 1){
    if (new->is_occupied) continue;
    if (size < new->size){
      current = (struct heap_space *) (size + (size_t) new + sizeof(struct heap_space));
      if ((size_t)current >= (size_t) ((size_t) heap_start + HEAP_SIZE)) return NULL;
      current->is_occupied = 0;
      current->size = new->size - size;
      new->size = size;
      new->is_occupied = 1;
      return new;
    }
    if (size == new->size){
      new->is_occupied = 1;
      return new;
    }
  }
  return NULL;
}

void my_free(void *ptr){
  if(!ptr) return;
  struct heap_space *current = (struct heap_space*) ptr;
  struct heap_space *next = (struct heap_space*)ptr + 1;
  current->is_occupied = 0;
  if(!next->is_occupied && (size_t)next <= (HEAP_SIZE - sizeof(struct heap_space))){
    current->size += next->size;
    next = current;
  }
}
