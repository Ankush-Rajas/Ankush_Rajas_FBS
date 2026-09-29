// Write a program to check whether a given character is uppercase or lowercase



#include<stdio.h>


int main(){
    char ch = 's';

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("the character is Uppercase");
    }else{
        printf("the character is Lowercase");
    }
    

    return 0;
}