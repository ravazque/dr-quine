#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *s = "#include <stdio.h>%c#include <unistd.h>%c#include <fcntl.h>%c#include <stdlib.h>%c%cchar *s = %c%s%c;%cint i = %d;%c%cint main(void)%c{%c    char b[4096];%c    char p[64];%c    char c[256];%c%c    if (i < 0)%c        return (0);%c    sprintf(p, %cSully_%%d.c%c, i - 1);%c%c    int fd = open(p, O_WRONLY | O_CREAT | O_TRUNC, 0644);%c    if (fd < 0)%c        return (1);%c%c    int n = sprintf(b, s, 10, 10, 10, 10, 10, 34, s, 34, 10, i - 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10);%c    write(fd, b, n);%c    close(fd);%c%c    sprintf(c, %ccc -o Sully_%%d Sully_%%d.c%c, i - 1, i - 1);%c    system(c);%c    sprintf(c, %c./Sully_%%d%c, i - 1);%c    system(c);%c%c    return (0);%c}%c";
int i = 5;

int main(void)
{
    char b[4096];
    char p[64];
    char c[256];

    if (i < 0)
        return (0);
    sprintf(p, "Sully_%d.c", i - 1);

    int fd = open(p, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
        return (1);

    int n = sprintf(b, s, 10, 10, 10, 10, 10, 34, s, 34, 10, i - 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, 34, 10, 10, 10, 10, 10);
    write(fd, b, n);
    close(fd);

    sprintf(c, "cc -o Sully_%d Sully_%d.c", i - 1, i - 1);
    system(c);
    sprintf(c, "./Sully_%d", i - 1);
    system(c);

    return (0);
}
