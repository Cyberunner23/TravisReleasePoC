#if defined(WIN32) || defined(_WIN32)
#define LIB_EXPORT __declspec(dllexport)
#else
#define LIB_EXPORT
#endif

extern "C"  int getNumber() { return 9; }