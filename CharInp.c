//Taking string as input using %c
#include<stdio.h>
#include<string.h>
#include<conio.h>

void CharInp(char str[], int n);

int main(){
    char str[100];
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);

    CharInp(str, n);
    return 0;
}

void CharInp(char str[], int n){
    char *str2; //Using pointer as we have to modify its value repeatedly
    char a;
    printf("Enter the string character by character, pressing enter after each\n");
    for(int i=0; i<n; i++){
        printf("Enter character: ");
        scanf("%c", &a);
        getch();
        *str2=a;
        strcat(str,str2);
    }
    printf("Entered string is: ");
    for(int i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
}