#include <stdio.h>
struct demo
{

    float f;
    int arr[4];
    struct hello1
    {

    } heobj;
    struct hello
    {
        int no;
        char ch;

    } hobj;
};

int main()
{
    struct demo dobj;
    struct demo dobj1;

    dobj.f = 11.1;
    dobj.hobj.no = 10;
    dobj1.hobj.no = 11;
    printf("%d\n", dobj.hobj.no);
    printf("%d\n", dobj1.hobj.no);
    return 0;
}
