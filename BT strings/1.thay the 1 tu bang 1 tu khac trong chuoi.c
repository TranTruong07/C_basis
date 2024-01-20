#include <stdio.h>
#include <string.h>

void replace_first(char *str, const char *target, const char *replace) {
    int target_len = strlen(target);
    int replace_len = strlen(replace);

    char *pos = strstr(str, target); // Tìm ki?m v? trí d?u tiên c?a chu?i c?n thay th?
    if (pos != NULL) {
        // N?u tìm th?y chu?i c?n thay th?, ti?n hành thay th?
        memmove(pos + replace_len, pos + target_len, strlen(pos + target_len) + 1);
        memcpy(pos, replace, replace_len);
    }
}

int main() {
    char str[] = "tren tinh ban duoi tinh yeu";
    char target[] = "tinh";
    char replace[] = "yeu";

    replace_first(str, target, replace);
    printf("%s\n", str);

    return 0;
}
