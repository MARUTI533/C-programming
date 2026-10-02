#include <stdio.h>
struct demo
{
    int i;
    char ch;
    float f;
};
int main()
{
    struct demo dobj1;
    struct demo dobj2;
    struct demo *dp = NULL;
    dp = &dobj2;
    // direct accessing operator

    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.888;
    // indirect accessing operator

    dp->i = 11;
    dp->ch = 'B';
    dp->f = 91.567;
    printf("%d\n", dobj1.i);
    printf("%d\n", dp->i);

    return 0;
}