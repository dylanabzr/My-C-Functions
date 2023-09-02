void my_bzero(void *s, unsigned long n){
  char *str = (char *)s;
  for (unsigned long i = 0; i <= n; i++)
    str[i] = '\0';
}
