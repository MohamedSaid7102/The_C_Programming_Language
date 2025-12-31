#ifndef CALC_H
#define CALC_H

#define NUMBER 0
// Stack headers
void push(double);
double pop(void);
double peek(void);
void print_stack(void);
int stack_size(void);
// getop
int getop(char[]);
// getch
int getch(void);
void ungetch(int);

#endif