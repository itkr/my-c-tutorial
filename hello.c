#include <stdio.h>
#include <stdlib.h>

int getInt();

int main(int argc, char *argv[]) {
  int i;
  printf("Hello, World\n");
  printf("argc = %d\n", argc);
  for (i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  printf("%d\n", getInt());
  exit(0);
}

int getInt() {
    return 0;
}
