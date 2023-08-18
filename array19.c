/*
Write a program in C to print all unique elements in an array. Go to the editor

Test Data :

Print all unique elements of an array:

------------------------------------------

Input the number of elements to be stored in the array: 4

Input 4 elements in the array :

element - 0 : 3

element - 1 : 2

element - 2 : 2

element - 3 : 5

Expected Output :

The unique elements found in the array are:

3 5
*/
#include <stdio.h>
int main()
{
int arr[50],n,i,j,c;
printf("Input the number of elements to be stored in the array : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Input %d elements in tha array : \n",n);
    for(i=0;i<n;i++)
    {
        printf("element - %d :",i);
        scanf("%d",&arr[i]);
    }
    printf("Expected Output :\n");
    printf("The unique elements found in the array are : \n");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n+1;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
    
        if(c==0)
        {
            printf("%2d",arr[i]);
        }
    }
}
return 0;
}
