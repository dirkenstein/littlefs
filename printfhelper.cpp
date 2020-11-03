#include <Arduino.h>
#include <stdarg.h> 

static char * buf  = NULL;;
extern "C" {
void serprintf (const char * format, ...)
{
  if (!buf) buf = malloc(2048);
  va_list args;
  va_start (args, format);
  vsnprintf (buf, 2048, format, args);
  va_end (args);
  Serial.print(buf);
  Serial.flush();
}

}
