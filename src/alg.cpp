@@ -2,5 +2,21 @@

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int count = 0;
  int i = 0, j = size - 1; 
  while(i < j) {
    int mid = i + (j - i) / 2;
      if(arr[mid] == value)
        for(int i = 0; i < size; i++){
          if(arr[i] == value){
            count++;
          }
        }
      else if(arr[mid] > value)
        j = mid;
      else
        i = mid + 1;
  }
  return count;
  //return 0;
}
