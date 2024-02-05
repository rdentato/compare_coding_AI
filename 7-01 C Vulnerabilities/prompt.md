Identify all the potential security issues in this code:
```
#include <stdio.h>
#include <string.h>

int grantAccess() {
    char user_input[100];
    char command[150] = "echo ";
    char secret_key[10];

    printf("Enter a string: ");
    gets(user_input);

    strcat(command, user_input);
    system(command);

    printf("Enter secret key: ");
    gets(secret_key);

    if (strcmp(secret_key,"qwerty")) return 0;

    printf("This is a secure area and your scret key is: %s\n", secret_key);

    printf("Your total cash deposit is: %d$\n",retriveDepositAmount(user_input,"qwerty"));
    return 1;
}
```
