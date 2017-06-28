#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char * array, int numberOfChars)
{
    int b = 0;
    int e = 0;
    char temp;

    e = strlen(&array) - 1;
    printf("%s", &array);

    while (b < e)
    {
        temp = array[b];
        array[b] = array[e];
        array[e] = temp;
        b++;
        e--;
    }
}

int main()
{
    reverse('supm', 4);
    return(0);
    getchar();
}
