#include<stdio.h>
int main()
{
    char cs;
    scanf("%c",&cs);
    if(cs=='A' || cs=='E' || cs=='I' || cs=='O' || cs=='U' || cs=='a' || cs=='e' || cs=='i' || cs=='o' && cs=='u')
    {
    printf("Vowel");
    }
    else
    {
    printf("Consonant");
    }
}