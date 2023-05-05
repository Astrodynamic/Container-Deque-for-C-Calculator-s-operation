#ifndef DEQUE_INCLUDE_DEQUE_H_
#define DEQUE_INCLUDE_DEQUE_H_

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union {
  int operation;
  double number;
} token_t;

typedef enum { NUMBER, OPERATION, VARIABLE } e_type_t;

typedef struct lexeme_t {
  e_type_t type;
  token_t token;
  struct lexeme_t *next;
  struct lexeme_t *prev;
} lexeme_t;

typedef struct {
  lexeme_t *head;
  lexeme_t *tail;
} Deque;

Deque *init_deque(void);
lexeme_t *init_lexem(int type, va_list args);
void d_push_f(Deque *deque, int type, ...);
void d_push_b(Deque *deque, int type, ...);
void d_push_lexem_f(Deque *deque, lexeme_t *lexeme);
void d_push_lexem_b(Deque *deque, lexeme_t *lexeme);
bool d_peek_f(Deque *deque, unsigned int *type, token_t *t);
bool d_peek_b(Deque *deque, unsigned int *type, token_t *t);
lexeme_t *d_pop_lexem_f(Deque *deque);
lexeme_t *d_pop_lexem_b(Deque *deque);
bool d_get_operation_f(Deque *deque, int *value);
bool d_get_operation_b(Deque *deque, int *value);
bool d_get_number_f(Deque *deque, double *value);
bool d_get_number_b(Deque *deque, double *value);
int d_get_type_f(Deque *deque);
int d_get_type_b(Deque *deque);
void d_free(Deque *deque);

#endif  // DEQUE_INCLUDE_DEQUE_H_
