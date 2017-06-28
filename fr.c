#include <stdio.h>
int main()
{
	int a[100],i,j,n,ad=-1,v;
  printf("Enter the no of elements");
  scanf("%d",n);
  printf("Enter elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are: ");
	for(i=0; i<n; i++)
	printf("%d ",a[i]);
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				v=a[j];
				ad=j;
				break;
			}				
		}
	}
	if(ad!=-1)
		printf("%d repeated @ %d index\n",v,ad);
	else
		printf("There is no repeated element\n");
	return 0;
}
