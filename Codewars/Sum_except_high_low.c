//Sum without highest and lowest number

int sum(int* numbers, int numbersCount)
{
  if(numbersCount<3) return 0;
  int min=numbers[0];
  int max=numbers[0];
  int suma=0;
  
  for(int i=0;i<numbersCount;i++)
    {
    if(numbers[i]<min) min=numbers[i];
    if(numbers[i]>max) max=numbers[i];
    suma+=numbers[i];
  }
  return suma-min-max;
}
