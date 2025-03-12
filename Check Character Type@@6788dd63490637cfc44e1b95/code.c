#include<stdio.h>
int main(){
    char a;
    scanf("%c",a);
    char vowel="aeiouAEIOU";
    if(a==vowel) printf("Vowel");
    // else if()
    else printf("Digit");
    return 0;
}