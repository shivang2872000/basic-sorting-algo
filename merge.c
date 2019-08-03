#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge(int l[],int r[],int arr[],int nl,int nr){
  //nl=number of elements in left
  //nr=number of elements in right
  //m=number of elements in array
  int i=0,j=0,k=0;

  while(i<nl && j<nr)
  {
    if(l[i]<=r[j]){
      arr[k]=l[i];
      i++;
      k++;
    }
    else{
      arr[k]=r[j];
      j++;
      k++;
    }
  }
  while(i<nl){
    arr[k]=l[i];
    i++;
    k++;
  }
  while(j<nr){
    arr[k]=r[j];
    j++;
    k++;
  }
}
int mergesort(int arr[],int n){
  int mid,l,r;
  if(n<2){
    return;
  }
  //n=length of array n
  //mid=middle index
  //l=size of left array
  //r=size of right array
  mid=n/2;
  l=mid;
  r=n-mid;
  int left[l],right[r];
  int i=0,j=0;
  while(i<mid && j<l){
    left[j]=arr[i];
    j++;
    i++;
  }
  int p;
  p=mid;
  j=0;
  while(p<n && j<r)
  {
    right[j]=arr[p];
    j++;
    p++;
  }
  mergesort(left,l);
  mergesort(right,r);
  merge(left,right,arr,l,r);


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
  mergesort(arr,n);
  t=clock()-t;
  timetaken=t;
  i=0;
  printf("array after sorting is\n");
  while(i<n){
    printf("%d\n",arr[i]);
    i++;
  }
  printf("mergesort took %d nanoseconds\n",timetaken);
  return 0;
}
