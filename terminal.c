#include <stdio.h>

int system(const char *com);
char *ucn = "main@root> ";
char *exitcmd = "exit(main.c)";

int main() {
  printf("The command doesn't work with aliases.\n");
	while(1) {
    char *cmd;
		printf("%s", ucn);
		scanf("%s", cmd);
    if(cmd == exitcmd) {
      printf("Goodbye! ~SPFck");
      return 0;
    }
    system(cmd);
	}

  return 0;
}