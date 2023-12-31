#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int rn = rand() % 10;

  int input = 0;
  scanf("%d", &input);
  
  if (input == rn) {
    printf("You guessed correctly!");
  } else {
    printf("You guessed incorrectly.");
  }

  return 0;
}
