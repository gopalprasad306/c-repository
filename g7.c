// 7) Write a C program to insert an element at desired position in an array. 
#include<stdio.h>
main()
{
	char a[10],ch;
	int pos,i;
	printf("enter a string\n");
	scanf("%s",a);
	printf("enter a position and character which u want to insert\n");
	scanf("%d %c",&pos,&ch);
	for(i=0;a[i];i++);
	for(i=i+1;i!=pos;i--)
		a[i]=a[i-1];
	a[i]=ch;
	printf("string is %s\n",a);
}
