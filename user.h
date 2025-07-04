#pragma once
#include "common.h"

__attribute__((noreturn)) void exit(void);
void putchar(char ch);
int getchar();
int readfile(const char* filename, char *buf, int len);
int wrtiefile(const char* filename, const char* buf, int len);
