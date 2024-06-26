/*/변수 알아보기
#include <stdio.h>
int main() {
	int a; 
	a = 127;
	printf("a의 값은 %d 진수로 %o 입니다. \n", 8, a);
	printf("a의 값은 %d 진수로 %d 입니다. \n", 10, a);
	printf("a의 값은 %d 진수로 %x 입니다. \n", 16, a);
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int a = 0xAF; // 10101111
	int b = 0xB5; // 10110101
	
	printf("%x \n", a & b );	// a and b = 10100101
	printf("%x \n", a | b);		// a or b = 10111111
	printf("%x \n", a ^ b);		// a xor b = 00011010
	printf("%x \n", ~a);		// ~a = (1111 1111 1111 1111 1111 1111) 0101 0000
	printf("%x \n", a << 2);	// a << 2 1010111100
	printf("%x \n", b >> 3);	// b >> 3 000 10110
	
	return 0;
}*/

/*#include <stdio.h>

int main() {
	double celsius;

	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램입니다. \n");
	printf("섭씨 온도를 입력해 주세요 \n: ");
	scanf("%lf", &celsius);

	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);

	printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 / 5 *celsius +32);
	return 0;
}*/

/*#include <stdio.h> //ft -> cm 길이 환산

int main() {
	double ft;

	printf("ft를 cm로 바꿔주는 프로그램입니다. \n");
	printf("ft를 입력해 주세요 \n: ");
	scanf("%lf", &ft);

	printf(" %f ft는 피트로 %f cm 입니다 \n", ft, 3048 * ft / 100 );

	return 0;
}*/

 //if 문 이란?
/*#include <stdio.h>
int main() {
	int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf("%d", &i);

	if (i == 7) {
		printf("당신은 행운의 숫자 7 을 입력했습니다.");
	}

	else  { // 여기서 else는 if (i != 7)과 같음 
		printf("행운의 숫자가 아닙니다.");
	}
	return 0;
}*/

/*#include <stdio.h> 
int main() {
	double i, j;
	printf("나누고 싶은 두 정수를 입력하세요 : ");
	scanf("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0 으로 나눌 수 없습니다. \n");
		return 0;
	}


	printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j );

	return 0;
}*/

// 합격 or 불합격

/* #include <stdio.h>
int main() {
	int score;

	printf("당신의 수학점수를 입력하세요! : ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("당신은 합격입니다! \n");
	}
	if (score < 90) {
		printf("당신은 불합격입니다! \n");
	}
	
	return 0;
}*/

// 크기 비교하기
/*#include <stdio.h>
int main() {
	int i, j;

	printf("크기를 비교할 두 수를 입력해 주세요 : ");
	scanf("%d %d", &i, &j);

	if (i > j)
	{
		printf("%d는 %d보다 큽니다.\n", i, j);
	}

	if (i < j)
	{
		printf("%d는 %d보다 작습니다.\n", i, j);
	}

	if (i >= j)
	{
		printf("%d는 %d보다 크거나 같습니다.\n", i, j);
	}

	if (i <= j)
	{
		printf("%d는 %d보다 작거나 같습니다.\n", i, j);
	}

	if (i == j)
	{
		printf("%d는 %d와(과) 같습니다.\n", i, j);
	}

	if (i != j)
	{
		printf("%d는 %d와(과) 다릅니다.\n", i, j);
	}

	return 0;

}*/

/*#include <stdio.h>
int main() {
	int num;

	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);

	if (num == 7) {
		printf("행운의 숫자 7 이군요! \n");
	}
	else {
		printf("그냥 보통의 숫자인 %d를 입력했군요! \n", num);
	}
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int num;

	printf("아무 숫자나 입력해 보세요 : ");
	scanf("%d", &num);

	if (num == 7) {
		printf("행운의 숫자 7 이군요! \n");
	}
	else {
		if (num == 4) {
			printf("죽음의 숫자 4 인가요;;; \n");
		}
		else {
			printf("보통의 숫자인 %d를 입력했군요! \n", num);
		}
	}
	return 0;
}*/

/*#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;

	printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요! : ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);

	ave_score =
		(math + english + science + programming) / 4;
	printf("당신의 평균 점수는 %f 입니다 \n", ave_score);
	if (ave_score >= 90) {
		printf("당신은 우등생입니다!");
	}
	else if (ave_score >= 40) {
		printf("조금만 노력하세요! \n");
	}
	else {
		printf("공부를 발로 합니까?! \n");
	}
	return 0;
}*/


//크기 비교
/*#include <stdio.h>
int main() {
	int a;
	printf("아무 숫자나 입력하세요 : ");
	scanf("%d", &a);

	if (a >= 10) {
		if (a < 20) {
			printf("%d는 10 이상이면서 20 미만인 수 입니다. \n", a);
		}
		else if (a >= 20 || a < 10) {
			printf("%d는 10 미만이거나 20이상 입니다. \n", a);
		}
	}
	
	return 0;} */

//크기 비교
/*#include <stdio.h>
int main() {
	int a;
	printf("아무 숫자나 입력하세요 : ");
	scanf("%d", &a);

	if (a >= 10 && a < 20 ) {
		
			printf("%d는 10 이상이면서 20 미만인 수 입니다. \n", a);
		}
	if (a >= 20 || a < 10) {
			printf("%d는 10 미만이거나 20 이상인 수 입니다. \n", a);
		}
	
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int height, weight;
	printf("당신의 키와 몸무게를 각각 입력해 주세요! : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("당신은 '거구' 입니다! \n");
	}
	if (!(height >= 190 || weight >= 100)) {
		printf("당신은 '거구'가 아닙니다! \n");
	}

	//else {
		//printf("당신은 '소구' 입니다!"); }
	return 0;
}*/

//1부터 100까지의 합
/*#include <stdio.h>
int main() {
	int i=0, sum=0;
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		if (i == 100)printf(" %d =", i);
			else printf(" %d +", i);
	}
	printf(" %d \n", sum);
	return 0;
}*/

//홀수의 합 1~99
/*#include <stdio.h>
int main() {
	int i = 0, sum = 0;
		for (i = 1; i <= 100; i = i + 2) {
			sum = sum + i;
			if (i == 99) {
				printf(" %d =", i);
			}
			else printf(" %d +", i);
		}
	printf(" %d \n", sum);
	return 0;
}*/

//짝수의 합 2~100
/*#include <stdio.h>
int main() {
	int i = 0, sum = 0;
	for (i = 2; i <= 100; i = i + 2) {
		sum = sum + i;
		if (i == 100) {
			printf(" %d =", i);
		}
		else printf(" %d +", i);
	}
	printf(" %d \n", sum);
	return 0;
}*/

// 1~100까지 짝수의 합, 홀수의 합
/* #include <stdio.h>
int main() {
	int i = 0, sum_odd = 0, sum_even = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			sum_even = sum_even + i;
		}
		
		if (i % 2 == 1) {
			printf(" %d ", i % 2);
			sum_odd = sum_odd + i;
		}
	}
	printf(" %d \n", sum_odd);
	printf(" %d \n", sum_even);
	return 0;
}*/


