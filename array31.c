/*
Write a program in C to insert the values in the array (sorted list).

Test Data :

Insert New value in the sorted array :

-----------------------------------------

Input the size of array : 5

Input 5 elements in the array in ascending order:

element - 0 : 2

element - 1 : 5

element - 2 : 7

element - 3 : 9

element - 4 : 11

Input the value to be inserted : 8

The exist array list is :

2 5 7 9 11

After Insert the list is :

2 5 7 8 9 11
*/
#include <stdio.h>

int main()
{
   int arr1[100],i,n,p,inval;
       printf("\n\nInsert New value in the sorted array :\n");
       printf("-----------------------------------------\n");
    printf("Input the size of array : ");
    scanf("%d", &n);
/* Stored values into the array*/
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&inval);
   printf("The exist array list is :\n");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);
   /* Determine the position where the new value will be insert.*/
   for(i=0;i<n;i++)
   {
   	
    if(inval<arr1[i])
     {
       p = i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }
   /* move all data at right side of the array */
   for(i=n+1;i>=p;i--)
      arr1[i]= arr1[i-1];
   /* insert value at the proper position */
      arr1[p]=inval;
      printf("\n\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}
