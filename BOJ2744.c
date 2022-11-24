#include <stdio.h>
#include <string.h>

int main()
{
    int i=-1;
    char arr[100];
    gets(arr);
    while(strlen(arr)>++i)
    {
        if(arr[i]>='A' && arr[i]<='Z') printf("%c",arr[i]+32);
        else printf("%c",arr[i]-32);
    }
    return 0;
}