//1부터 10000까지의 합	
/*#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 0; i <= 10000; i++) {
		sum = sum + i;
	}
	printf("1부터 10000까지의 합 : %d \n", sum);
	
	return 0;
}*/

// for 문 응용
/*include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score = 0;

	printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	scanf("%d", &subject);

	printf("\n 각 과목의 점수를 입력해 주세요. \n");
	for (i = 1; i <= subject; i++) {
		printf("과목 %d : ", i);
		scanf("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균 : %.2lf \n", sum_score / subject);
	return 0;

}*/

//break 문
/*#include <stdio.h>
int main() {
	int usranswer;

	printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");
	
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("맞추셨군요! \n");
			break;
		} else {
			printf("틀렸어요! \n");
		}
	}
	return 0;
}*/


// 5의 배수를 제외한 숫자 출력
/*/#include <stdio.h>
int main() {
	int i;

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;
		printf("%d, ", i);
	}
	return 0;
}*/

// 구구단
/*#include <stdio.h>
int main() {
	int i, j;

	for (i = 1; i < 10; i++) {
		for (j = 1; j < i; j++) {
			
			printf("%d,", j);
		}
	}
	return 0;
}*/

// while 문
/*#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	while (i <= 100) {
		sum += i;
		i++;
	}

	printf("1부터 100까지의 합 : %d \n", sum);
	return 0;
}*/

//do while 문
/*#include <stdio.h>
int main() {
	int i = 1, sum = 0;
	do {
		
		
		sum += i;
		printf("%d \n", i++);
		printf("%d \n", i++);
	} while (i < 1);

	printf("sum : %d \n", sum);
	return 0;
}*/

//문1
/*#include <stdio.h>
int main() {
	int i, j, N, k;
	printf("숫자를 입력하세요! : ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {//줄 카운트
		for (j = 1; j <= N -i; j++) {//공백 카운트
			printf(" ");
		}
		for (k = 1; k <= i+i-1; k++) {//별 카운트
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//문2
/*#include <stdio.h>
int main() {
	int lin, nul, sta, N, cn;
	printf("숫자를 입력하세요! : ");
	scanf("%d", &N);
	cn = N;
	for (lin = 1; lin <= N; lin++) {
		//printf("lin=%d", lin);
		for (nul = 1; nul < lin; nul++) {
			//printf("nul=%d", nul);
			printf(" ");                  // 1 < 1     1<2     2<2        1<3     2<3
		}
		for (sta = 1; sta <= (N-lin)*2+1; sta++) {
			//N * 2 - lin * 2 + 1
			//printf("sta=%d, ", sta);
				printf("*");
				//cn = cn - 1;
		}
		//cn = cn - 1;
		printf("\n");
	}
	return 0;
}*/

//문2 다른 사람 풀이
/*#include <stdio.h>
int main(){
	int N, LastLineStar, lin, sta, nul;
	printf("삼각형의 높이를 입력하세요: ");
	scanf_s("%d", &N);

	for (lin = 0; lin < N; lin++)
	{
		for (nul = 0; nul < lin; nul++)
		{
			printf(" ");
		}
		for (sta = 1; sta < (N - lin)*2; sta++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/


//문3
/*#include <stdio.h>
int main() {
	int i, j, sum1 = 0, cnt1 = 0;
	
	
	for (i = 1; i <= 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum1 = sum1 + i;
			cnt1++;
			if (i == 1000) {
				printf("%d =", i);
			}
			else {
				printf("%d +", i);
			}
		}
	} 
	
	printf("1000이하의 3 또는 5의 배수인 자연수들의 합 : %d", sum1);
	printf("\ncount = %d \n", cnt1);
	return 0;
}*/

//문4
/*#include <stdio.h>
int main() {
	int n1 = 0, n2 = 1, n3 = 0, i, sum=0;
	for (i = 0; i < 10; i++) {
		n3 = n1 + n2;
		printf("%d, %d, %d \n", n1, n2, n3);
		n1 = n2;
		n2 = n3;
		if (n3 % 2 == 0) {
			sum = sum + n3;
		}
	} printf("백만 이하 피보나치 수열 중 짝수의 합%d", sum);
}*/

/*#include <stdio.h>
int main() {
	int n1 = 0, n2 = 1, n3 = 0, sum = 0;
	do {
		n3 = n1 + n2;
		printf("n1 : %d, \t n2 : %d, \t n3 : %d \n", n1, n2, n3);
		if (n3 % 2 == 0) {
			sum += n3;
			}
		n1 = n2;
		n2 = n3;

	} while (n3 <= 1000000);
	printf("백만 이하 피보나치 수열 중 짝수의 합 : %d", sum);
	return 0; // 1089154
}*/


/*#include <stdio.h>
int main() {
	int a1 = 0, a2 = 1, a3 = 0, i = 0, tot = 0;

	do {
		i++;
		a3 = a1 + a2;
		printf("%d, %d, %d ", a1, a2, a3);
		if (i % 2 == 0) {
			tot = tot + a3;
			printf("짝수항\n");
		}
		else {
			printf("\n");
		}
		a1 = a2;
		a2 = a3;

	} while (a3 <= 1000000);

	printf("1000000이하의 피보나치수열 짝수항의 합은 %d 이다.\n\n", tot);
	return 0;
}*/

//구글
/*#include <stdio.h>
int main(){	
	int i=1,j,sum_1=0,sum_2=0,sum_3=0,ansr;	
	sum_1 = 1+i;	
	ansr = 1+1+sum_1; //1+1	
	sum_2 = 1 + sum_1;	
	ansr = ansr + sum_2;	
	for(j=1;j<100;j++)	{
		sum_3 = sum_1 + sum_2;		
		ansr = ansr + sum_3;		
		sum_1 = sum_2 + sum_3;		
		ansr = ansr + sum_1;		
		sum_2 = sum_1 + sum_3;		ansr = ansr + sum_2;				
		if(sum_1 > 1000000)			
			break;		
		else if(sum_2 > 1000000)			
			break;		
		else if(sum_3 > 1000000)			
			break;	}	
	printf("\n");	
	printf("답은 %d \n", ansr);
	return 0;
}*/







/*#include <stdio.h>
int main() {
	printf("1000000 이하의 피보나치 수열 (1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다. \n");
	int sumP = 0;
	int p1 = 1;
	int p2 = 1;
	int tmp = 0;
	int toggle = 1;
	while (tmp <= 1000000) {
		tmp = p1 + p2;
		p1 = p2;
		p2 = tmp;
		if (toggle == 1) {
			toggle = 0;
			sumP += p1;
		}
		else {
			toggle = 1;
		}
	}
	printf("%d", sumP);

	printf("\n");
	printf("\n");
	return 0;
}*/
// 문5
//#include <stdio.h>

