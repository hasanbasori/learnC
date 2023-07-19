#include <unistd.h>

void    put_char(char c)
{
    write(1, &c, 1);

}

/*
int main(void)
{
    put_char('z');
    return 0;
}
*/