#include <stdio.h>

/* Basic operations for this implementation for the stack is:
    - We are just overriding and changing numbers in the array val[], and keep track of the top number throw sp;

*/
#define MAXVAL 1000
int sp =0; // External variable: default 0, to keep track of the current item.
double val[MAXVAL];

void push(double );

double pop(void);

double peek(void);

void print_stack(void);

int stack_size(void);

int main(){

  push(10);
  push(20);
  push(30);
  pop();
  push(40);

  peek();

  print_stack();

  stack_size();
  return 0;
}

// Push to the stack
void push(double num){
  if(sp < MAXVAL) {
    val[sp++] = num; /* Add the item then inc sp*/
  }else{
    printf("Invalid Operation: Stack Overflow || Can't add to the stack");
  }
}

double pop(void){
  if(sp>0){
    return val[--sp]; /* dec sp first then return the value */
  } else {
    printf("Invalid Operation: Stack is empty");
  }
}

// Get the top number without poping it
double peek(void){
  if(sp>0){
    printf("Top of the stack: %.2f \n",val[--sp]);
    ++sp; /* reupdate the sp*/
  }else {
    printf("Stack is empty");
  }
}

void print_stack(void){
  if(sp==0) {
    printf("Stack is empty");
    return;
  }

  printf("Stack Elements:\n");
  printf("[ ");

  printf("%.2f", val[0]); /* just for formatting purpose [1,2,3,4,5]*/

  for(int i =1; i<sp;++i){
    printf(", %.2f",val[i]);
  }

  printf("] \n");
}

int stack_size(void) {
  if(sp==0){
    printf("Stack is Empty \n");
    return 0;
  }else{
    printf("Stack Size: %d\n",sp);
    return sp; 
  }
}
