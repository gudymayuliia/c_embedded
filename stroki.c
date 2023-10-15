#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[] = "123456";
    char str2[] = "ABCDEF";

    if (strlen(str1) != strlen(str2)) {
        printf("Помилка: рядки мають різну довжину\n");
        return 1;
    }
    else {
        char newstr[strlen(str1)];

        for (int i = 0; i < strlen(str1); i++) {
            newstr[i * 2] = str1[i];
            newstr[i * 2 + 1] = str2[i];
    }
        printf("%s\n", newstr);
    }
    return 0;
}
