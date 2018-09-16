#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int num = 3500000000;
  char * num_pointer = &num;

  printf("Hexed number: %x \n", num_pointer);

  for (int i = 0; i < sizeof(num); i++) {
    printf("Individual byte: %d, Hex: %hhx \n", i, num_pointer);
    num_pointer ++;
  }

  * num_pointer = &num;
  printf("Hexed number: %x \n", num_pointer);
  //incrementing by 1
  for (int i = 0; i < sizeof(num); i++) {
    printf("Individual byte: %d, Hex: %hhx \n", i, num_pointer);
    * num_pointer ++;
  }

  printf("Hexed number: %x \n", num_pointer);
  //incrementing by 16
  for (int i = 0; i < sizeof(num); i++) {
    printf("Individual byte: %d, Hex: %hhx \n", i, num_pointer);
    num_pointer += 16;
  }
  return 0;
}
