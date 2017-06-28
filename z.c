#include<stdio.h>
int minsum(int a[], int s)
{
    int i,j;
    int ms, m1, m2;
    if(s<2)
    {
        printf("Invalid input");
        return;
    }
    ms = a[0] + a[1];
    m1 = 0;
    m2 = 1;
    for(i=0;i<(s-1);i++)
    {
        for(j=i+1;j<size;j++)
        {
            int sum = a[i] + a[j];
            if(abs(ms) > abs(sum))
            {
                ms =  sum;
                m1 = i;
                m2 = j;
            }
        }
    }
    printf("The elements are:- %d %d",a[m1],a[m2]);
}
void main()
{
int a[100],s;
printf("Enter the elements in array:");
scanf("%d",s);
printf("enter the elements:");
for(int i=0;i<s;i++)
scanf("%d",&a[i]);
minsum(a,s);
}
