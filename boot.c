#include <stdio.h>

#if defined(__gnu_linux__)
    char *nameOs = "Linux";
#elif defined(__WIN32__) || defined(__WIN64__)
    char *nameOs = " Windows";
#else
    char *nameOs = "unknown os";
#endif

int main() {
    printf("OS: %s",nameOs);
    return 0;
} 
