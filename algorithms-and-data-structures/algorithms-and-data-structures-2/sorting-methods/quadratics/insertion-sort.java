for(int i=1;i<n;i++){
  int temp=vet[i];
  int j=i-1;
  while((j>=0)&&(vet[j]>temp)){
    vet[j+1]=vet[j];
    j--;
  }
  vet[j+1]=temp;
}

/*
Best when slightly unsorted
stable
in place
*/
