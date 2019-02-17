#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
   int dataVal;
   struct IntNode_struct* nextNodePtr;
} IntNode;


void IntNode_Create(IntNode* thisNode, int dataInit, IntNode* nextLoc) {
   thisNode->dataVal = dataInit;
   thisNode->nextNodePtr = nextLoc;
}

void IntNode_InsertAfter(IntNode* thisNode, IntNode* newNode) {
   IntNode* tmpNext = NULL;

   tmpNext = thisNode->nextNodePtr;
   thisNode->nextNodePtr = newNode;
   newNode->nextNodePtr = tmpNext;
}


IntNode* IntNode_GetNext(IntNode* thisNode) {
   return thisNode->nextNodePtr;
}

int IntNode_GetDataVal(IntNode* thisNode) {
   return thisNode->dataVal;
}

int main(void) {
   
   printf("Find the largest element using Dynamic Memory Allocation:\n");
   printf("Input total number of elements (1 to 100): \n");
   
   int numElements;
   
   scanf("%d", &numElements);
   
   IntNode* headObj = NULL;
   IntNode* currObj = NULL;
   IntNode* lastObj = NULL;
   int i, tempNum;
   
   //if (numElements != 0) {
   
      //printf("Value: \n");
   
      //scanf("%d", &tempNum);
   
   //}
   
   //if (numElements == 0) {
      //numElements = 1;
   //}

   headObj = (IntNode*)malloc(sizeof(IntNode));
   IntNode_Create(headObj, -1, NULL);
   lastObj = headObj;
   
   if (numElements == 0) {
      IntNode_Create(currObj, -1, NULL);
   }

   for (i = 0; i < numElements; ++i) {
      currObj = (IntNode*)malloc(sizeof(IntNode));
      printf("Value: \n");
      scanf("%d", &tempNum);
      IntNode_Create(currObj, tempNum, NULL);
      IntNode_InsertAfter(lastObj, currObj);
      lastObj = currObj;
   }

   currObj = headObj;
   
   printf("You entered: ");
   
   currObj = IntNode_GetNext(currObj);
   
   if (numElements != 0) {
   
      while (currObj != NULL) {
         printf("%d ", IntNode_GetDataVal(currObj));
         currObj = IntNode_GetNext(currObj);
      }
   
   }
   printf("\n");

   currObj = headObj;
   
   currObj = IntNode_GetNext(currObj);
   
   int max = currObj->dataVal;
   
   while (currObj != NULL) {

      if (currObj->dataVal > max) {
         max = currObj->dataVal;
      }

      currObj = IntNode_GetNext(currObj);
   }
   printf("The Largest element is: %d\n", max);

   return 0;
}
