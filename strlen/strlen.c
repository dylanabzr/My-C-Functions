unsigned long my_strlen(const char *str){
  unsigned long i = 0;
  while(1){
    if (*str == '\0')
      break;
    str++;
    i++;
  }
  return i;
}
