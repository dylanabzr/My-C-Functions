void *my_memccpy(void *s1, const void *s2, int c, unsigned long n){
  char* dest = (char*)s1;
  const char *src = (const char *)s2;
  for (unsigned long i = 0; i < n; i++){
    dest[i] = src[i];
    if (dest[i] == c) break;
  }
  return s1;
}
