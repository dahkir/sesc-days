#include <stdio.h>
#include <math.h>

int main(void) {
  int n, num;
  scanf("%d", &n);
  num+=floor(n/5);
  num+=floor(n/25);
  num+=floor(n/125);
  num+=floor(n/625);
  num+=floor(n/3125);
  printf("%d", num);
  return 0;
}
