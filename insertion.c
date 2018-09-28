#include<stdio.h>
void insert_sort(int a[],int n);
void main()
{
  int i,a[5],n;
  printf("enter the number of element");
  scanf("%d",&n);
  printf("now, enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  insert_sort(a,n);
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  } 
}


void insert_sort(int a[],int n)
{
  int t,i,j,l;
  for(i=1;i<n;i++)
  {
     t=a[i];
     j=i-1;
     while(j>=0 && a[j]>t)
     {
       l=a[j];
      a[j+1]=l;
       j=j-1;
     }
     a[j+1]=t;
  }
 
}