/*#include <stdio.h>

int main() {
	// 피보나치 수열의 첫 두 항을 초기화
	int a = 1, b = 1;

	// 짝수 항의 합을 저장할 변수
	int sum = 0;

	// 1000000 이하의 모든 항을 생성하면서
	while (b <= 1000000) {
		// 현재 항이 짝수이면 합에 더함
		if (b % 2 == 0) {
			sum += b;
		}

		// 다음 항을 계산
		b = a + b;
		a = b - a;
	}

	// 합을 출력
	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합은 %d입니다.\n", sum);

	return 0;
}*/

/*#include <stdio.h>

int kkr(int n, int cnn) {
	// n이 1 또는 2이면
	if (n <= 2) {
		return n;
	}

	// 그렇지 않으면
	return printf("fbi : %d n-1 : %d, n-2 : %d \n", cnn++, kkr(n - 1, cnn), kkr(n - 2,cnn)), 
		kkr(n - 1,cnn) + kkr(n - 2,cnn);
	
}

int main() {
	// 1000000 이하의 피보나치 수열의 짝수 항들의 합을 저장할 변수
	int sum = 0, cnn = 0;

	// 1000000 이하의 모든 항을 생성하면서
	for (int i = 1; kkr(i,cnn) <= 10; i++) {
		// 현재 항이 짝수이면 합에 더함
		cnn = 0;
		printf("i : %d kkr(n) : %d kkr(n-1) : %d kkr(n-2) : %d \n", i, kkr(i,cnn), kkr(i-1,cnn), kkr(i-2,cnn));
		if (kkr(i,cnn) % 2 == 0) {
			sum += kkr(i,cnn);
		}
	}

	// 합을 출력
	printf("1000000 이하의 피보나치 수열의 짝수 항들의 합은 %d입니다.\n", sum);

	printf("피보나치", sum);
	return 0;
}*/

// 문5 사용자로부터 N 값을 입력 받고 1부터 n까지의 곱을 출력한다.
/*#include  <stdio.h>
int main() {
	int N, sum = 1, i;
	printf("1부터 N까지의 곱을 구하라.\n");
	printf("값을 입력하시오 : ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		sum = sum * i;
	}
	printf("1부터 N까지의 곱 = %d", sum);
	return 0;
}*/

// 문6 다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라
// 조건1 a+b+c = 2000,			조건2 a>b>c, a,b,c는 모두 자연수
/*#include <stdio.h>
int main() {
	int a, b, c, cnt=0, a1=0, b1=0, c1=0;
	for (a = 1; a < 2000; a++) {
		for (b = 1; b < 2000; b++) {
			for (c = 1; c < 2000; c++) {
				if ((a + b + c) == 2000 && a > b && b > c) {
					cnt++;

					printf("a : %d, b : %d, c : %d	\t", a, b, c);

				}
				if (a > a1 && (a + b + c) == 2000) {
					a1 = a;
				}
				if (b > b1 && (a + b + c) == 2000) {
					b1 = b;
				}
				if (c > c1 && (a + b + c) == 2000) {
					c1 = c;
				
						//printf("a : %d, b : %d, c : %d	\t", a, b, c);
				}
			}
		}
	}
	printf("a : %d, b : %d, c : %d", a1, b1, c1);
	printf("조건에 맞는 자연수의 개수 : %d", cnt);
	return 0;
}*/



//1997 2 1
//1000 999 1
//668 667 665

//문6 다른 사람이 푼 방법
/*#include <stdio.h>

int main() {
	int a, b, c = 0;
	int cnt = 0;
	//서로 다른 수 3개가 더해서 2000이 되는경우 
	// 1997 2 1  ~ 668 667 665 (작은 수 범위 정하기 vs 큰 수 범위 정하기)
	for (a = 1; a < 666; a++) { //a는 가장 작은 수 1~665까지의 경우가 있다.
		for (b = a + 1; b <= (2000 - a) / 2; b++) { //b는 두번째 수 c와 a와 같지 않은 경우로 진행
			c = 2000 - a - b;
			if (c != b)
				cnt++;
		}
	}
	printf("a+b+c = 2000 && a<b<c를 만족하는 갯수는 %d 이다.", cnt);
}*/

//문7 임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라. 예를 들어서 N = 18 일 경우 
// N = 18 , N = 18 = 2 * 3 * 3

/*#include <stdio.h>
int main() {
	int N, i;
	printf("자연수를 입력 하시오 : ");
	scanf("%d", &N);
	printf("N = %d, %d = ", N, N);
	
	for (i = 2; i <= N; i++) {     //2  25       3  25      4 25     5 25                         
		while (N % i == 0) {       // !=0        !=0                 =0 
			printf("%d", i);       //                                5
			if (N / i > 1)         //                                5>1
				printf(" X ");     //                                x
			N = N / i;             //                                5
		}  
		printf("(N = %d), (i = %d) \t", N, i);
	}
	return 0;
}*/


//문7 다른사람 풀이
/*#include <stdio.h>

int main() {
	int N, i;

	printf("임의의 자연수를 입력하라. : \n");   
	scanf("%d", &N);  // 18
	printf("N = %d, %d = : ", N, N);  

	for (i = 2; i <= N; i++) { //  N=18 i=2              N=9 i=3        N=3 i=3     N=1 i=3
		while (N % i == 0) { //    0       9%2 != 0      0              0           
			printf("%d", i); //    2                     3              3
			if (N / i > 1) { //    9>1                   3>1            1>1
				printf(" x ");//    x                    x                 
			}
			N = N / i; //           N = 9                N = 3          N = 1
		}
	}
	return 0;   // 임의의 자연수를 입력하라. :      18     N = 18, 18 = : 2x3x3
}*/

//문7 다른 사람 풀이
/*#include <stdio.h>

int main() {
	int N = 0;

	printf("임의의 자연수 N을 입력해주세요 : ");
	scanf_s("%d", &N);
	printf("%d =", N);

	int i = 2;
	while (N > 1) {
		if (N == i) {
			printf(" %d", N);
			break;
		}
		else if (!(N % i)) {
			N = N / i;
			printf(" %d *", i);
			continue;
		}
		i++;
	}

	return 0;
}*/



