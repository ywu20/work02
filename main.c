#include<stdio.h>

int main(){
  int b =4598;
  double c = 0.12345678;
  char d = 'a';
  double e = 0.987543214;
  unsigned int f = -2534;
  char g = 65;
  char h = 1000;
  unsigned int i = 429496;
  printf("This is %d. This is %lf. This is %c. This is %0.3lf. \n", b,c,d,e);
  printf("Char with number %c. Out of bounds %c char\n",g,h);
  printf("unsigned %d, negative unsigned %d",i,f);
  return 0;
}
