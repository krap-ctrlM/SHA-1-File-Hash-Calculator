#include <stdio.h>
#include <stdlib.h>
#include <openssl/sha.h>

int main() {
    int i;
    SHA_CTX sha1handler;
    unsigned char sha1digest[SHA_DIGEST_LENGTH];

    FILE* file;
    errno_t err;

    // Открываем файл для чтения в бинарном режиме
    err = fopen_s(&file, "C://Users/yar2/Desktop/test.txt", "rb");
    if (err != 0) {
        perror("Ошибка при открытии файла");
        return 1;
    }

    SHA1_Init(&sha1handler);

    char buffer[1024];
    size_t bytesRead;

    // Чтение данных из файла и обновление контекста SHA-1
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        SHA1_Update(&sha1handler, buffer, bytesRead);
    }

    fclose(file);

    // Завершение вычисления SHA-1 хэш-суммы
    SHA1_Final(sha1digest, &sha1handler);

    // Вывод результата в шестнадцатеричном формате
    for (i = 0; i < SHA_DIGEST_LENGTH; i++) {
        printf("%02x", sha1digest[i]);
    }
    printf("\n");

    return 0;
}