//문8 바드 풀이
/*#include <stdio.h>
#include <math.h>

int millerRabin(int n) {
	// 2보다 작거나 짝수는 소수가 아님
	if (n <= 2 || n % 2 == 0) return 0;

	// n-1을 2^s * d 형태로 표현
	int s = 0, d = n - 1;
	while (d % 2 == 0) {
		printf("befor %d\n", d);
		d >>= 1;
		printf("after %d\n", d);
		s++;
	}

	// a^(n-1) mod n 계산
	for (int a = 3; a < n; a++) {
		int temp = d, mod = 1;
		for (int i = 0; i < s; i++) {
			mod = (mod * mod) % n;
			if (temp % 2 == 1) mod = (mod * a) % n;
			temp >>= 1;
		}

		// Miller-Rabin 테스트 실패
		if (mod != 1 && mod != n - 1) return 0;
	}

	return 1;
}

int main() {
	int N;
	scanf("%d", &N);

	printf("%d = ", N);

	// 2부터 N의 제곱근까지 반복하며 소수인지 확인
	for (int i = 2; i <= sqrt(N); i++) {
		if (millerRabin(i)) {
			while (N % i == 0) {
				printf("%d ", i);
				N /= i;
			}
		}
	}

	// 남은 N이 1보다 큰 경우 (소수인 경우)
	if (N > 1) {
		printf("%d", N);
	}

	printf("\n");
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int N, i;
	printf("자연수 입력");
		scanf("%d", &N);
		i = 2;
		if (!(N % i))
			printf("yes N : %d, i : %d\n", N, i);
		else 
			printf("no N : %d, i : %d\n", N, i);
		return 0;
}*/

//아빠 문제
/*#include <stdio.h>
int main() {
	int N, i, a, b, cnt = 0, j, hf, ex = 1, ex2 = 1, ex3 = 1,ex4 = 1, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, bkex, c, f = 1, p=1, q=1;
	printf("자연수 입력");
	scanf("%d", &N);
	for (i = 1; N / i > 0; i = i * 10) { cnt++; ex = ex * 10; }
	//printf("자리 수 %d \n ex = %d\n", cnt, ex);
	printf("입력 받은 값 : %d \t 결과 값 : ", N);

	b = N;
	bkex = ex / 10;
	ex3 = ex4 = ex;
	if (cnt % 2 == 0) { //짝수 자리 수 일 때
		//printf("아무말 %d", cnt);
		for (j = cnt; j > cnt / 2; --j) { // 앞 두 자리 순차 복원
			a = (b / (ex / 10)) - ((b / ex) * 10);

			ex = ex / 10;

			sum3 = sum3 + a;
			//if(cnt/)
			sum3 = sum3 * 10;
		}
		sum3 = sum3 / 10;
		ex3 = ex3 / 10;
		for (j = cnt; j > cnt/2; --j) { // 뒤 두 자리 역순 복원
			ex2 = ex2 * 10;
			c = (b / (f * p)) - ((b / ex2) * 10);
			p = p * 10;
			sum2 = sum2 + (c * ex3);
			ex3 = ex3 / 10;
		}printf("아무말 %d", sum2);
	} //printf("\n절반 거꾸로 복원 값 : %d\n", sum3 + sum2);


	else if (cnt % 2 != 0) {
			for (j = cnt; j > 0; --j) {


				a = (b / (ex4 / 10)) - ((b / ex4) * 10);

				ex4 = ex4 / 10;

				sum1 = sum1 + a * ex4;
				sum = (sum + (a * (bkex / ex4)));

				//12345678 => 87651234 

				//printf("a = %d,\t b = %d,\t j = %d\n ", a, b, j);
				if (j > 1) {
					printf(" %d, ", a);
				}
				else if (j == 1) {
					printf(" %d ", a);
				}

			}
		}
		printf("\n 복원 값 : %d\n", sum1);
		printf("\n거꾸로 복원 값 : %d\n", sum);
		printf("\n절반 거꾸로 복원 값 : %d\n", sum3 + sum2);
	
		//a = b / 10;
	//	a = b - a * 10;
		
		//	b = b / 10;	
		//	if (b > 0) {
		//		printf(" %d, ", a);
		//	}
		//	else if(b == 0) {
			//	printf(" %d", a);
			//}
			//}
	return 0;
}*/

//아빠 문제 변수 줄이기 , 수정본
/*#include <stdio.h>
int main() {
	int N, i, a, cnt = 0, ex = 1, sum = 0, sum1 = 0, p = 1;
	printf("자연수 입력");
	scanf("%d", &N);
	for (i = 1; N / i > 0; i = i * 10) cnt++;		//자릿수 카운트
	ex = i/10;										//0개수 하나 줄임 
	for (i = 0; i < cnt/2; i++) p*=10;				//자릿수 0개수를 절반으로 생성
	printf("입력 받은 값 : %d \t", N);				
	if (cnt % 2 == 0) {								//짝수 자릿수 일 때
		for (i = ex; i >= p; i = i / 10) {			// 앞자리 절반 숫자 순차 복원 후 뒷자리 절반으로 이동
			a = N / i - N / (i*10) * 10;			// Parsing 과정
			sum = sum *10 + a;			
		}
		for (i = 10; i <= p; i = i * 10) {			// 뒷자리 절반 숫자 역순 복원 후 앞자리 절반으로 이동			
			a = (N / (i/10)) - ((N / i) * 10);		// Parsing 과정	
			sum = sum + (a * ((ex*10)/i));
			}//12345678 => 87651234
		printf("\n절반 거꾸로 복원 값 : %d\n", sum);
	} 
	else if (cnt % 2 != 0) {						// 홀수 자릿수 일 때
		printf("결과 값 : ");
		for (i = ex; i > 0 ; i = i / 10) {
			a = (N / i) - ((N / (i*10)) * 10);		// Parsing 과정
			sum1 = sum1 * 10 + a;					// 정배열 복원 값
			sum = sum + a*(ex/i);					// 역배열 복원 값
			if (i > 1) printf(" %d, ", a);			// Parsing 출력
			else if (i == 1) printf(" %d ", a);		// Parsing 종료	
		}
		printf("\n 복원 값 : %d\n", sum1);
		printf("\n거꾸로 복원 값 : %d\n", sum);
	}
	return 0;
}*/

//마이 펫
/*#include <stdio.h>
int main() {
	int input;

	printf("마이펫 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	if (input == 1) {
		printf("아이 맛있어 \n");
	}
	else if (input == 2) {
		printf("아이 시원해 \n");
	}
	else if (input == 3) {
		printf("zzz \n");
	}
	else {
		printf("무슨 명령인지 못 알아 듣겠어. 왈왈 \n");
	}
	return 0;
}*/

//업그레이드 버전
/*#include <stdio.h>
int main() {
	int input;

	printf("마이펫 \n");
	printf("무엇을 하실 것인지 입력하세요 \n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");

	scanf("%d", &input);

	switch (input) {
		case 1:
			printf("아이 맛있어 \n");
			break;
		case 3:
			printf("아이 시원해 \n");
			break;
		case 10:
			printf("zzz \n");
			break;
		default:
			printf("무슨 명령인지 못알아 듣겠어. 멍멍 \n");
			break;
	}
	return 0;
}*/


/*#include <stdio.h>
int main() {
	int a;
	double b;

	b = 2.4;
	a = b;
	printf("%f", a);
	return 0;
}*/

/*
#include <stdio.h>
int main() {
	//printf("floatf : %f \n", 0.f);
	float a;
		a = 1. / 0.f;
		printf("a : %f \n", a);
	return 0;
} */


