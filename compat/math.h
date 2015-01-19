#ifndef math_h
#define math_h

float c_log_10(float a);
float c_log_2(float a);
float c_log(float a, float b);

#ifdef COMPAT_RENAME
#define log_10(a) c_log_10(a)
#define log_2(a)  c_log_2(a)
#define log(a, b) c_log(a, b)
#endif

#endif
