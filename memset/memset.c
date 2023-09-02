void *my_memset(void *str, int c, unsigned long n){
  char *string = (char *)str;
  for (unsigned long i = 0; i<=n; i++)
    string[i] = c;
  return string;
}
