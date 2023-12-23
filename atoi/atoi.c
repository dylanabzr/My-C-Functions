int my_atoi(const char *str){
  int tmp, sign = 1, integer = 0;
  if (*str == '-') {
    sign = -1;
    str++;
  }
  while(*str >= '0' && *str <= '9'){
    tmp = *str-'0';
    integer = integer * 10 + tmp;
    str++;
  }
  return integer * sign;
}
