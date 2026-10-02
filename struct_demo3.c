#include <stdio.h>
#pragma pack(1) // 1 2 4 8
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