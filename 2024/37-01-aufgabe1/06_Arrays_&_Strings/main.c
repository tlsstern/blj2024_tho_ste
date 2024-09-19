#include <stdio.h>
#include <string.h>

void wordTwist();

void wordSquare();

int main(void) {
    wordTwist();
    wordSquare();
    return 0;
}

//6.2.1
void wordTwist() {
    unsigned char word[100];
    printf("Enter word: \n");
    scanf("%s", word);
    _strrev(word);
    printf("%s\n", word);
}

//6.2.2
void wordSquare() {
    unsigned char word[100];
    printf("Enter word: \n");
    scanf("%s", word);
    //length of word
    int length = strlen(word);
    printf("Das Wordquadrat:\n");
    printf("%s\n", word);
    int spaceCount = length - 2;
    char space = ' ' * spaceCount;
    for (int i = 1; i < length - 1; i++) {
        printf("%c", word[i]);
        for (int j = 0; j < spaceCount; j++) {
            printf(" ");
        }
        printf("%c\n", word[length - i - 1]);

    }
    _strrev(word);

    printf("%s\n", word);
}


