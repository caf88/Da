#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>
bool alpha(char* x, char* y) {
    int i = 0;
    while (x[i] != '\0' && y[i] != '\0') {
        if (x[i] < y[i]) return true;
        if (x[i] > y[i]) return false;
        i++;
    }
    return strlen(x) <= strlen(y);
}

int main() {
    char text[100];
    char done[100][100] = { 0 }; 
    scanf("%[^\n]",text);
    char* x = strtok(text, " ");
    int k = 0;

    while (x != NULL) {
        bool inserted = false;
        for (int i = 0; i < k; i++) {
            if (strlen(x) > strlen(done[i]) || (strlen(x) == strlen(done[i]) && alpha(x, done[i]))) {
                for (int j = k; j > i; j--) {
                    strcpy(done[j], done[j - 1]);
                }
                strcpy(done[i], x);
                inserted = true;
                break;
            }
        }

        if (!inserted) {
            strcpy(done[k], x);
        }

        k++;
        x = strtok(NULL, " ");
    }

    for (int i = 0; i < k; i++) {
        printf("%s\n", done[i]);
    }

    return 0;
}

