#include <stdio.h>
#include <string.h>

void test(char *str) { 
    printf("%p\n", &str);
    printf("%s\n", str);
}

void main()
{
  char array[7];
  char *ptr;
//   char string[] = "fish";
char *string = "fish";

  test(string);

  printf("address of array is %p\n", &array);
  printf("address of array is %p\n", &array[0]);
  printf("address of array is %p\n", &array[1]);
  printf("address of prt   is %p\n", &ptr);


  strcpy(array, "abcdef");

  ptr = &(array[0]);

  printf("array = %s\n ptr = %s\n", array, ptr);
}
