#include <stdio.h> 
#include <locale.h> 
 
int main() { 
    setlocale(LC_ALL, "rus"); 
 
    int A[] = { 1, 0, 2, 3, 0, 5, 5, 0, 7 }; 
    int n = sizeof(A) / sizeof(A[0]); 
 
    int lastZero = -1; 
    int secondLast = -1; 
 
    for (int i = 0; i < n; i++) { 
        if (A[i] == 0) { 
            secondLast = lastZero; 
            lastZero = i; 
        } 
    } 
 
    if (secondLast != -1 && lastZero != -1) { 
        int sum = 0; 
        for (int i = secondLast + 1; i < lastZero; i++) { 
            sum += A[i]; 
        } 
        printf("Сумма элементов последних двух нулей: %d\n", sum); 
    } 
    else { 
        printf("мало нулей \n"); 
    } 
    return 0; 
}
