# program11
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,a[],i;
printf("\n Enter number of pairs:");
scanf("%d",&n);
printf("\n Number of students:%d",(2*n));
for(i=0;i<n;i++)
{
a[i]=i++;
printf("The pairs are: %d %d",a[i],a[i-1]);
}
getch();
}
