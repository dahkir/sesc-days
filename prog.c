#include <stdio.h>
#include <math.h>

int fact1(int n){
  int count=1;
  for (int i=1;i<=n;i++){
    count*=i;
  }
  return count;
}

int main(void) {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("%d",(fact1(x-1)/fact1(y-1))/fact1(x-y));
  return 0;
}

