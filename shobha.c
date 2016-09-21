#include<stdio.h>
int main()
{
int m,n,c,d,first[10][10],second[10][10],sum[10][10];
printf("Enter the no of rows and columns of matrix\n");
scanf("%d %d",&m,&n);
printf("Enter the elements in matrix 1:");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
printf("\nmatrix1\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",first[c][d]);
}
printf("\n");
}

printf("\nEnter the elements in matrix 2:");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&second[c][d]);
printf("\nMatrix\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",second[c][d]);
}
printf("\n");
}
printf("\nSum of entered matrix:\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
sum[c][d]=first[c][d]+second[c][d];
printf("%d\t",sum[c][d]);
}
printf("\n");
}
return 0;
}