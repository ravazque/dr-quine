
#include <stdio.h>

// Global string
char *s = "%c#include <stdio.h>%c%c// Global string%cchar *s = %c%s%c;%c%cvoid print_source(char *s)%c{%c    printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c}%c%cint main(void)%c{%c    // Print own source%c    print_source(s);%c    return (0);%c}%c";

void print_source(char *s)
{
    printf(s, 10, 10, 10, 10, 34, s, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
}

int main(void)
{
    // Print own source
    print_source(s);
    return (0);
}
