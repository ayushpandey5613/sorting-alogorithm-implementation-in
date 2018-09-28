#include<stdio.h>
void heapsort(int a[], int size);
void heapify(int a[],int size,int i);
void main()
{
  int i,a[10],n;
  printf("enter the number of elements  : ");
  scanf("%d",&n);
  printf("now enter the elements : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  heapsort(a,n);
  printf("after sorting  : ");
  for(i=0;i<n;i++)
  {
   printf("%d\t",a[i]);
  } 
}

void heapify(int a[] ,int size ,int i)
{
   int max=i;
   int left=2*i+1;
   int right=2*i+2;
   int temp;
  
   if(left<size && a[left]>a[max])
   {
       max=left;
   }
   
   if(right<size && a[right]>a[max])
   {
      max=right;
   }
   
   if(max!=i)
   {
     temp=a[i];
     a[i]=a[max];
     a[max]=temp;
     heapify(a,size,max);
   }
}  


void heapsort(int a[],int size)
{
  int temp,i;
  
  for(i=size/2-1;i>=0;i--)
  {
     heapify(a,size,i);
  } 
   
  for(i=size-1;i>=0;i--)
  { 
    temp=a[0];
    a[0]=a[i];
    a[i]=temp;
    heapify(a,i,0);
   }
}







