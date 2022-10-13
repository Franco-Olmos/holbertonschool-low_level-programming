#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* functions */
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
