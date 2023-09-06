unsigned long my_strlen(const char *str){
  unsigned long i;
  for(i=0;;i++){
    if (*str == '\0')
      break;
    str++;
  }
  return i;
}
