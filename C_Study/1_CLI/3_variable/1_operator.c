#include <stdio.h>

void main(){
    // 사칙연산
    // ex) +,-, *,/ (덧셈,뺄셈,곱셈,나눗셈) <== 연산자(operator)
    // + 연산자 (add, addition, plus)
    // 1+2 수식(expression)의 평가된(evaluation) 결과가
    // %d 포멧스티링과 매칭이 된다.
    printf("1+2=%d\n",1+2);

    // - 연산자 (sub, subtraction, minus)
    printf("4-2=%d\n",4-2);
    
    // * 연산자 (mul, multiplication)
    printf("4*2=%d\n",4*2);

    // / 연산자 (div, division)
    // / 연사자 사용시 연산을 잘못시키면 오류가 발생 할 수 있음.
    printf("4/2=%d\n",4/2);

    // 나눗셈 연산 수행시 분모(denominator)가 0일 경우에는 컴파일러에 따라
    // 컴파일에러 또는 런타임에러를 발생한다.
    // 분자는(numerator) 상관이 없음
    // printf("4/0=%d\n",4/0);

    // 아래 코드는 %d의 형식(정수)과 4/3 연산결과(실수)가 일치하지 않는다.
    // 따라서 컴파일러의 종류에 따라 컴파일에러, 런타임에러
    // 또는 나눗셈 결과에서 소수점 이하는 무시되어 출력할 수 있다.
    printf("4/3=%d\n",4/3);

}

