#include <stdio.h>

int DST_BUFFER_SIZE = 120;

int bad_strcpy(src, dst) {
    n = DST_BUFFER_SIZE;
    if ((dst != NULL) && (src != NULL) && (strlen(dst)+strlen(src)+1 <= n))
    {
        // ruleid: insecure-use-strcat-fn
        strcat(dst, src);
        
        // ruleid: insecure-use-strcat-fn
        strncat(dst, src, 100);
    }
}

int main() {
   printf("Hello, World!");
   return 0;
}

