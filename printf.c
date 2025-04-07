#include <unistd.h>
#include <stdio.h>

int len(char *text);
void myprintf(char *text);

int main()
{
    // printf("%d\n", len("Hello"));
    myprintf("Hello");
    return 0;
}

void myprintf(char *text)
{
    write(STDOUT_FILENO, text, len(text) * sizeof(char));
}

int len(char *text)
{
    int i = 0;
    while (*(text) != NULL)
    {
        text++;
        i++;
    }
    return i;
}