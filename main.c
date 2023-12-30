#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int rn = rand() % 10;

  int input = 0;
  scanf("%d", &input);
  
  if (input == rn) {
    printf("You guessed the number");
  } else {
    printf("You didn't guess the number correctly");
  }

  return 0;
}
