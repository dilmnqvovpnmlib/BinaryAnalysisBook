#include <stdio.h>
#include <string.h>
 
void main()
{
  char array[7];
  char *ptr;

  strcpy(array, "abcdef");

  printf("ここまでは正常に動作する。\n");

  strcpy(ptr, "ghijkl");

  printf("この上でコアダンプする。\n");

  printf("array = %s\n ptr = %s\n", array, ptr);
}
