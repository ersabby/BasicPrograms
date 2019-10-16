#include<stdio.h>
void main()
{
	int a[20],i,j,size,temp,k;
	printf("\nEnter size of array: ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("\nEnter element number %d: ",i+1);
		scanf("%d",&a[i]);
	}

	//user-defined normal array
	printf("\nEntered array: [ ");
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("]");
	printf("\n");

	//Sorting an array in ascending order
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("\nSorted array in ascending order: [ ");
        for(int i=0;i<size;i++){
                printf("%d ",a[i]);
        }
	printf("]");
	printf("\n");

	//sorting in descending order
        for(i=0;i<size;i++)
        {
                for(j=i+1;j<size;j++)
                {
                        if(a[i]<a[j])
                        {
                                temp=a[j];
                                a[j]=a[i];
                                a[i]=temp;
                        }
                }
        }
        printf("\nSorted array in descending order: [ ");
        for(int i=0;i<size;i++){
                printf("%d ",a[i]);
        }
        printf("]");
        printf("\n");






	//Reversing an array
	printf("\nReversed array: ");
	printf("[");
	for(k=size-1;k>=0;k--)
	{
		printf("%d ",a[k]);
	}
	printf("]");
	printf("\n");
}

