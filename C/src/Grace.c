// Grace writes its own source into Grace_kid.c

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define str "// Grace writes its own source into Grace_kid.c%c%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c%c#define str %c%s%c%c#define code int main(void){char s[4096];int fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC, 0644);char *q = str;int n = sprintf(s, q, 10, 10, 10, 10, 10, 10, 34, q, 34, 10, 34, 34, 10, 10, 10, 10);write(fd, s, n);close(fd);}%c#define program code%c%cprogram%c"
#define code int main(void){char s[4096];int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC, 0644);char *q = str;int n = sprintf(s, q, 10, 10, 10, 10, 10, 10, 34, q, 34, 10, 34, 34, 10, 10, 10, 10);write(fd, s, n);close(fd);}
#define program code

program
