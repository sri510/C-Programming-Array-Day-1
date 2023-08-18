/*
Write a program in C to find the second smallest element in an array. Go to the editor

Test Data :

Input the size of array : 5

Input 5 elements in the array (value must be <9999) :

element - 0 : 0

element - 1 : 9

element - 2 : 4

element - 3 : 6

element - 4 : 5

Expected Output :

The Second smallest element in the array is : 4
*/
#include <stdio.h>
int main(){
int arr[50];
int i,n,j=0,s1,s2;
printf("Input the size of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Input %d elements in the array(value must be <9999):\n",n);
    for(i=0;i<n;i++)
    {
        printf("element-%d :",i);
        scanf("%d",&arr[i]);
    }
    s1=arr[0];
    for(i=0;i<n;i++)
    {
     if(s1>arr[i])
     s1=arr[i];
    }
        s2=9999;
        for(i=0;i<n;i++)
        {
            if(i==j)
            {
             i++;
             i--;
            }
        
            else if(s2>arr[i])
            {
                s2=arr[i];
            }
        }
        printf("Expected Output:\n");
        printf("The Second smallest elemnet in th array is : %d",s2);
    }

return 0;
}
