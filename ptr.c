#include <stdio.h>
#include <stdlib.h>

int main() {
  // Basic pointer demonstration
  int x = 10;
  int *ptr = &x; // ptr now holds address of x

  // Three ways to look at the same information:
  printf("Value of x: %d\n", x);    // 10
  printf("Address of x: %p\n", &x); // Something like 0x7ffd4c2b851c
  printf("Value at address stored in ptr: %d\n", *ptr); // 10

  // Modifying through pointer
  *ptr = 25;
  printf("After modification, x = %d\n", x);

  // Array and pointer arithmetic
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = arr; // Points to first element

  printf("\nArray elements using pointer:\n");
  printf("%d\n", *p);       // 10 (first element)
  printf("%d\n", *(p + 1)); // 20 (second element)
  printf("%d\n", *(p + 2)); // 30 (third element)

  // Dynamic memory allocation
  int *dynamic = (int *)malloc(sizeof(int));
  *dynamic = 42;
  printf("\nDynamically allocated value: %d\n", *dynamic);
  free(dynamic); // Don't forget to free!

  return 0;
}
