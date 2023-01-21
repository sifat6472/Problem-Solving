#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[101];
    scanf("%s", str);
    
    int alpha[26] = {0};
    for (int i = 0; i < strlen(str); i++) {
        int c = str[i];
        if (c >= 'a' && c <= 'z') {
            alpha[c - 'a'] = 1;
        } else if (c >= 'A' && c <= 'Z') {
            alpha[c - 'A'] = 1;
        }
    }
    
    int isPangram = 1;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == 0) {
            isPangram = 0;
            break;
        }
    }
    
    if (isPangram) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}