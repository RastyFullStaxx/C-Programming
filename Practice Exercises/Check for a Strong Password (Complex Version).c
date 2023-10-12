#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isStrongPasswordComplex(char password[]) {
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
        } else if (strchr("!@#$%^&*()-_+=<>,.?/\\|[]{}~
