#include <stdio.h>
struct demo
{
    int i;
    char ch;
    float f;
};
int main()
{

    printf("%d\n", sizeof(struct demo));
    return 0;
}