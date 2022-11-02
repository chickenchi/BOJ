#include <stdio.h>
#define MX 10000

void f(int a);
void printbar(int b);

int main()
{
    int a;
    scanf("%d",&a);
    puts("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
    puts("\"재귀함수가 뭔가요?\"");
    puts("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
    puts("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
    puts("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");
    f(a);
}

void f(int a)
{
    static int b=1;
    if(a>=2)
    {
        printbar(b);
        puts("\"재귀함수가 뭔가요?\"");
        printbar(b);
        puts("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.");
        printbar(b);
        puts("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.");
        printbar(b);
        puts("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"");
        b++;
        f(a-1);
    }
    else
    {
        printbar(b);
        puts("\"재귀함수가 뭔가요?\"");
        printbar(b);
        puts("\"재귀함수는 자기 자신을 호출하는 함수라네\"");
        printbar(b);
        puts("라고 답변하였지.");
    }
    b--;
    printbar(b);
    puts("라고 답변하였지.");
}

void printbar(int b)
{
    for(int i=1;i<=b;i++)
        printf("____");
    return;
}