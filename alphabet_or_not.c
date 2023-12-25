# include <stdio.h>

int main(){

    char letter;
    printf("\n>> Enter a letter: ");
    scanf("%c",& letter);

    if( (letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        printf("\n%c is a letter of the alphabet", letter);
    else
        printf("\n%c is not a letter of the alphabet", letter);

    return 0;
}