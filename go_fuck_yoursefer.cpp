#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
    printf("%d\n", argc);
    for (int i = 1; i < argc; i++)
    {
        printf("Пашел нахуй, %s. ", argv[i]);
        /*
        if (!strcmp(argv[i], "Привет"))
            printf("пашел нахуй ");
        else
            printf("%s ", argv[i]);
        */
    }
    return 0;
}