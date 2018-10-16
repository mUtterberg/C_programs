# include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %lu bytes (because it is passed in as a pointer)\n", sizeof(msg));
}

int main()
{
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    printf("quote occupies %lu bytes\n", sizeof(quote));
}