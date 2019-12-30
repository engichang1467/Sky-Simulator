#include "screencasts.h"

#define LEN 8192

// Actually prints the characters
void printv(va_list args, const char* format)
{
  char buf[LEN];
  char* ch=buf;
  vsnprintf(buf,LEN,format,args);
  while (*ch)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,*ch++);
}

// Prints the words on screen
void print(const char* format, ...)
{
  va_list args;
  va_start(args,format);
  printv(args,format);
  va_end(args);
}

// Prints the words at a given X-Y location on screen
void printAt(int x, int y, const char* format, ...)
{
  va_list args;
  glWindowPos2i(x, y);
  va_start(args, format);
  printv(args, format);
  va_end(args);
}
