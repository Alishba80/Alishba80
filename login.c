#include <stdio.h>
#include <conio.h>

int main() {
    char user_name[20];
    int password;

    printf("Enter your user name: ");
    scanf("%s", user_name);

    printf("Enter your password: ");
    scanf("%d", &password);

    if (strcmp(user_name, "admin") == 0 && password == 1234) {
        printf("Login successfully\n");
    } else {
        printf("Login failed\n");
    }

    getch();
    return 0;
}
