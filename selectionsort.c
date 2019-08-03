#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void selectionsort(int arr[],int n)
{
  int i,j,min,count=0;
    for(i=0;i<n-1;i++)
    {
      min=i;
      for(j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
          min=j;
        }
      }
        swap(&arr[min],&arr[i]);
        count++;
    }
    printf("no. of swaps required is %d\n",count);
}
int main(){
  int i,n,t,timetaken;
  printf("enter the number of random no.s to be generated\n");
  scanf("%d",&n);
  int arr[n];
  srand(time(0));
  for(i=0;i<n;i++)
  {
    arr[i]=rand();
  }
  i=0;
  printf("array before sorting is\n");
  while(i<n){
    printf("%d\n",arr[i]);
    i++;
  }
  t=clock();
  selectionsort(arr,n);
  t=clock()-t;
  timetaken=t;
  i=0;
  printf("array after sorting is\n");
  while(i<n){
    printf("%d\n",arr[i]);
    i++;
  }
  printf("selectionsort took %d nanoseconds\n",timetaken);
  return 0;
}
