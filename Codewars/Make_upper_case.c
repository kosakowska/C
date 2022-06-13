//MakeUpperCase

char *makeUpperCase (char *string)
  {
  int len = strlen(string);
  for(int i=0;i<len;i++)
    {
    if(string[i]>97&&string[i]<122){
    string[i]=string[i]-32;
    }
  }
  return string;
}
