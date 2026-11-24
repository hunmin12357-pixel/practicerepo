int main() {
// [v1.1] print and log current working dir.
// please develop this function.
#include <stdio.h>
#include <unistd.h>
char pwd[1024];
FILE *f = fopen("pwd-log.log", "w");
getcwd(pwd, sizeof(pwd));
printf("print working dir: %s\n", pwd);
printf("%s\n", pwd);
fclose(f);
return 0;
}
