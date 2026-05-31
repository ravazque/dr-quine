/*
    Grace writes its own source into Grace_kid.c
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define FILE_OUT "Grace_kid.c"
#define NL "\n"
#define FT(x) int main(void){char s[4096]; int fd = open(FILE_OUT, O_WRONLY | O_CREAT | O_TRUNC, 0644); if (fd < 0){return (1);} int n = sprintf(s, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "/*", NL, "    Grace writes its own source into Grace_kid.c", NL, "*/", NL, NL, "#include <stdio.h>", NL, "#include <fcntl.h>", NL, "#include <unistd.h>", NL, NL, "#define FILE_OUT \"Grace_kid.c\"", NL, "#define NL \"\\n\"", NL, "#define FT(x) ", #x, NL); n += sprintf(s + n, "%s%s%s%s%s", NL, "FT(", #x, ")", NL); write(fd, s, n); close(fd); return (0);}

FT(int main(void){char s[4096]; int fd = open(FILE_OUT, O_WRONLY | O_CREAT | O_TRUNC, 0644); if (fd < 0){return (1);} int n = sprintf(s, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", "/*", NL, "    Grace writes its own source into Grace_kid.c", NL, "*/", NL, NL, "#include <stdio.h>", NL, "#include <fcntl.h>", NL, "#include <unistd.h>", NL, NL, "#define FILE_OUT \"Grace_kid.c\"", NL, "#define NL \"\\n\"", NL, "#define FT(x) ", #x, NL); n += sprintf(s + n, "%s%s%s%s%s", NL, "FT(", #x, ")", NL); write(fd, s, n); close(fd); return (0);})
