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

/// @brief getch() first checks if there are characters in the buffer. If so, it returns from buffer. Otherwise, it reads from standard input.
/// @param  no
/// @return single char, eaither from the buffer or from the inputstream
int getch(void);

/// @brief ungetch() pushes a character back into the buffer for future getch() calls.
/// @param c | number to be pushed.
void ungetch(int);

#endif