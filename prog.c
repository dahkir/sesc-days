#include <stdio.h>
#include <math.h>

int main(void) {
  int days, weeks, years;
  scanf("%d", &days);
  years = floor(days/365);
  days%=365;
  weeks = floor(days/7);
  days%=7;
  printf("years: %d\n", years);
  printf("weeks: %d\n", weeks);
  printf("days: %d", days);
  return 0;
}
