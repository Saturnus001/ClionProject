#include <stdio.h>
#include <string.h>

int main() {

  int i, j, k, len;
  char str[100];
  char c;

  struct Test {
    int a;
    char b;
  };

  for (i = 0; i < 10; i++) {
    if (i == 5) {
      do {
        for (j = 0; j < 5; j++) {
          switch (j) {
          case 1:
            strcpy(str, "Hello");
            break ;
          default :
            strcpy(str, "World");
          }
          printf("%s", str);
        }
        k++;
      } while (k < 6);
    } else
      printf("Hi");
  }

  union Data {
    int x;
    char y;
  };

  len = strlen(str);

  if (len > 0)
    printf("%s", str);

  for (i = 0; i < 20; i++) {
    if (i % 2 == 0)
      continue ;
    else
      break ;
  }

  return 0;
}