/*
Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10
  */
#include <stdio.h>

void main()
{
   int arr1[100],i,n,p,x;
  
       printf("Input the size of array : ");
       scanf("%d", &n);
   
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
	
	
   printf("Input the value to be inserted : ");
   scanf("%d",&x);
   printf("Input the Position, where the value to be inserted :");
   scanf("%d",&p);
   
   printf("The current list of the array :\n");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);   
   
   for(i=n;i>=p;i--)
      arr1[i]= arr1[i-1];
 
      arr1[p-1]=x;

 
   printf("\n\nAfter Insert the element the new list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n\n");
}
