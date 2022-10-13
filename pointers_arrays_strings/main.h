#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <unistd.h>
#include <stdio.h>

/* first project */ 
int _putchar(char);
void reset_to_98(int *);
void swap_int(int *, int *);
int _strlen(char *);
void _puts(char *);
void print_rev(char *);
void rev_string(char *);
void puts2(char *);
void puts_half(char *);
void print_array(int *, int);
char *_strcpy(char *, char *);

/* second project */
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

/* third project */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
