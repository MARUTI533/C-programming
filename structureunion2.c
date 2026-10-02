#include <stdio.h>
#pragma pack(1)
union demo
{
    int i;
    float f;
    double d;
};
int main()
{
    printf("%d\n", sizeof(union demo));

    return 0;
}