//Sum Arrays

#include <stddef.h>

int sum_array(const int *values, size_t count)
  {
  float ans=0;
  for(int i=0;i<count;i++)
    {
    ans+=values[i];
  }
  return ans;
}
