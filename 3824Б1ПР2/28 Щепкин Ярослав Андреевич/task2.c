#include <stdio.h>
#include <locale.h>
long long task2(unsigned A[], size_t n) {
    if (n < 3) {
        return -1; 
    }
    long long max = -1; 
    for (size_t i = 1; i < n - 1; ++i) { 
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) { 
            if (A[i] > max) {
                max = A[i]; 
            }
        }
    }
    return (max == -1) ? -1 : max; 
}
int main() {
    setlocale(LC_ALL, "rus");
    unsigned A[] = { 1, 3, 2, 4, 1, 5 };
    size_t n = sizeof(A) / sizeof(A[0]);

    long long result = task2(A, n);
    printf("максимум: %lld\n", result);

    return 0;
}
