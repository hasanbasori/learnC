#include <unistd.h>

void    printZ(char c) {
    write(1, &c, 1);
}

int main(void)
{
    printZ('Z');
    return 0;
}