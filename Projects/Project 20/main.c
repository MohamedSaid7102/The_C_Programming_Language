#include <stdio.h>


void swap(int *a, int *b);

int strlen(char*);

int strlen2(char* );

void strcpy(char*, char*);

int strequal(char* , char* );

int strcmp(char* , char* );

int main(){

  // int a = 5, b = 10;
  // swap(&a,&b);
  // printf("a: %2d b: %2d", a,b);
  // printf("%p",&a);

  char name[] = "Said";
  char name2[] = "Saidm";
  int nameLeng = strlen2(name);
  strcpy(name,name2);
  int result = strequal(name,name2);
  printf(result ? "Match \n" : "Missmatch \n");
  printf("%d ", strcmp(name,name2));

  
  return 0;
} 

void swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}


/// @brief getting the string length
/// @param s 
/// @return string length
int strlen(char* s){
  int n;
  for(n =0; (*s != '\0');s++,n++);
  return n;
}

/// @brief another impl of strlen 
/// @param s 
/// @return string length
int strlen2(char* s){
  char* p = s; /* Pointer p that will point at the start of array s */
  while(*p!='\0') 
    ++p;
  return p -s;
}

/// @brief copies array t in to array s
/// @param s 
/// @param t 
void strcpy(char *s, char *t){
  while(*s++ = *t++);

  /*
    Another version 
    while((*s++ = *t++) != '\0');
  */
}

/// @brief Compare 2 strings
/// @param s 
/// @param t 
/// @return 0 if not match and 1 otherwise 
int strequal(char* s, char* t){
  while(*s++ == *t++) 
    if(*s == '\0') return 1;
  return 0;
}

/// @brief compare 2 strings together
/// @param s 
/// @param t 
/// @return 
int strcmp(char* s, char* t){
  for( ; *s == *t; s++, t++){
    if(*s == '\0') {
      return 0; // equal
    }
  }
  return *s - *t;
}