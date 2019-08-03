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
