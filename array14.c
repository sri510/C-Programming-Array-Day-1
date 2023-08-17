/*
Write a program in C to find the sum of all elements of the array.

Input the number of elements to be stored in the array :3

Input 3 elements in the array :

element - 0 : 2

element - 1 : 5

element - 2 : 8

Expected Output :

Sum of all elements stored in the array is : 15

*/
#include <stdio.h>
int main()
{
int arr[100],i,sum=0;
printf("Input 3 elements in the array:\n");
//scanf("%d",&arr[i]);
for(i=0;i<3;i++)
{
    printf("elements-%d:",i);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("Sum of all elements stored in the array is : %d",sum);
return 0;
}
