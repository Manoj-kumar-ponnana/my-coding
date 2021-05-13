/*program for inserting,deleting,searching,sorting  in ascending and order of a given array*/
#include<stdio.h>
void main()
{
	int arr[50],i,j,n,pos,val,choice;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the values of the array:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter choice as 1 for inserting the array \n");
	printf("enter choice as 2 for deleting the array \n");
	printf("enter choice as 3 for sorting in assending order of the array \n");
	printf("enter choice as 4 for sorting in descending order of the array \n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//inserting
			printf("enter the value to insert:");
			scanf("%d",&val);
			printf("enter the position of index to insert :");
			scanf("%d",&pos);
			for(i=n-1;i>=pos;i--)
			{
				arr[i+1]=arr[i];
			}
			arr[pos]=val;
			n++;
			printf("the elements in array after inserting:");
			for(i=0;i<n;i++)
				printf("%d\t",arr[i]);
		break;
		case 2:
			//deleting
			printf("enter the position of index to deleting :");
			scanf("%d",&pos);
			for(i=pos;i<n;i++)
				arr[i]=arr[i+1];
			n--;
			printf("the elements of array after deleting :");
			for(i=0;i<n;i++)
				printf("%d\t",arr[i]);
		break;
		case 3:
			//sorting ascending order
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						pos=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=pos;
					}
				}
			}
			printf("the elements after sorting in ascending order :");
			for(i=0;i<n;i++)
			printf("%d\t",arr[i]);
		break;
		case 4:
			//sorting in decending order
			for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]<arr[j+1])
					{
						pos=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=pos;
					}
				}
			}
			printf("the elements after sorting in decsending order :");
			for(i=0;i<n;i++)
			printf("%d\t",arr[i]);
		break;
		default:
			printf("ERROR!!!");
			printf("enter a valid choice between 1to 4");
		break;
    }
}
