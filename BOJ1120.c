#include <stdio.h>
#include <string.h>

int search(char *a, char *b);

int cnt = 50;
char a[55], b[55];

int main()
{
    int sv;

    scanf("%s %s", a, b);

    if(strlen(a) < strlen(b))
        for(int i = 0; i < strlen(b)-strlen(a)+1; i++)
        {
            sv = search(a, b + i);
            if(sv < cnt) cnt = sv;
        }
    else cnt = search(a, b);
    printf("%d", cnt);
    return 0;
}

int search(char *a, char *b)
{
    int sv;
    sv = strlen(a);
    for(int i = 0; i < strlen(a); i++)
        if(*(a + i) == *(b + i)) sv--;    
    return sv;
}