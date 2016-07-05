#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int i=0,j=0,k=0;
char a[100]="This is an Example";
char b[10][10];
clrscr();
do
{
b[k][j]=a[i];
i++;
j++;
if(a[i]==' ')
{
b[k][j]='\0';
k++;
j=0;
}
}
while(a[i]!='\0');
b[k][j]='\0';
 for(i=0;i<=k;i++)
 {
 if(i%2==0)
 printf("%s ",strrev (b[i]));
 else
 printf("%s ",b[i]);
 }
 getch();
 }
