// Write a program to check whether a given character is a vowel or consonant.

#include<stdio.h>


int main(){

    char ch = 'a';
    char ch1 = 'e';
    char ch2 = 'i';
    char ch3 = 'o';
    char ch4 = 'u';
    
    char q;
    printf("enter characcter\n");
    scanf("%c", &q);

    if (ch == q || ch1 == q || ch2 == q || ch3 == q || ch4 == q)
    {
        printf("the character is Vowel");
    }else{
        printf("the character is consonent");
    }
    

    return 0;
}