//Grasshopper - Grade book

char get_grade(int a, int b, int c) {
  float avg=(a+b+c)/3;
  if(avg>=90) return 'A';
  else if(avg>=80)return 'B';
  else if(avg>=70)return 'C';
  else if(avg>=60)return 'D';
  else if(avg<60)return 'F';
}
