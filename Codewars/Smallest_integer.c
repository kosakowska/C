//Find the smallest integer in the array

#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
  int min=vec[0];
  for(int i=0;i<len;i++)
    {
    if(vec[i]<min) min=vec[i];
  }
    return min;
}
