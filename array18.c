/*
Write a program in C to find the second largest element in an array. Go to the editor

Test Data :

Input the size of array : 5

Input 5 elements in the array :

element - 0 : 2

element - 1 : 9

element - 2 : 1

element - 3 : 4

element - 4 : 6

Expected Output :

The Second largest element in the array is : 6
*/
#include <stdio.h>
int main(){
int arr[50],n,i,j=0,l1,l2;

printf("Input the size of array : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Input %d elements in the array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    l1=arr[0];
    for(i=0;i<n;i++)
    {
        if(l1<arr[i])
        l1=arr[i];
        j=i;
    }
          l2=0;
          for(i=0;i<n;i++)
          {
             if(i==j)
             {
                i++;
                i--;
             }
             else if(l2<arr[i])
             {
                  l2=arr[i];
             }
          }
          printf("Expected Output : \n");
          printf("The Second largest element in the array is : %d",l2);
    }
return 0;
}
