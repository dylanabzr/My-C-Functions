int my_strcmp(const char* str1, const char* str2){
  while(*str1 != '\0'){
    if(*str1 > *str2) return 1;
    if(*str1 < *str2) return -1;
    str1++;
    str2++;
  }
  return 0;
}
