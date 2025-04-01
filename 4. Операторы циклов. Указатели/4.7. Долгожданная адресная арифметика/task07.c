#include <stdio.h>

int main(void) {
  int count;
  scanf("%d", &count);
  
  int mask = 0b00111101;
  char *ptr_h = (char *)&count;
  for(int i = 0; i < sizeof(count); ++i){
    *ptr_h = *ptr_h & mask;
    *ptr_h++;
  }
  printf("%d", count);
  
  return 0;
}
