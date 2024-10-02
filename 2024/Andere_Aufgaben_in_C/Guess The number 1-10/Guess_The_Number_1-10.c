#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int yes_no = 1;

int main(void) {
    do {
        srand(time(NULL)); 
        int randomNumber = (rand() % 10) + 1; 
        printf("Bitte raten Sie eine Zahl zwischen 1-10\n");
        
        int guessed_number = 0;
        scanf("%d", &guessed_number);
    
        while(guessed_number != randomNumber){
            if (guessed_number > randomNumber)
            {
                printf("Deine Zal ist hocher \n");
                scanf("%d", &guessed_number);
            }
            else if (guessed_number < randomNumber){
                printf("Deine Zahl ist kleiner\n");
                scanf("%d", &guessed_number);
            }
        }
        printf("Gut gemacht du hast die Zahl gefunden \n");
        printf("Drucke 1 fur nochmal, sonst drucke 2 \n");
        scanf("%d", &yes_no);
    } while(yes_no == 1);
    printf("Danke fürs spielen");

     return 0;
}