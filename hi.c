/*#include <stdio.h>
int main(void){
    int n1,n2,n3;
    
    printf("정수를 입력하시오: ");
    scanf("%d",&n1);
    printf("정수를 입력하시오: ");
    scanf("%d",&n2);
    
    if(n2==0){ //분모가 0인지 검사
        printf("0으로 나눌 수는 없습니다. \n");
    }
    else{
        n3=n1/n2; //나눗셈 실행
        printf("결과는 %d입니다.", n3);
        }
        return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int score;

    printf("성적을 입력하시오: ");
    scanf("%d",&score);

    if(score>=90)
        printf("합격: 학점A\n");
    else if(score>=80)
        printf("합격: 학점B\n");
    else if(score>=70)
        printf("합격: 학점C\n");
    else if(score>=60)
        printf("합격: 학점D\n");
    else
        printf("합격: 학점F\n");
    return 0;
} //++switch문 사용해서 하기
*/

/*
#include <stdio.h>

int main(void)
{
    int month, days;
    
    printf("달을 입력하시오: ");
    scanf("%d", &month);

    switch(month)
    {
        case 2:
            days=28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days=30;
            break;
        default:
            days=31;
            break;
    }
    printf("%d월의 일수는 %d 입니다.\n",month, days);
    return 0;
} 
*/

#include <stdio.h>

int main(void)
{
    char op;
    int x, y, result;

    printf("수식을 입력하시오");
    printf("(예:2+5)");
    printf(">>");
    scanf("%d %c %d",&x, &op, &y);

    switch(op)
    {
        case '+':
            result=x+y;
            break;
        case '-':
            result=x-y;
            break;
        case '*':
            result=x*y;
            break;
        case '/':
            result=x/y;
            break;
        case '%':
            result=x%y;
            break;
        default: 
            printf("지원되지 않는 연산자입니다. ");
            break;
    }
    printf("%d %c %d = %d", x, op, y, result);
    return 0;
}//if 문으로도 작성하기


