
bool find_substr(char *a, char *b) {
    int i = 0;
    while (*(a + i) != '\0') {
        if (*(a + i) == *b) {
            int j = 1;
            while (*(a + i + j) == *(b + j) && *(a + i + j) != '\0')
                j++;
                if (*(b + j) == '\0')
                    return true;
        }
        a++;
    }
    return false;
}

char* btos(bool log) {
    if (log == 1) {
        return "true";
    }
    else
        return "false";
}

void task3() {
    char a[20];
    char b[20];
    puts("Enter your string:");
    fgets(a, 20, stdin);
    puts("Enter your substring:");
    fgets(b, 20, stdin);
    char* ans = btos(find_substr(a,b));
    printf("Answer is: %s", ans);
}