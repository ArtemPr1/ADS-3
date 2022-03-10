@@ -12,7 +12,7 @@ int cbinsearch(int *arr, int size, int value) {
          count++;
         }
      }
      if (arr[mid + 1] == value) {
      while (arr[mid + 1] == value) {
          count++;
          mid++;
        }
