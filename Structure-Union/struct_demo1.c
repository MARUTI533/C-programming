#include <stdio.h>
struct demo
{
    int i;
    float f;
    double d;
};
int main()
{

    printf("%zu\n", sizeof(struct demo));
    return 0;
}