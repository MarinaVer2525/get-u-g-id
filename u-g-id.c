#include <stdio.h>
#include <unistd.h> // Для getuid() и getgid()

int main() {
    // Получаем UID и GID
    uid_t uid = getuid();
    gid_t gid = getgid();

    // Выводим результат
    printf("UID: %d\n", uid);
    printf("GID: %d\n", gid);

    return 0;
}
