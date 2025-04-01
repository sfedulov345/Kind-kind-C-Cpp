#include <stdio.h>

int main(void) {
  int value;
  scanf("%d", &value);
  
  int *ptr = &value;
  short *ptr_h = (short *)ptr;
  
  for(int i = 0; i < 2; ++i) {
    *ptr_h++ += 1;
  }
  printf("%d", value);
  return 0;
}
