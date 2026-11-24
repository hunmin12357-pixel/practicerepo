int main() {
#include <unistd.h>
char pwd[1024];
FILE *f = fopen("pwd-log.log", "w");
getcwd(pwd, sizeof(pwd));
printf("print working dir: %s\n", pwd);
printf("%s\n", pwd);
fclose(f);
return 0;
}
