// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

char* task3(char* s) {
    int max_length = strlen(s);
    char* result = (char*)malloc(max_length + 1); 
    int j = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        
        if (islower(s[i])) {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0'; 
    return result; 
}

int main() {
    setlocale(LC_ALL, "rus");
    char s[] = "aBc1D2e34F56g";
    char* str = task3(s);
    printf("Результат: %s\n", str);
    free(str); 
    return 0;
}
