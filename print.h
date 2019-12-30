#ifndef PRINT_H
#define PRINT_H

#include <cstdarg>

void printv(va_list args, const char* format);
void print(const char* format, ...);
void printAt(int x, int y, const char* format, ...);

#endif // PRINT_H