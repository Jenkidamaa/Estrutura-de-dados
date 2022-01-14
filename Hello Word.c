#include <stddio.h>

void f2(char hello[]) {
  printf("From f2: %d\n". &hello);
  printf("%s\n", hello);
  }
  void f1(char hello[]) {
    printf("from f1: %d\n", &hello);
    f2(hello);
    }
    
    void main() {
      char hello[] = "Hello Word";
      printf("from main: %d\n",&hello);
      f1(hello);
      return;
    }
