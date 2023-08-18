/*
Write a program in C to separate odd and even integers in separate arrays. Go to the editor

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

Expected Output :

The Even elements are :

42 56 32

The Odd elements are :

25 47
*/
#include <stdio.h>
int main()
{
int a[10],b[10],c[20];
int n,i,j=0,k=0;
printf("Input the number of elements to be stored in the array:");
scanf("%d",&n);

printf("Input %d elements in the array:\n",n);
for(i=0;i<n;i++)
{
    printf("element %d in the array:",i),
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        b[j]=a[i];
        j++;
    }
    else
    {
        c[k]=a[j];
        k++;
    }
}
printf("The Even elements are:\n");
for(i=0;i<j;i++)
{
    printf("%d",b[i]);
}
printf("\n");
printf("The Odd elements are:\n");
for(i=0;i<k;i++)
printf("%d",c[i]);

return 0;
}