/*#include <stdio.h>
int main() {
	int a;
	double b;

	b = 2.4;
	a = (int)b-1;
	printf("%d\n", a);
	printf("%f", b);
}*/

/*#include <stdio.h>
int main() {
	int a, b;
	float c, D;

	printf("두 숫자 입력 : ");
	scanf("%d %d", &a, &b);

	c = a / b;
	D = (float)a / b;

	printf("두 수의 비율 : %f, %f", c, D);
	return 0;
}*/


/*#include <stdio.h>
int main() {
	float i, f;
	printf("실수를 입력하시오 : ");
	scanf("%f", &f);
	printf("%f\n", f);
	f = f * 100;
	i = (int)f - (((int)f / 100) * 100);
	//i = (f - (int)f) * 100;
	printf("i = %d\n", (int)i);
	return 0;
}*/

/* 배열 기초 */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//arr[3] = 10;
	printf("array 3번째 원소 : %d\n", arr[3]);
	return 0;
}*/

/* 배열 출력하기 */
/*#include <stdio.h>
int main() {
	int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
	}
	return 0;
}*/

/* 평균 구하기 */
/*#include <stdio.h>
int main() {
	int arr[5]; //성적을 저장하는 배열
	int i, ave = 0;

	for (i = 0; i < 5; i++) // 학생들의 성적을 입력 받는 부분
	{
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) // 전체 학생의 성적의 합을 구하는 부분
	{
		ave = ave + arr[i];
	}

	// 평균이믈 5로 나눠준다
	printf("전체 학생의 평균은 : %d \n", ave / 5);
	return 0;
}*/

/*친구의 부탁*/
/*#include <stdio.h>
int main() {
	int arr[10];
	int i, ave = 0;
	for (i = 0; i < 10; i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		ave = ave + arr[i];
	}
	ave = ave / 10;
	printf("전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < 10; i++) {
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
			printf("합격 \n");
		else
			printf("불합격 \n");
	}
	return 0;
}*/

/* 소수 프로그램 */
/*#include <stdio.h>
int main() {
	int prime[1000] = {0};
	int i, b = 2, c = 0; //i는 for문 변수, b는 prime의 첫째항, c는 prime 방 번호 카운트
	//for (i = 0; i < 1000; i++) printf("prime의 %d번째 방 %d \t", i, prime[i]);		
	prime[0] = b;
	b=b+1; //b=b+1 은 prime의 두번째항
	printf("소수 : %d \n", prime[0]);
	for (;;) {                       //소수 뽑아내기
		for (i = 0; i <= c; i++) {
			if (b % prime[i] != 0) continue;     //cnt++;      //cnt =0
			else break;
		}
		if ((i - 1) == c) {           // prime 방에 넣어주기
			prime[i] = b;
			c++;
			printf("소수 : %d \n", prime[i]);
			if (c == 999) break;
		}
		b = b + 2;
	} 
	return 0;
}*/

/* 복습 해보기 */
/*#include <stdio.h>
int main() {
	int prime[1000];
	int i, b = 2, c = 0;
	prime[0] = b;
	b = b + 1;
	printf("소수 %d \n", prime[0]);

	for (;;) {
		for (i = 0; i <= c; i++) {
			if (b % prime[i] != 0) continue;
			else break;
		}
		if (i - 1 == c) {
			prime[i] = b;
			c++;
			printf("소수 %d \n", prime[i]);
			if (c == 999) break;
		}
		b = b + 2;
	}
	return 0;
}*/

/* 과연 될까? */
/*#include <stdio.h>
int main() {
	int total;
	printf("전체 학생 수 : ");
	scanf("%d", &total);
	int arr[total];
	int i, ave = 0;

	for (i = 0; i < total; i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}
	ave = ave / total;
	printf("전체 학생의 평균은 : %d \n", ave);

	for (i = 0; i < total; i++) {
		printf("학생 %d :", i + 1);
		if (arr[i] >= ave)
			printf("합격 \n");
		else
			printf("불합격 \n");
	}
	return 0;
}*/

/* 설마 이것도? */
/*#include <stdio.h>
int main() {
	int total = 3;
	int arr[total];
	int i, ave = 0;

	for (i = 0; i < total; i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}

	ave = ave / total;
	printf("전체 학생의 평균은 : %d \n", ave);

	for (i = 0; i < total; i++) {
		printf("학생 %d : ", i + 1);
		if (arr[i] >= ave)
			printf("합격 \n");
		else
			printf("불합격 \n");
	}
	return 0;
}*/

/*초기화 되지 않은 값*/
/*#include <stdio.h>
int main() {
	int arr[3] = { 1 };;
	
	printf("너의 값은 뭐니 : %d", arr[0]);
	
	return 0;
}*/

/* 11-1 c언어의 아파트(배열) 문제1 위 입력 받은 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요. */
/*#include <stdio.h>
int main() {
	int stu[3];
	int i, save, j;
	for (i = 0; i < 3; i++) {
		printf("%d번째 학생의 성적을 입력하시오 : ", i + 1);
		scanf("%d", &stu[i]);
		for (;;) {
			if (stu[i] > 100 || stu[i] < 0) {
				printf("다시 입력하시오 : ");
				scanf("%d", &stu[i]);
			}
			else break;             //printf("print %d", stu[i]);
		}
	}
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 3; j++) {
				if (stu[i] > stu[j]) {
					save = stu[i];
					stu[i] = stu[j];
					stu[j] = save;
				}
			}
		}
		printf("성적을 높은 순으로 정렬 : \t");
		for (i = 2; i >= 0; i--) {
			printf("%d\t", stu[i]);
		}

	return 0;
}*/

/* 11-1 c언어의 아파트(배열) 문제2 입력 받은 학생들의 성적을 막대 그래프로 나타내는 프로그램을 만들어 보세요. */
/*#include <stdio.h>
int main() {
	int num[12];
	int i, j;
		for (i = 0; i < 12; i++) {
			printf("%d번째 학생의 성적을 입력해 주세요 : ", i + 1);
			scanf("%d", &num[i]);
			for (;;) {
				if (num[i] > 100 || num[i] < 0) {
					printf("0과 100 사이의 수를 입력해 주세요 : ");
					scanf("%d", &num[i]);
				}
				else break;
			}
		}
		for (i = 0; i < 12; i++) {
			printf("%d\n", num[i]);
				for (j = 0; j < num[i]; j++) {
				printf("■");
			}
			printf("\n\n");
		}
		return 0;
}*/

/* 2차원 배열 */
/*#include <stdio.h>
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	printf("arr 배열의 2행 3열의 수를 출력 : %d \n", arr[1][2]);
	printf("arr 배열의 1행 2열의 수를 출력 : %d \n", arr[0][1]);
	return 0;
}*/

/* 학생 점수 입력 받기 */
/*#include <stdio.h>
int main() {
	int score[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				printf("%d 번째 학생의 국어 점수 : ", i + 1);
				scanf("%d", &score[i][j]);
			}
			else if (j == 1) {
				printf("%d 번째 학생의 수학 점수 : ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%d 번째 학생의 국어 점수 : %d, 수학 점수 : %d \n", i + 1, score[i][0], score[i][1]);
	}
	return 0;
}*/

