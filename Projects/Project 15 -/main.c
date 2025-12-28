#include <stdio.h>


int main(){

  char c;

  while ((c=getchar())!= EOF)
  {
    printf("%c",c);
    if(c=='c') goto end;
  }

  end: printf("Hello");
  

  return 0;
}