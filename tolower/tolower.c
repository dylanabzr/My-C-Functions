char my_tolower(char c){
  return c - ('A'-'a') * ((c>='A') && (c<='Z'));
}
