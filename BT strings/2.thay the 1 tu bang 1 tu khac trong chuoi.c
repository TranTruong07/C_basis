#include <stdio.h>
#include <string.h>

void str_replace(char *str, const char *old, const char *new)
{
    char *pos = strstr(str, old);
    if (pos != NULL) {
        size_t len_old = strlen(old);
        size_t len_new = strlen(new);
        size_t len_tail = strlen(pos + len_old);
        memmove(pos + len_new, pos + len_old, len_tail + 1);
        memcpy(pos, new, len_new);
        str_replace(pos + len_new, old, new);
    }
}

int main()
{
    char str[] = "tren tinh ban duoi tinh yeu";
    str_replace(str, "tinh", "yeu");
    printf("%s\n", str);
    return 0;
}
