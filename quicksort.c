#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int partition(int array2[],int start,int end){
  int pivot,i=0,pindex,count=0;
  pindex=start;
  pivot=array2[end];
  for(i=start;i<=end-1;i++){
    if(array2[i]<=pivot){
      swap(&array2[i],&array2[pindex]);
      pindex++;
      count++;
    }
  }
    swap(&array2[pindex],&array2[end]);
    count++;
    printf("number of swaps done are %d\n",count);
    return pindex;
}
void quicksort(int array1[],int start,int end){
  if(start<end){
  int pindex=partition(array1,start,end);
  quicksort(array1,start,pindex-1);
  quicksort(array1,pindex+1,end);
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
  quicksort(arr,0,n);
  t=clock()-t;
  timetaken=t;
  i=0;
  printf("array after sorting is\n");
  while(i<n){
    printf("%d\n",arr[i]);
    i++;
  }
  printf("quicksort took %d nanoseconds\n",timetaken);
  return 0;
}
