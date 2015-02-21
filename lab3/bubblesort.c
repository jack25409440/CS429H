/** Author: Xiaohui Chen
  * eid: xc2388
  */
#include<stdio.h>
void bubble_a(int *data, int count);
int main()
{
int arr[10]={8,10,6,4,9,3,7,1,5,2};
int *p=arr;
int count=10;
int k;
bubble_a(p,10);
for(k=0;k<count;k++)
{
   printf("%d\n",arr[k]);
}

return 0;
}

void bubble_a(int *data ,int count)
{
    int i,last;
    for(last=count-1;last>0;last--)
    {
      i=0;
      while(i<last)
      {
       int *tmp=data+i;
       int *tmp1=data+i+1;
       i+=1;
       if(*tmp>*tmp1)
       {
          int t=*tmp;
          *tmp=*tmp1;
          *tmp1=t;
        }
      }
     }
}
