// 6) Write a C program to delete an element at desired position from an array.
#include<stdio.h>
main()
{
	int a[6],ele,i,pos;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	printf("enter position of element\n");
	scanf("%d",&pos);
	for(i=pos;i<ele;i++)
		a[i]=a[i+1];
	ele--;
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
