//Find the first non-consecutive number

#include <stdbool.h>

bool firstNonConsecutive (const int arr[], const int length, int *first) {
  
  for(int i=0;i<length-1;i++)
    {
    if(arr[i]+1!=arr[i+1])
      {
      *first=arr[i+1];
      return true;
  }
  }
  
  
  return false;
}
