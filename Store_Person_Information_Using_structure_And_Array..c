#include <stdio.h>
struct Person
{
    char name[30];
    int age;
    int salary;
};

int main()
{
    int n;
    printf("How Many Person Information You Wants To Add ? ");
    scanf("%d",&n);

    struct Person person[n];
    for (size_t i=0;i<n;i++)
    {
        printf("\n");
        printf("Infortmation Input = (Person #%d) \n",(i+1));
        printf("\nName : ");
        scanf("%s",&person[i].name);
        printf("\nAge : ");
        scanf("%d",&person[i].age);
        printf("\nSalary : ");
        scanf("%d",&person[i].salary);
        printf("\n");
    }

    for (size_t i=0;i<n;i++)
    {
        printf("\n");
        printf("Infortmation About (Person #%d) \n",(i+1));
        printf("\nName : ");
        printf("%s",person[i].name);
        printf("\nAge : ");
        printf("%d",person[i].age);
        printf("\nSalary : ");
        printf("%d",person[i].salary);
        printf("\n");
    }
}
