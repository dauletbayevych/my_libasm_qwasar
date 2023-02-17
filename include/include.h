#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

#ifndef ASM_H
#define ASM_H

size_t _my_strlen(char*);
int _my_strncmp(char*,char*,int);
int _my_strcmp(char*,char*);
int _my_strcasecmp(char*,char*);
char *_my_strchr(char*,char);
char *_my_index(char*,char);
void *_my_memcpy(char*,char*,int);
void *_my_memset(char*,int,int);
void *_my_memmove(char*,char*,int);
int _my_read(int,char*,int);
int _my_write(int,char*,int);

#endif

#ifndef TEST_H
#define TEST_H

void print_strlen(char* str);
void print_strncmp(char *str);
void print_strcmp(char *str);
void print_strcasecmp(char *str);
void print_strchr(char *str);
void print_index(char *str);
void print_memcpy();
void print_memset();
void print_memmove();
void print_read_write();
void print_test();

#endif

