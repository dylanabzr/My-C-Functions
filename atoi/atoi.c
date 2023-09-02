int my_atoi(const char *str){
  int tmp;
  int sign = 1;
  int integer = 0;
  if (*str == '-') {
    sign = -1;
    str++;}
  while(*str >= '0' && *str <= '9'){
    tmp = *str-'0';
    integer = integer * 10 + tmp;
    str++;
  }
  return integer * sign;
}
