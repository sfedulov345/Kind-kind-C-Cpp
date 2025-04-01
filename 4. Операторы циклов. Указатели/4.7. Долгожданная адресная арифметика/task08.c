#include <stdio.h>

int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  c++;
  d++;
  
  if((c <= a && d <= b) || (d <= a && c <= b)) printf("yes");
  else printf("no");
  
  return 0;
}
