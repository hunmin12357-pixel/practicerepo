int main() {
#include <unistd.h>
char pwd[1024];
getcwd(pwd, sizeof(pwd));
printf("%s\n", pwd);
return 0;
}
