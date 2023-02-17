#include<stdio.h>
#include<string.h>

int main()
{
    char *p, *q;
    int len1,len2;
    p="hello";
    q="bye";
    len1=strlen(p);
    len2=strlen(q);
    printf("%d %d",len1,len2);
    return 0;
}