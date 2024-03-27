#include <stdio.h>
#include <stdlib.h>

struct Record {
    int id;
    float value;
};

int main() {
    struct Record records[] = {
        {1, 3.14},
        {2, 6.28},
        {3, 9.42}
    };

    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) {
        perror("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    fwrite(records, sizeof(struct Record), sizeof(records) / sizeof(struct Record), fp);
    fclose(fp);

    return 0;
}
