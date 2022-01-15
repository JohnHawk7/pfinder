#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int i;

    if (arr && delim) {
        for (i = 0; arr[i]; i++) {
            mx_printstr(arr[i]);

            if (arr[i + 1] != NULL) {
                mx_printstr(delim);
            }
        }
        write(1, "\n", 1);
    }
}
