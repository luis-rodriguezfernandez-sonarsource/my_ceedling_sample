
#include "Demo.h"

int run_demo_1(int a, int b)
{
  int sum = 2 * a + b;
  if (sum < 0) {
      sum = 0; // Ensure non-negative result
  }
  printf("Running demo 1 with a=%d, b=%d, result=%d\n", a, b, sum);
  return sum;
}

int run_demo_2(int a, int b)
{
    int sum = 2 * a + b;
    if (sum < 0) {
        sum = 0; // Ensure non-negative result
    }
    printf("Running demo 2 with a=%d, b=%d, result=%d\n", a, b, sum);
  return sum;
}
