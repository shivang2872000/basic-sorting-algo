#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void bubblesort(int *arr,int n){
  int i,j,i1=0;
  printf("array before sorting \n");
  for(i=0;i<n;i++){
    printf("%d\n",*(arr+i));
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(*(arr+j)<*(arr+i)){
        swap((arr+j),(arr+i));
        i1++;
      }
    }
  }
  printf("aray after sorting is\n");
  for(i=0;i<n;i++){
    printf("%d\n",*(arr+i));
  }
  printf("number of swaps required is %d\n",i1);
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
  t=clock();
  bubblesort(arr,n);
  t=clock()-t;
  timetaken=t;
  printf("Bubblesort took %d nanoseconds\n",timetaken);
  return 0;
}
