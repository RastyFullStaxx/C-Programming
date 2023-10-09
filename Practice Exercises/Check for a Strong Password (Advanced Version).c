#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrongPassword(char password[]) {
    int length = strlen(password);
    bool hasUpperCase = false, hasLowerCase = false, hasDigit = false, hasSpecialChar = false;
    
    for (int i = 0; i < length; i++) {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z') {
            hasUpperCase = true;
        } else if (ch >= 'a' && ch <= 'z') {
            hasLowerCase = true;
        } else if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        } else if (strchr("!@#$%^&*()-_+=<>,.?/\\|[]{}~'", ch)) {
            hasSpecialChar = true;
        }
    }
    
    return (length >= 8) && hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar;
}

int main() {
    char password[50];
    
    printf("Enter a password: ");
    scanf("%s", password);
    
    if (isStrongPassword(password)) {
        printf("Strong password!\n");
    } else {
        printf("Weak password!\n");
    }
    
    return 0;
}