/* 1. Selection Srot (선택 정렬) */
/*#include <stdio.h>
int main() {
	int arr[10] = { 2,3,8,7,9,6,5,4,1,10 };
	int sum = 0;
	for (int i = 0; i <= 9; i++) {
		for (int j = i + 1; j <= 9; j++) {
			if (arr[i] < arr[j]) {
				sum = arr[i];
				arr[i] = arr[j];
				arr[j] = sum;
			}
		}
	}
	for (int i = 0; i <= 9; i++) {
		printf("%d번째 배열 출력 %d\n", i + 1, arr[i]);
	}
	return 0;
}*/

/* 2. Insertion Srot (삽입 정렬) */
/*#include <stdio.h>
int main() {
	int arr[] = { 5,2,4,6,1,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 1;
	int j,n;
	while (i < size) {
		int cur = arr[i];
		j = i - 1;
		//printf("cur : %d\n", cur);
		while (j >= 0 && arr[j] > cur) {
			arr[j + 1] = arr[j];
			//printf("cur, j : %d, %d\n", cur, j);
			j--;
		}
		arr[j+1] = cur; 
		//printf("J값 : %d\n", j);
		i++;
	}
	for (i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	printf("\n");
	return 0;
}*/


/* 선택 정렬 */
/*#include <stdio.h>
int main() {
	int arr[] = { 5,2,4,6,1,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d번째 수 %d\n", i+1,arr[i]);
	}
}*/

/* 삽입 정렬 for */
/*#include <stdio.h>
int main() {
	int arr[] = { 5,2,4,6,1,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int j;
	for (int i = 1; i < size; i++) {
		int cur = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > cur; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = cur;
	}
	for (int i = 0; i < size; i++) {
		printf("%d번째 값 %d\n", i + 1, arr[i]);
	}
	return 0;
}*/


/* 3. 버블 정렬 (Bubble Sort) */
/*#include <stdio.h>
int main() {
	int arr[] = { 5,2,4,6,1,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d번째 값 %d\n", i + 1, arr[i]);
	}
	return 0;
}*/


















/* 포인터 시작 */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	printf("포인터 p에 들어 있는 값 : %p \n", p);
	printf("int 변수 a가 저장된 주소 : %p\n", &a);
	return 0;
}*/




/* *연산자의 이용 */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	a = 2;
	printf("a의 값 : %d \n", a);
	printf("*p의 값 : %d\n", *p);
	printf("p의 값 : %p\n", p);
	return 0;
}*/

/* *연산자 */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	*p = 3;
	printf("a의 값 : %d\n", a);
	printf("*p의 값 : %d\n", *p);
	printf("p의 주소 : %d\n", p);
	printf("a의 주소 : %d", &a);

	return 0;
}*/



/* 포인터도 변수다 */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	int *p;
	p = &a;
	*p = 2;
	p = &b;
	*p = 4;
	printf("a : %d \n", a);
	printf("b : %d \n", b);
	return 0;
}*/

/* 상수 포인터? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	const int* pa = &a;
	b = 3;
	//*pa = 3; // 올바르지 않은 문장
	pa = &b; // 올바른 문장
	//printf("%d", b);
	return 0;
}*/


/* 상수 포인터? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	int* const pa = &a;
	*pa = 3; // 올바른 문장
	//printf("%d", a);
	pa = &b; // 올바르지 않은 문장
	return 0;
}*/

/* 상수 포인터? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	const int* const pa = &a;
	*pa = 3; // 올바르지 않은 문장
	//printf("%d", a);
	//b = 3;
	pa = &b; // 올바르지 않은 문장
	//printf("%d", a);
	return 0;
}*/

/* 포인터의 덧셈 */
/*#include <stdio.h>
int main() {
	int a;
	int* pa;
	pa = &a;
	printf("pa 의 값 : %p \n", pa);
	printf("(pa+1)의 값 : %p \n", pa + 1);
	return 0;
}*/

/* 과연? */
/*#include <stdio.h>
int main() {
	int a;
	char b;
	double c;
	int* pa = &a;
	char* pb = &b;
	double* pc = &c;

	printf("pa 의 값 : %p \n", pa);
	printf("(pa+1) 의 값 : %p \n", pa + 1);
	printf("pb 의 값 : %p \n", pb);
	printf("(pb+1) 의 값 : %p \n", pb + 1);
	printf("pc 의 값 :\n %p \n", pc);
	printf("(pc+1) 의 값 :\n %p \n", pc + 1);
	return 0;
}*/


/* 포인터의 뺄셈 */
/*#include <stdio.h>
int main() {
	int a;
	int* pa=&a;
	//pa = &a;
	printf("pa 의 값 : %p \n", pa);
	printf("(pa-1)의 값 : %p \n", pa - 1);
	return 0;
}*/

/* 포인터끼리의 덧셈 */
/*#include <stdio.h>
int main() {
	int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;
	return 0;
}*/

/* 배열의 존재 상태? */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("arr[%d] 의 주소값 : %p \n", i, &arr[i]);
	}
	return 0;
}*/

/* 과연? */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d]의 주소값 : %p", i, &arr[i]);
		printf("(parr + %d)의 값 : %p", i, (parr + i));
		if (&arr[i] == (parr + i)) {
			printf("--> 일치\n");
		}
		else printf("--> 불일치\n");
	} 
	return 0;
}*/

/* wow */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	parr = &arr[0];
	printf("arr[3] = %d, *(parr+3) = %d \n", arr[3], *(parr + 3));
	return 0;
}*/


/*arr의 정체*/
/*#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	printf("arr의 정체 : %p\n", arr);
	printf("arr[0]의 주소 값 : %p\n", &arr[0]);
	return 0;
}*/

/* 배열은 배열이고 포인터는 포인터다 */
/*#include <stdio.h>
int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* parr = arr;
	printf("Sizeof(arr) : %d\n", sizeof(arr));
	printf("Sizeof(parr) : %d \n", sizeof(parr));
	return 0;
}*/

/* [] 연산자 */
/*#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,9,5 };
	printf("a[3] : %d\n", arr[3]);
	printf("*(a+3) : %d\n", *(arr+3));
	return 0;
}*/

/* 신기한 [] 사용 */
/*#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,4,5 };
	printf("3[arr] : %d\n", 3[arr]);
	printf("*(3+a) : %d\n", *(arr+3));
	return 0;
}*/

/* 1차원 배열 가리키기 */
/*#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	int* parr;
	parr = arr;				//	parr=&arr[0]; 과 동일하다
	printf("arr[1] : %d\n", arr[1]);
	printf("parr[1] : %d\n", *(parr+1));
	return 0;
}*/

