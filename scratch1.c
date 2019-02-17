#include <stdio.h>

typedef struct ThreeInts_struct {
   int1;
   int2;
   int3;
} ThreeInts

void DoubleEach(ThreeInts* theseInts) {

   *theseInts->int1 *= 2;
   *theseInts->int2 *= 2;
   *theseInts->int3 *= 2;

}

int main(void) {

   ThreeInts* myInts;

   myInts = (ThreeInts*)malloc(sizeof(ThreeInts));

   myInts->int1 = 5;
   myInts->int2 = 10;
   myInts->int3 = 15;

   
   DoubleEach(&myInts);

   printf("%d", myInts->int1);

}
