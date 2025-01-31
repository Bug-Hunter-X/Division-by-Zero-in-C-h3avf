#include <stdio.h>

int main() {
  int a = 10;
  int b = 0;
  int c = 0;

  if (b != 0) {
    c = a / b;
    printf("Result: %d\n", c);
  } else {
    printf("Error: Division by zero\n");
  }

  return 0;
}
