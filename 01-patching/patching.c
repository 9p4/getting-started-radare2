#include <stdio.h>

void canttouchthis(int a) {
  if (a == 10)
    printf("Nice\n");
  else
    printf("Can't touch this.\n");
}

int main() {
  canttouchthis(5);
  return 0;
}
