#include<stdio.h>
void merge_sort(int a[],int beg, int end);
void  merge(int a[],int beg,int mid,int end);
void main()
{
int beg,end,i,a[10],n;
printf("enter number of element");
scanf("%d",&n);
printf("now enter elements :  ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
merge_sort(a,0,n-1);
printf("after sorting \t : ");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

}



void merge_sort(int a[],int beg,int end)
{
  int mid;
  if(beg<end)
    {
      mid=(beg+end)/2;
      merge_sort(a,beg,mid);
      merge_sort(a,mid+1,end);
      merge(a,beg,mid,end);
    }
}

void merge(int a[],int beg,int mid,int end)
{
int k;
int temp[6];
int index=beg;
int i=beg;
int j=mid+1;
while(i<=mid && j<=end)
{

if(a[i]<a[j])
  {
  temp[index]=a[i];
  i=i+1;
  }
else
  {
  temp[index]=a[j];
  j=j+1;
  }

index++;

}

if(i>mid)
{
  while(j<=mid)
   {
    temp[index]=a[j];
    j++;
    index++;
   }
}

else
{
  while(i<=mid)
   {
     temp[index]=a[i];
     i++;
     index++;
   }
}

k=beg;
while(k<index)
{
a[k]=temp[k];
k++;
}


}









