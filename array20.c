/*
Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor

Test Data :

Input the number of elements to be stored in the first array :3

Input 3 elements in the array :

element - 0 : 1

element - 1 : 2

element - 2 : 3

Input the number of elements to be stored in the second array :3

Input 3 elements in the array :

element - 0 : 1

element - 1 : 2

element - 2 : 3

Expected Output :

The merged array in decending order is :

3 3 2 2 1 1
*/
#include <stdio.h>
int main()
{
    int a[50],b[50],c[100];
    int n1,n2,n3;
    int i,j,k;
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d",&n1);
    
    printf("Input %d elements in the array : \n",n1);
    for(i=0;i<n1;i++)
        {
            printf("element - %d : ",i);
            scanf("%d",&a[i]);
        }
    printf("Input the number of elements to be stored in the second array:");
    scanf("%d",&n2);
    
    printf("Input the %d elements in the array : \n",n2);
    for(i=0;i<n2;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&b[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(i=0;i<n3;i++)
    {
        for(k=0;k<n3-1;k++)
        {
            if(c[k]<=c[k+1])
            {
                j=c[k+1];
                c[k+1]=c[k];
                c[k]=j;
            }
        }
    }
        
        printf("Expected Output : \n");
        printf("The merged array in the decending order is : \n");
        for(i=0;i<n3;i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n\n");
    
    
return 0;
}
