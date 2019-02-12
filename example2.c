#include <stdio.h>

int main()
{
  int* pc;
  int c;
  c = 22;

  printf("Address of c: %p\n", (void*)&c);
  printf("Value of c: %d\n\n", c);

  pc = &c;

  printf("Address pc points: %p\n",(void*)pc);
  printf("Content pc points: %d\n\n", *pc);

  c = 11;

  printf("Address pc points: %p\n",(void*)pc);
  printf("Content pc points: %d\n\n", *pc);

  *pc = 2;

  printf("Address of c:%p\n",(void*)&c);
  printf("Value of c:%d\n\n",c);


  return 0;

}
