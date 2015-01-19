#ifndef input_h
#define input_h

int c_read_int();
float c_read_float();

#ifdef COMPAT_RENAME
#define read_int()   c_read_int()
#define read_float() c_read_float()
#endif

#endif
