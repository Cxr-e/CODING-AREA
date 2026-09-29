#include <stdio.h>

int vibeCheck(int character1){
    if (character1 > 84){
        return 2;
    } else if (character1 > 42){
        return 1;
    } else{
        return 0;
    }
}


void main(){
    // variables
    char givenCharacter;
    int translated;
    int result;

    // input
    printf("Give me a character fuck nigga, finna check if it's vibe check:");
    scanf(" %c", &givenCharacter);
    
    // process
    translated = givenCharacter;
    result = vibeCheck(translated);
    printf("%d\n",translated);

    // statement & output
    if (result == 2){
        printf("ur character passed the vibe check with the score of %d", translated);
    } else if (result == 1){
        printf("ionno man. i like u but ion fw u type shit, score of %d", translated);
    } else{
        printf("fuck outta here, score %d", translated);
    }
}