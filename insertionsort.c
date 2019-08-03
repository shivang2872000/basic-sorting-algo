#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void insertionsort(int arr[],int n){
  int i,key,j;
  for (i=1;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
      {
        arr[j+1]=arr[j];
        j=j-1;
      }
      arr[j+1]=key;
  }
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
  insertionsort(arr,n);
  t=clock()-t;
  timetaken=t;
  i=0;
  printf("array after sorting is\n");
  while(i<n){
    printf("%d\n",arr[i]);
    i++;
  }
  printf("insertionsort took %d nanoseconds\n",timetaken);
  return 0;
}
