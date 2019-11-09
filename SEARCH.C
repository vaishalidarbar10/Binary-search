#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,item,loc=-1;
clrscr();
printf("\nEnter the no. of element:");
scanf("%d",&n);
printf("Enter the no.:\n");
for(i=0;i<=n-1;i++);
{
scanf("%d",&a[i]);
}
printf("Enter the no. to be seach:\n");
scanf("%d",&item);
for(i=0;i<=n-1;i++);
{
if(item==a[i])
{
loc = i;
}

}
if(loc>=0)
printf("\n%d is found in position %d",item,loc+1);
else
printf("\nitem doesnot exits");
getch();
}