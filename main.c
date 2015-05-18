#include <stdio.h>
#include <omp.h>

void PrintSomething() {
    printf("Hello, {thread num %d} World!\n", omp_get_thread_num());
    printf("Test");
    printf("Test");
}

int main() {
#pragma omp parallel
    {
        PrintSomething();
    }

    return 0;
}
