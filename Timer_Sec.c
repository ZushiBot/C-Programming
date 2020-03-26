#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
main()

{
    system("color f1");
    int timer;
    printf("Set Timer(Sec):");
    scanf("%d",&timer);

    for (size_t i=timer;0<i;i--)
    {

        i;
        printf("Timer :%d Sec",i);
        Sleep(1000);
        system("cls");
    }
    printf("Time Out");
}