/* 포인터 이용하기 */
/*#include <stdio.h>
int main() {
	int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
	int* parr = arr;
	int sum = 0;
	
	while (parr - arr <= 9) {
		//printf("parr : %p -- arr : %p\n", parr, arr);
		//parr1 = parr - arr;
		
		//printf("parr-arr : %p\n", parr-arr);
		sum += (*parr);
		parr++;
	}
	printf("내 시험 점수 평균 : %d\n", sum / 10);
	return 0;
}*/

/* ai 물어본 결과 */
/*#include <stdio.h>
int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* parr;

	parr = &arr[0]; // parr은 arr[0]의 주소를 가지게 됨
	printf("parr = %d\n", *parr); // 10 출력

	*parr = 100; // parr이 가리키는 메모리 공간의 값을 100으로 변경
	printf("arr[0] = %d\n", arr[0]); // 100 출력
	return 0;
}*/

/* 배열명 */
/*#include <stdio.h>
int main() {
	int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
	arr++;
	return 0;
}*/

/* 포인터의 포인터 */
/*#include <stdio.h>
int main() {
	int a;
	int* pa;
	int** ppa;
	pa = &a;	// *pa=a
	ppa = &pa;	// *ppa = pa = &a,  **ppa = *pa = a = 3
	a = 3;
	printf("a : %d // *pa : %d // **ppa : %d\n", a, *pa, **ppa);
	printf("&a : %d // pa : %d // *ppa : %d\n", &a, pa, *ppa);
	printf("&pa : %d // ppa : %d\n", &pa, ppa);
	return 0;
}*/

/* 배열 이름의 주소값? */
/*#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	int (*parr)[3] = &arr;
	int a=100;
	
	printf("arr[1] : %d\n", arr[1]);
	printf("parr[1] : %d\n", (*parr)[1]);
	printf("arr : %p\n", arr);
	printf("parr : %p\n", parr);
	return 0;
}*/

/* 정말로? */
/*#include <stdio.h>
int main() {
	int arr[2][3] = { 3,5,8,2,43,1};

	printf("arr[0] : %p \n", arr[0]);
	printf("&arr[0][0] : %p \n", &arr[0][0]);
	printf("arr[1] : %p \n", arr[1]);
	printf("&arr[1][0] : %p \n", &arr[1][0]);
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	printf("전체 크기 : %d\n", sizeof(arr));
	printf("총 열의 개수 : %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("총 행의 개수 : %d\n", sizeof(arr) / sizeof(arr[0]));
}*/

/* 과연 될까? */
/*#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	int** parr;
	parr = arr;
	printf("arr[1][1] : %d\n", arr[1][1]);
	printf("parr[1][1] : %d\n", parr[1][1]);
}*/

/* 드디어! 배우는 배열의 포인터 */
/*#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int(*parr)[3];;
	parr = arr;
	printf("parr[1][2] : %d, arr[1][2] : %d\n", parr[1][2], arr[1][2]);
	return 0;
}*/


// 배열의 형 (*포인터 이름)[2차원 배열의 열 개수];
//	ex) int (*parr)[3];

/* 배열 포인터 */
/*#include <stdio.h>
int main() {
	int arr[2][3];
	int brr[10][3];
	int crr[2][5];

	int(*parr)[3];

	parr = arr;
	parr = brr;
	parr = crr;
	
	return 0;
}*/

/* 그렇다면 이 코드는 무슨 일을 했을까요? */
/*/#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int**parr;
	parr = arr;
	//printf("arr : %d \n", *parr);
	printf("parr[1][1] : %d\n", parr[1][1]); //버그!
	return 0;
}*/

/* 포인터 배열 */
/*#include <stdio.h>
int main() {
	int* arr[3];
	int a = 1, b = 2, c = 3;
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;

	printf("a : %d, *arr[0] : %d\n", a, *arr[0]);
	printf("b : %d, *arr[1] : %d\n", b, *arr[1]);
	printf("c : %d, *arr[2] : %d\n", c, *arr[2]);

	printf("a : %p, arr[0] : %p\n", a, arr[0]);
	return 0;
}*/

/* 함수 */
/*#include <stdio.h>
int print_hello() {
	printf("Hello!!\n");
	return 0;
}
int main() {
	printf("함수를 불러보자 : ");
	print_hello();

	printf("또 부를까? ");
	print_hello();

	return 0;
}*/





/* 함수의 리턴 */
/*#include <stdio.h>
int return_func() {
	printf("난 실행된다\n");
	return 0;
	printf("난 안돼 ㅠ");
}
int main() {
	return_func();
	return 0;
}*/





/* 반환값 */
/*#include <stdio.h>
int ret() { return 1000; }
int main() {
	int a = ret();
	printf("ret() 함수의 반환값 : %d \n", a);
	return 0;
}*/



/* 마술 상자 */
/*#include <stdio.h>
int magicbox() {
	i += 4;
	return 0;
}
int main() {
	int i;
	printf("마술 상자에 집어넣을 값 : ");
	scanf("%d", &i);

	magicbox();
	printf("마술 상자를 지나면 : %d \n", i);
	return 0;
}*/



/* 함수의 인자 */
/*#include <stdio.h>
int slave(int master_money) {
	master_money += 10000;
	return master_money;
}
int main() {
	int my_money = 100000;
	printf("2009.12.12 재산 : $%d\n", slave(my_money));
	return 0;
}*/


/* 될까용 */
/*#include <stdio.h>
int slave(int my_money) {
	my_money += 10000;
	return my_money;
}
int main() {
	int my_money = 100000;
	printf("2009.12.12 재산 : $%d\n", slave(my_money));
	printf("my_money : %d", my_money);

	return 0;
}*/

/* 마술 상자 함수 문제1 */
/*#include <stdio.h>
int hs(int m_m) {
	m_m += 4;
	//printf("i : %d", m_m);
	return m_m;
}
int main() {
	int i = 10;
	printf("i : %d\n",hs(i));
	printf("기존 i : %d", i);
	return 0;
}*/


/* 문2 */
/*#include <stdio.h>
int kkr(int m) {
	m += 2;
}
int rk(int n) {
	kkr(n) + n;
}
int main() {
	int i = 0;
	printf("오늘 귀족의 수입 : %d\n", kkr(i));
	printf("현재 귀족의 재산 : %d\n", rk(i));

	return 0;
}*/


/* 문3 */
/*#include <stdio.h>
int hap(int i) {
	int i;
	int sum = 0;
	for()
}

int main() {
	int i = 1;
	int n;
	
	printf("n 값을 입력하시오 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		hap(i);
		i++;
	}
	return 0;
} */


