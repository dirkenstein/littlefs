#ifndef ASSER_HELPER_H
#define ASSERT_HELPER_H


void assert_3(const char *__file, int __lineno, const char *__sexp );
#define assert( a ) if (!(a)) { assert_3(__FILE__, __LINE__,  #a); }

#endif

