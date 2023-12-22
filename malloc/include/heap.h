#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/mman.h>


#define HEAP_SIZE 1048576 //100MB
extern void *heap_start;

struct heap_space{
  size_t size;
  bool is_occupied;
};

struct heap{
  struct heap_space *start;
  size_t size;
};


void startHeap();
void finish_heap();
