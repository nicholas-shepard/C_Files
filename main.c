#include <stdio.h>
#include "ItemToPurchase.c"

int main(void) {
	ItemToPurchase* item1;
	ItemToPurchase* item2;
	char c;

	printf("Item 1\n");
	printf("Enter the item name:\n");
	scanf("%[^\n]s", item1->itemName);
	printf("Enter the item price:\n");
	scanf(" %d", item1->itemPrice);
	printf("Enter the item quantity:\n");
	scanf("%d", item1->itemQuantity);

	c = getchar();
	while(c != '\n' && c != EOF) {
   		c = getchar();
	}
	
	printf("\nItem 2\n");
	printf("Enter the item name:\n");
	scanf("%[^\n]s ", item2->itemName);
	printf("Enter the item price:\n");
	scanf("%d", item2->itemPrice);
	printf("Enter the item quantity:\n");
	scanf("%d", item2->itemQuantity);

	printf("TOTAL COST\n");
	PrintItemCost(*item1);
	PrintItemCost(*item2);
	printf("\nTotal: $%d\n", (item1->itemPrice + item2->itemPrice));

	return 0;
}
