#include<stdlib.h>
#include<stdio.h>
struct node {
   int data;
   struct node * next;
};
typedef struct node item;
void main() {
   item * temp, * head;
   int i,n,num, value;

   head = NULL;
   printf("How many number of node be created ? ");
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
      temp = (item *)malloc(sizeof(item));
      scanf("%d",&num);
      temp->data = num;
      temp->next  = head;
      head = temp;
   }
   printf("Please enter the value of ITEM");
   scanf("%d",&value);
   temp = head;
   while(temp) {
        if(value==temp->data)
        {
            printf(" Element Found");
            exit(0);
        }

      temp = temp->next ;
   }
   printf(" Element Not Found");
}
