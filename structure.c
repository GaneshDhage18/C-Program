#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r={};
    r.length=20;
    r.breadth=40;
    
    printf(" The size is: %d", sizeof(r));

    return 0;
}
