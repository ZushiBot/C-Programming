#include <stdio.h>
#include <stdlib.h>
int main()

{
    char exp;
    char hud[10];
    int i=0,len=0,al=0;
    char name[10];
    printf("Hi ! Lets Play A Game ! I will Guess Your Gender !Are You Ready ?  Ok Lets Start !!!\n");

    printf("\nAt first Tell Me Your First Name ?\n");
    scanf("%s",name);
    printf("\nHmmm......ok..........\n");
    //
    
    printf("\nWhat is Your Surname ?\n");
    scanf("%s",hud );
    printf("\nok......I'm Guessing................\n");
   
    printf("\nWhat is Your Faviorite Food ?\n");
    scanf("%s",hud );
    printf("\n...Wait .....Let Me Think....................ok.. :/  \n");
  
    printf("\nWhat is Faviorite Color ? \n");
    scanf("%s",hud );
  


    while (name[i]!='\0')
    {
        i++;
        len++;
    }
    al=len-1;

    int game=name[al];

    printf("\n" );


    exp=game;


    switch(exp)
    {
    case 'a':
        printf(" Your Are A Girl (confirm) ");
        break;
    case 'A':
        printf("><  Your Are A Girl (confirm) ><");
        break;
    case 'o':
        printf("><  Your Are A Girl  ><");
        break;
    case 'O':
        printf("><  Your Are A Girl  ><");
        break;
    case 'e':
        printf("><  Your Are A Girl (confirm) ><");
        break;
    case 'E':
        printf("><  Your Are A Girl (confirm) ><");
        break;
    case 'i':
        printf("><  Your Are A Girl (confirm) ><");
        break;
    case 'I':
        printf("><  Your Are A Girl (confirm)  ><");
        break;

    default:
        printf("><  Your Are A Boy (confirm) ><");
        break;
    }

    printf("GG" );
    

}
