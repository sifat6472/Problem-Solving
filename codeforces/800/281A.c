#include <stdio.h>
#include <string.h>

int main() {
    char word[1001];
    scanf("%s", word);
    
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] = word[0] - 32;
    }
    }
    printf("%s", word);
    
    return 0;
}