#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int age;
    char name[101];
} reg;

int compare(const void *a, const void *b)
{
    if(((reg*)a) -> age > ((reg*)b) -> age) return 1;
    else if(((reg*)a) -> age < ((reg*)b) -> age) return -1;
    else if(((reg*)a) -> num > ((reg*)b) -> num) return 1;
    else return -1;
}

int main()
{
    reg *Reg = (reg*)malloc(sizeof(reg)*100000);
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        Reg[i].num = i+1;
        scanf("%d %s", &Reg[i].age, Reg[i].name);
    }
    qsort(Reg, a, sizeof(reg), compare);
    for(int i=0;i<a;i++)
        printf("%d %s\n", Reg[i].age, Reg[i].name);
    free(Reg);
    return 0;
}