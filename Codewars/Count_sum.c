//Count of positives / sum of negatives

#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
  
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
  int even_count=0, odd_sum=0;
  for(int i=0;i<count;i++)
    {
    if(values[i]!=0)
      {
      if(values[i]>0) even_count++;
      else odd_sum+=values[i];
    }
  }
  *positivesCount=even_count;
  *negativesSum=odd_sum;
}  
