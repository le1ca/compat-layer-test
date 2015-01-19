#ifndef print_h
#define print_h

void c_print_string(char* s);
void c_print_int(int n);
void c_print_float(float f);

#ifdef COMPAT_RENAME
#define print_string(s) c_print_string(s)
#define print_int(n)    c_print_int(n)
#define print_float(f)  c_print_float(f)
#endif

#endif
