#include <stdio.h>

void write_log(char *filename, const har *msg)
{
    FILE *f = fopen(filename, "a");
    if (f == NULL){
        return;
    }
    fprintf(f, "%s\n", msg);
    fclose(f);
}

int main()
{
    write_log("log.txt", "hello");
    return 0;
}

