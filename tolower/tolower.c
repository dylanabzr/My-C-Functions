int my_tolower(int c){
  return c - ('A'-'a') * ((c>='A') && (c<='Z'));
}
