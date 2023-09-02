void *my_memcpy(void * dest, const void *src, unsigned long size){
  char* destination = (char*)dest;
  const char* source = (const char*)src;

  for (unsigned long i = 0; i < size; i++){
    destination[i] = source[i];
  }
  return dest;
}