/* 날짜 찍으면 요일 나오게 만들기 */
/*#include <stdio.h>
int main() {
	int y, m, d, yo;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int daysum=0;
	printf("년도.월.일 순으로 입력하시오.\n");
	scanf ("%d. %d. %d", &y, &m, &d);
	printf("y=%d, m=%d, d=%d\n", y, m, d);
	printf("y-1 = %d\n", y - 1);
	daysum = ((365 * (y-1)) + ((y-1) / 4) - ((y-1) / 100) + ((y-1) / 400));    //윤년 계산
	printf("윤년 4 = %d, 100 = %d, 400 = %d\n", y % 4, y%100, y%400);

	//if (y % 4 == 0 && y % 400 == 0 || y % 100 != 0) {
			//if (m > 2) { daysum = daysum + 1; }
	//}
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				if (m > 2) { daysum = daysum + 1; }                     // 400년 단위 윤년에 2월 이후면 플러스
				//else if(m = 2 && d > 28) { daysum = daysum + 1; }
			}
		}
		else if (m > 2) { daysum = daysum + 1; }                         // 4년 단위 윤년에 2월 이후면 플러스
			//else if (m = 2 && d > 28) { daysum = daysum + 1; }
	}

	for (int i = 0; i < m - 1; i++) {
		daysum = daysum + month[i];               // 구하려는 달 직전 달의 일까지 합산
	}
	daysum = daysum + d;
	yo = daysum%7;
	
	switch (yo) {
	case 1:
		printf("월요일 %d", yo);
		break;
	case 2:
		printf("화요일 %d", yo);
		break;
	case 3:
		printf("수요일 %d", yo);
		break;
	case 4:
		printf("목요일 %d", yo);
		break;
	case 5:
		printf("금요일 %d", yo);
		break;
	case 6:
		printf("토요일 %d", yo);
		break;
	case 0:
		printf("일요일 %d", yo);
		break;
	}

}*/

/* 달력 만들기 */
/*#include <stdio.h>
int main() {
	int y, i, j, k, yo;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysum = 0;

	printf("년도를 입력하시오.\n");
	scanf("%d", &y);

	daysum = ((365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1); // 입력년도 1월1일까지 구하기

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {	
				month[1] = 29;
			}
		}
		else month[1] = 29;	}
	yo = daysum % 7;

	
	for (j = 0; j < 12; j++) {
		printf("\n\n\n             %d년 %d월\n", y, j + 1);
		printf("======================================\n");
		printf("   일   월   화   수   목   금   토\n");

		for (k = 0; k < yo; k++) { printf("   %2c",' '); }
		for (i = 1; i <= month[j]; i++) {
			if (yo == 7) {printf("\n   %2d",i);  yo = 1;}
			else {        printf("   %2d", i);   yo++; }
		}
		printf("\n======================================\n");
	} 
	return 0;
} */









/*#include <stdio.h>
int main() {
	int y, i, j, k, yo;
	int daysum = 0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	printf("연도를 입력하시오.");
	scanf("%d", &y);

	daysum = (365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1;
	yo = daysum % 7;
	printf("2024년 1월 1일의 요일 = %d \n", yo);
	printf("%d", daysum);

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) { month[1] = 29; }
		}  
		else month[1] = 29;
	}
	

	for (i = 0; i < 12; i++) {
		printf("\n\n\n        %d년 %d월\n", y, i + 1);
		printf("===============================\n");
		printf("  일  월  화  수  목  금  토\n");

		for (k = 0; k < yo; k++) {printf("  %2c", ' ');}
		
		for (j = 1; j <= month[i]; j++) {
			
			if (yo == 7) { printf("\n  %2d", j); yo = 1; }
			else { printf("  %2d", j); yo++; }
		}
		printf("===============================\n")
	}
	return 0;
}
*/

#include <stdio.h>
int main() {
	int y, i, k, yo,l,m,fst,scn,n,cn,yo2,daysum;
	int j = m = 0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char year[10] = "년";
	char mon[10] = "월";
	char line[10] = "=";
	char week[100] = "  일  월  화  수  목  금  토";
	char space[10] = " ";
	int sw1 = 0;
	int sw2 = 0;
	char a;

	printf("연도를 입력하시오.");
	scanf("%d", &y);

	daysum = (365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1;
	yo = daysum % 7;
	yo2 = (yo + month[0]) % 7;
	printf("2024년 1월 1일의 요일 = %d \n", yo);
	printf("%d", daysum);

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) { month[1] = 29; }
		}
		else month[1] = 29;
	}


	for (i = 0; i < 12; i=i+2) {
		printf("\n\n\n");
		for (l = 0; l < 10; l++) printf("%s", space);
		printf("%d%s%s%d%s", y, year, space, i + 1, mon);
		for (l = 0; l < 20; l++) printf("%s", space);  
		printf("%d%s%s%d%s\n", y, year, space, i + 2, mon);
		for (l = 0; l < 2; l++) printf("%s", space);
		for (l = 0; l < 26; l++) printf("%s", line); 
		for (l = 0; l < 5; l++) printf("%s", space);
		for (l = 0; l < 26; l++) printf("%s", line);
		printf("\n");
		printf("%s   %s\n", week, week);
		
		
		fst = 1;
		scn = 1;
		sw1 = sw2 = 0;

		for (l = 0; l < 6; l++) {
			for (k = 0; k < yo; k++) printf("%4c", ' ');

			if (sw1==0) {
				for (j = fst; j <= month[i]; j++) {
					if (yo == 7) { yo = 0; fst = j; break; }
					else if (j == month[i]) sw1 = 1;
					printf("%4d", j); yo++;
				}
			}
			cn = 1;
			if (yo != 0) 
				cn = cn + 7 - yo;
				for (n = 0; n < cn; n++) printf("%4c", ' ');

			cn = 1;

			for (k = 0; k < yo2; k++) printf("%4c", ' ');

			if (sw2==0) {
				
				for (m = scn; m <= month[i + 1]; m++) {
					if (yo2 == 7) { yo2 = 0; scn = m; break; }
					else if (m == month[i + 1]) sw2 = 1; 
					printf("%4d", m); yo2++;
				}
			}
			if (yo2 != 0) {cn = cn + 7 - yo2 - 1;
				for (n = 0; n < cn; n++) printf("%4c", ' ');
			}
			printf("\n");
		}
		for (l = 0; l < 2; l++) printf("%s", space);
		for (l = 0; l < 26; l++) printf("%s", line);
		for (l = 0; l < 5; l++) printf("%s", space);
		for (l = 0; l < 26; l++) printf("%s", line);

		yo = yo2;
		yo2 = (yo + month[i+2]) % 7;
	}
	return 0;
}

























/*
#include <stdio.h>

int main() {
	char ch; //문자

	short sh; //정수
	int i;
	long lo;

	float fl; //실수
	double du;

	printf("char 형 변수 입력 : ");
	scanf("%c", &ch);

	printf("short 형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf("%ld", &lo);

	printf("float 형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double 형 변수 입력 : ");
	scanf("%lf", &du);

	printf("car : %c, short : %d, int : %d", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);

	return 0;
} */






















/*#include <stdio.h>       인트 20억       롱롱 더 
int main() {
	float a= 20000000000;
	printf("a의 값은 %d \n", a);

	return 0;
}*/