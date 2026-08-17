for(int i=0;i<n-1;i++){
  smallest=i;
  for(int j=i+1;j<n;j++){
    if(array[j]<array[smallest]){
      smallest=j;
    }
  }
  swap(i,smallest);
}

/*
best when majorly unsorted
not stable
in place
*/
