#include <stdio.h>

int main(void) {
  int count, mask;
  scanf("%d", &count);
  
  mask = 0b00001001;
  int *ptr = &count;
  char *ptr_h = (char *)ptr;
  for(int i = 0; i < sizeof(count); ++i) {
    *ptr_h = *ptr_h | mask;
    *ptr_h++;
  }
  printf("%d", count);
  
  return 0;
}
