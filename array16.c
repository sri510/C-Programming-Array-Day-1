/*
Write a program in C to sort elements of the array in descending order. Go to the editor

Test Data :

Input the size of array : 3

Input 3 elements in the array :

element - 0 : 5

element - 1 : 9

element - 2 : 1

Expected Output :

Elements of the array in sorted descending order:

9 5 1

*/
#include <stdio.h>
int main()
{
int arr[20],i,j,n,temp;
printf("Input the size of array :\n");
scanf("%d",&n);
printf("input %d element in the array: \n",n);
for(i=0;i<n;i++)
{
    printf("element -%d:",i);
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[i];
            arr[j]=temp;
        }
    }
}
printf("Expected output:\n");
printf("Elements of the array in sorted descending order:\n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}
