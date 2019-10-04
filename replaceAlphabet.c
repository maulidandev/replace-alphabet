/**
 * Author : Maulidan Nashuha
 * Date : 2 Oktober 2019
 * IG & Github : @maulidandev
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// prototipe
char* replaceString(char *, char *, char *);
int checkAlhabet(char, char);

int main(int argc, char const *argv[])
{
    char string[300], search, replace;

    printf("Masukkan sebuah kalimat : ");
    scanf(" %[^\n]", string);

    printf("Huruf yang dicari : ");
    scanf(" %c", &search);

    printf("Huruf pengganti : ");
    scanf(" %c", &replace);

    replaceString(string, &search, &replace);

    printf("Hasil Replace : %s\n\n", string);

    return 0;
}

char* replaceString(char *string, char *search, char *replace){
    while (*string != '\0')
    {
        if (checkAlhabet(*string, *search))
            *string = *replace;
        
        string++;
    }

    return string;
}

int checkAlhabet(char string, char search){
    if (tolower(string) == search || toupper(string) == search)
        return 1;
    
    return 0;
}