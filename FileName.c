/*/���� �˾ƺ���
#include <stdio.h>
int main() {
	int a; 
	a = 127;
	printf("a�� ���� %d ������ %o �Դϴ�. \n", 8, a);
	printf("a�� ���� %d ������ %d �Դϴ�. \n", 10, a);
	printf("a�� ���� %d ������ %x �Դϴ�. \n", 16, a);
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

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷��Դϴ�. \n");
	printf("���� �µ��� �Է��� �ּ��� \n: ");
	scanf("%lf", &celsius);

	printf("���� %f ���� ȭ���� %f �� �Դϴ� \n", celsius, 9 * celsius / 5 + 32);

	printf("���� %f ���� ȭ���� %f �� �Դϴ� \n", celsius, 9 / 5 *celsius +32);
	return 0;
}*/

/*#include <stdio.h> //ft -> cm ���� ȯ��

int main() {
	double ft;

	printf("ft�� cm�� �ٲ��ִ� ���α׷��Դϴ�. \n");
	printf("ft�� �Է��� �ּ��� \n: ");
	scanf("%lf", &ft);

	printf(" %f ft�� ��Ʈ�� %f cm �Դϴ� \n", ft, 3048 * ft / 100 );

	return 0;
}*/

 //if �� �̶�?
/*#include <stdio.h>
int main() {
	int i;
	printf("�Է��ϰ� ���� ���ڸ� �Է��ϼ���! : ");
	scanf("%d", &i);

	if (i == 7) {
		printf("����� ����� ���� 7 �� �Է��߽��ϴ�.");
	}

	else  { // ���⼭ else�� if (i != 7)�� ���� 
		printf("����� ���ڰ� �ƴմϴ�.");
	}
	return 0;
}*/

/*#include <stdio.h> 
int main() {
	double i, j;
	printf("������ ���� �� ������ �Է��ϼ��� : ");
	scanf("%lf %lf", &i, &j);

	if (j == 0) {
		printf("0 ���� ���� �� �����ϴ�. \n");
		return 0;
	}


	printf("%f �� %f �� ���� ����� : %f \n", i, j, i / j );

	return 0;
}*/

// �հ� or ���հ�

/* #include <stdio.h>
int main() {
	int score;

	printf("����� ���������� �Է��ϼ���! : ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("����� �հ��Դϴ�! \n");
	}
	if (score < 90) {
		printf("����� ���հ��Դϴ�! \n");
	}
	
	return 0;
}*/

// ũ�� ���ϱ�
/*#include <stdio.h>
int main() {
	int i, j;

	printf("ũ�⸦ ���� �� ���� �Է��� �ּ��� : ");
	scanf("%d %d", &i, &j);

	if (i > j)
	{
		printf("%d�� %d���� Ů�ϴ�.\n", i, j);
	}

	if (i < j)
	{
		printf("%d�� %d���� �۽��ϴ�.\n", i, j);
	}

	if (i >= j)
	{
		printf("%d�� %d���� ũ�ų� �����ϴ�.\n", i, j);
	}

	if (i <= j)
	{
		printf("%d�� %d���� �۰ų� �����ϴ�.\n", i, j);
	}

	if (i == j)
	{
		printf("%d�� %d��(��) �����ϴ�.\n", i, j);
	}

	if (i != j)
	{
		printf("%d�� %d��(��) �ٸ��ϴ�.\n", i, j);
	}

	return 0;

}*/

/*#include <stdio.h>
int main() {
	int num;

	printf("�ƹ� ���ڳ� �Է��� ������ : ");
	scanf("%d", &num);

	if (num == 7) {
		printf("����� ���� 7 �̱���! \n");
	}
	else {
		printf("�׳� ������ ������ %d�� �Է��߱���! \n", num);
	}
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int num;

	printf("�ƹ� ���ڳ� �Է��� ������ : ");
	scanf("%d", &num);

	if (num == 7) {
		printf("����� ���� 7 �̱���! \n");
	}
	else {
		if (num == 4) {
			printf("������ ���� 4 �ΰ���;;; \n");
		}
		else {
			printf("������ ������ %d�� �Է��߱���! \n", num);
		}
	}
	return 0;
}*/

/*#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;

	printf("����, ����, ����, ��ǻ�� ���α׷��� ������ ���� �Է��� �ּ���! : ");
	scanf("%f %f %f %f", &math, &english, &science, &programming);

	ave_score =
		(math + english + science + programming) / 4;
	printf("����� ��� ������ %f �Դϴ� \n", ave_score);
	if (ave_score >= 90) {
		printf("����� �����Դϴ�!");
	}
	else if (ave_score >= 40) {
		printf("���ݸ� ����ϼ���! \n");
	}
	else {
		printf("���θ� �߷� �մϱ�?! \n");
	}
	return 0;
}*/


//ũ�� ��
/*#include <stdio.h>
int main() {
	int a;
	printf("�ƹ� ���ڳ� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a >= 10) {
		if (a < 20) {
			printf("%d�� 10 �̻��̸鼭 20 �̸��� �� �Դϴ�. \n", a);
		}
		else if (a >= 20 || a < 10) {
			printf("%d�� 10 �̸��̰ų� 20�̻� �Դϴ�. \n", a);
		}
	}
	
	return 0;} */

//ũ�� ��
/*#include <stdio.h>
int main() {
	int a;
	printf("�ƹ� ���ڳ� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a >= 10 && a < 20 ) {
		
			printf("%d�� 10 �̻��̸鼭 20 �̸��� �� �Դϴ�. \n", a);
		}
	if (a >= 20 || a < 10) {
			printf("%d�� 10 �̸��̰ų� 20 �̻��� �� �Դϴ�. \n", a);
		}
	
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int height, weight;
	printf("����� Ű�� �����Ը� ���� �Է��� �ּ���! : ");
	scanf("%d %d", &height, &weight);

	if (height >= 190 || weight >= 100) {
		printf("����� '�ű�' �Դϴ�! \n");
	}
	if (!(height >= 190 || weight >= 100)) {
		printf("����� '�ű�'�� �ƴմϴ�! \n");
	}

	//else {
		//printf("����� '�ұ�' �Դϴ�!"); }
	return 0;
}*/

//1���� 100������ ��
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

//Ȧ���� �� 1~99
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

//¦���� �� 2~100
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

// 1~100���� ¦���� ��, Ȧ���� ��
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


//1���� 10000������ ��	
/*#include <stdio.h>
int main() {
	int i, sum = 0;
	for (i = 0; i <= 10000; i++) {
		sum = sum + i;
	}
	printf("1���� 10000������ �� : %d \n", sum);
	
	return 0;
}*/

// for �� ����
/*include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score = 0;

	printf("�� ���� ���� ������ �Է� ���� ���ΰ���?");
	scanf("%d", &subject);

	printf("\n �� ������ ������ �Է��� �ּ���. \n");
	for (i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf("%d", &score);
		sum_score = sum_score + score;
	}
	printf("��ü ������ ��� : %.2lf \n", sum_score / subject);
	return 0;

}*/

//break ��
/*#include <stdio.h>
int main() {
	int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");
	
	for (;;) {
		scanf("%d", &usranswer);
		if (usranswer == 3) {
			printf("���߼̱���! \n");
			break;
		} else {
			printf("Ʋ�Ⱦ��! \n");
		}
	}
	return 0;
}*/


// 5�� ����� ������ ���� ���
/*/#include <stdio.h>
int main() {
	int i;

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;
		printf("%d, ", i);
	}
	return 0;
}*/

// ������
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

// while ��
/*#include <stdio.h>
int main() {
	int i = 1, sum = 0;

	while (i <= 100) {
		sum += i;
		i++;
	}

	printf("1���� 100������ �� : %d \n", sum);
	return 0;
}*/

//do while ��
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

//��1
/*#include <stdio.h>
int main() {
	int i, j, N, k;
	printf("���ڸ� �Է��ϼ���! : ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {//�� ī��Ʈ
		for (j = 1; j <= N -i; j++) {//���� ī��Ʈ
			printf(" ");
		}
		for (k = 1; k <= i+i-1; k++) {//�� ī��Ʈ
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//��2
/*#include <stdio.h>
int main() {
	int lin, nul, sta, N, cn;
	printf("���ڸ� �Է��ϼ���! : ");
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

//��2 �ٸ� ��� Ǯ��
/*#include <stdio.h>
int main(){
	int N, LastLineStar, lin, sta, nul;
	printf("�ﰢ���� ���̸� �Է��ϼ���: ");
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


//��3
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
	
	printf("1000������ 3 �Ǵ� 5�� ����� �ڿ������� �� : %d", sum1);
	printf("\ncount = %d \n", cnt1);
	return 0;
}*/

//��4
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
	} printf("�鸸 ���� �Ǻ���ġ ���� �� ¦���� ��%d", sum);
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
	printf("�鸸 ���� �Ǻ���ġ ���� �� ¦���� �� : %d", sum);
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
			printf("¦����\n");
		}
		else {
			printf("\n");
		}
		a1 = a2;
		a2 = a3;

	} while (a3 <= 1000000);

	printf("1000000������ �Ǻ���ġ���� ¦������ ���� %d �̴�.\n\n", tot);
	return 0;
}*/

//����
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
	printf("���� %d \n", ansr);
	return 0;
}*/







/*#include <stdio.h>
int main() {
	printf("1000000 ������ �Ǻ���ġ ���� (1,1,2,3,5,8,...) �� ¦�� �׵��� ���� ���Ѵ�. \n");
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
// ��5
//#include <stdio.h>

/*#include <stdio.h>

int main() {
	// �Ǻ���ġ ������ ù �� ���� �ʱ�ȭ
	int a = 1, b = 1;

	// ¦�� ���� ���� ������ ����
	int sum = 0;

	// 1000000 ������ ��� ���� �����ϸ鼭
	while (b <= 1000000) {
		// ���� ���� ¦���̸� �տ� ����
		if (b % 2 == 0) {
			sum += b;
		}

		// ���� ���� ���
		b = a + b;
		a = b - a;
	}

	// ���� ���
	printf("1000000 ������ �Ǻ���ġ ������ ¦�� �׵��� ���� %d�Դϴ�.\n", sum);

	return 0;
}*/

/*#include <stdio.h>

int kkr(int n, int cnn) {
	// n�� 1 �Ǵ� 2�̸�
	if (n <= 2) {
		return n;
	}

	// �׷��� ������
	return printf("fbi : %d n-1 : %d, n-2 : %d \n", cnn++, kkr(n - 1, cnn), kkr(n - 2,cnn)), 
		kkr(n - 1,cnn) + kkr(n - 2,cnn);
	
}

int main() {
	// 1000000 ������ �Ǻ���ġ ������ ¦�� �׵��� ���� ������ ����
	int sum = 0, cnn = 0;

	// 1000000 ������ ��� ���� �����ϸ鼭
	for (int i = 1; kkr(i,cnn) <= 10; i++) {
		// ���� ���� ¦���̸� �տ� ����
		cnn = 0;
		printf("i : %d kkr(n) : %d kkr(n-1) : %d kkr(n-2) : %d \n", i, kkr(i,cnn), kkr(i-1,cnn), kkr(i-2,cnn));
		if (kkr(i,cnn) % 2 == 0) {
			sum += kkr(i,cnn);
		}
	}

	// ���� ���
	printf("1000000 ������ �Ǻ���ġ ������ ¦�� �׵��� ���� %d�Դϴ�.\n", sum);

	printf("�Ǻ���ġ", sum);
	return 0;
}*/

// ��5 ����ڷκ��� N ���� �Է� �ް� 1���� n������ ���� ����Ѵ�.
/*#include  <stdio.h>
int main() {
	int N, sum = 1, i;
	printf("1���� N������ ���� ���϶�.\n");
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		sum = sum * i;
	}
	printf("1���� N������ �� = %d", sum);
	return 0;
}*/

// ��6 ���� ���� �����ϴ� �ڿ��� a,b,c �� ������ ���Ͽ���
// ����1 a+b+c = 2000,			����2 a>b>c, a,b,c�� ��� �ڿ���
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
	printf("���ǿ� �´� �ڿ����� ���� : %d", cnt);
	return 0;
}*/



//1997 2 1
//1000 999 1
//668 667 665

//��6 �ٸ� ����� Ǭ ���
/*#include <stdio.h>

int main() {
	int a, b, c = 0;
	int cnt = 0;
	//���� �ٸ� �� 3���� ���ؼ� 2000�� �Ǵ°�� 
	// 1997 2 1  ~ 668 667 665 (���� �� ���� ���ϱ� vs ū �� ���� ���ϱ�)
	for (a = 1; a < 666; a++) { //a�� ���� ���� �� 1~665������ ��찡 �ִ�.
		for (b = a + 1; b <= (2000 - a) / 2; b++) { //b�� �ι�° �� c�� a�� ���� ���� ���� ����
			c = 2000 - a - b;
			if (c != b)
				cnt++;
		}
	}
	printf("a+b+c = 2000 && a<b<c�� �����ϴ� ������ %d �̴�.", cnt);
}*/

//��7 ������ �ڿ��� N �� �Է� �޾� N �� ���μ� ���� �� ����� ����Ͽ���. ���� �� N = 18 �� ��� 
// N = 18 , N = 18 = 2 * 3 * 3

/*#include <stdio.h>
int main() {
	int N, i;
	printf("�ڿ����� �Է� �Ͻÿ� : ");
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


//��7 �ٸ���� Ǯ��
/*#include <stdio.h>

int main() {
	int N, i;

	printf("������ �ڿ����� �Է��϶�. : \n");   
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
	return 0;   // ������ �ڿ����� �Է��϶�. :      18     N = 18, 18 = : 2x3x3
}*/

//��7 �ٸ� ��� Ǯ��
/*#include <stdio.h>

int main() {
	int N = 0;

	printf("������ �ڿ��� N�� �Է����ּ��� : ");
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



//��8 �ٵ� Ǯ��
/*#include <stdio.h>
#include <math.h>

int millerRabin(int n) {
	// 2���� �۰ų� ¦���� �Ҽ��� �ƴ�
	if (n <= 2 || n % 2 == 0) return 0;

	// n-1�� 2^s * d ���·� ǥ��
	int s = 0, d = n - 1;
	while (d % 2 == 0) {
		printf("befor %d\n", d);
		d >>= 1;
		printf("after %d\n", d);
		s++;
	}

	// a^(n-1) mod n ���
	for (int a = 3; a < n; a++) {
		int temp = d, mod = 1;
		for (int i = 0; i < s; i++) {
			mod = (mod * mod) % n;
			if (temp % 2 == 1) mod = (mod * a) % n;
			temp >>= 1;
		}

		// Miller-Rabin �׽�Ʈ ����
		if (mod != 1 && mod != n - 1) return 0;
	}

	return 1;
}

int main() {
	int N;
	scanf("%d", &N);

	printf("%d = ", N);

	// 2���� N�� �����ٱ��� �ݺ��ϸ� �Ҽ����� Ȯ��
	for (int i = 2; i <= sqrt(N); i++) {
		if (millerRabin(i)) {
			while (N % i == 0) {
				printf("%d ", i);
				N /= i;
			}
		}
	}

	// ���� N�� 1���� ū ��� (�Ҽ��� ���)
	if (N > 1) {
		printf("%d", N);
	}

	printf("\n");
	return 0;
}*/

/*#include <stdio.h>
int main() {
	int N, i;
	printf("�ڿ��� �Է�");
		scanf("%d", &N);
		i = 2;
		if (!(N % i))
			printf("yes N : %d, i : %d\n", N, i);
		else 
			printf("no N : %d, i : %d\n", N, i);
		return 0;
}*/

//�ƺ� ����
/*#include <stdio.h>
int main() {
	int N, i, a, b, cnt = 0, j, hf, ex = 1, ex2 = 1, ex3 = 1,ex4 = 1, sum = 0, sum1 = 0, sum2 = 0, sum3 = 0, bkex, c, f = 1, p=1, q=1;
	printf("�ڿ��� �Է�");
	scanf("%d", &N);
	for (i = 1; N / i > 0; i = i * 10) { cnt++; ex = ex * 10; }
	//printf("�ڸ� �� %d \n ex = %d\n", cnt, ex);
	printf("�Է� ���� �� : %d \t ��� �� : ", N);

	b = N;
	bkex = ex / 10;
	ex3 = ex4 = ex;
	if (cnt % 2 == 0) { //¦�� �ڸ� �� �� ��
		//printf("�ƹ��� %d", cnt);
		for (j = cnt; j > cnt / 2; --j) { // �� �� �ڸ� ���� ����
			a = (b / (ex / 10)) - ((b / ex) * 10);

			ex = ex / 10;

			sum3 = sum3 + a;
			//if(cnt/)
			sum3 = sum3 * 10;
		}
		sum3 = sum3 / 10;
		ex3 = ex3 / 10;
		for (j = cnt; j > cnt/2; --j) { // �� �� �ڸ� ���� ����
			ex2 = ex2 * 10;
			c = (b / (f * p)) - ((b / ex2) * 10);
			p = p * 10;
			sum2 = sum2 + (c * ex3);
			ex3 = ex3 / 10;
		}printf("�ƹ��� %d", sum2);
	} //printf("\n���� �Ųٷ� ���� �� : %d\n", sum3 + sum2);


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
		printf("\n ���� �� : %d\n", sum1);
		printf("\n�Ųٷ� ���� �� : %d\n", sum);
		printf("\n���� �Ųٷ� ���� �� : %d\n", sum3 + sum2);
	
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

//�ƺ� ���� ���� ���̱� , ������
/*#include <stdio.h>
int main() {
	int N, i, a, cnt = 0, ex = 1, sum = 0, sum1 = 0, p = 1;
	printf("�ڿ��� �Է�");
	scanf("%d", &N);
	for (i = 1; N / i > 0; i = i * 10) cnt++;		//�ڸ��� ī��Ʈ
	ex = i/10;										//0���� �ϳ� ���� 
	for (i = 0; i < cnt/2; i++) p*=10;				//�ڸ��� 0������ �������� ����
	printf("�Է� ���� �� : %d \t", N);				
	if (cnt % 2 == 0) {								//¦�� �ڸ��� �� ��
		for (i = ex; i >= p; i = i / 10) {			// ���ڸ� ���� ���� ���� ���� �� ���ڸ� �������� �̵�
			a = N / i - N / (i*10) * 10;			// Parsing ����
			sum = sum *10 + a;			
		}
		for (i = 10; i <= p; i = i * 10) {			// ���ڸ� ���� ���� ���� ���� �� ���ڸ� �������� �̵�			
			a = (N / (i/10)) - ((N / i) * 10);		// Parsing ����	
			sum = sum + (a * ((ex*10)/i));
			}//12345678 => 87651234
		printf("\n���� �Ųٷ� ���� �� : %d\n", sum);
	} 
	else if (cnt % 2 != 0) {						// Ȧ�� �ڸ��� �� ��
		printf("��� �� : ");
		for (i = ex; i > 0 ; i = i / 10) {
			a = (N / i) - ((N / (i*10)) * 10);		// Parsing ����
			sum1 = sum1 * 10 + a;					// ���迭 ���� ��
			sum = sum + a*(ex/i);					// ���迭 ���� ��
			if (i > 1) printf(" %d, ", a);			// Parsing ���
			else if (i == 1) printf(" %d ", a);		// Parsing ����	
		}
		printf("\n ���� �� : %d\n", sum1);
		printf("\n�Ųٷ� ���� �� : %d\n", sum);
	}
	return 0;
}*/

//���� ��
/*#include <stdio.h>
int main() {
	int input;

	printf("������ \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	if (input == 1) {
		printf("���� ���־� \n");
	}
	else if (input == 2) {
		printf("���� �ÿ��� \n");
	}
	else if (input == 3) {
		printf("zzz \n");
	}
	else {
		printf("���� ������� �� �˾� ��ھ�. �п� \n");
	}
	return 0;
}*/

//���׷��̵� ����
/*#include <stdio.h>
int main() {
	int input;

	printf("������ \n");
	printf("������ �Ͻ� ������ �Է��ϼ��� \n");
	printf("1. ���ֱ� \n");
	printf("2. �ı�� \n");
	printf("3. ���� \n");

	scanf("%d", &input);

	switch (input) {
		case 1:
			printf("���� ���־� \n");
			break;
		case 3:
			printf("���� �ÿ��� \n");
			break;
		case 10:
			printf("zzz \n");
			break;
		default:
			printf("���� ������� ���˾� ��ھ�. �۸� \n");
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

	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);

	c = a / b;
	D = (float)a / b;

	printf("�� ���� ���� : %f, %f", c, D);
	return 0;
}*/


/*#include <stdio.h>
int main() {
	float i, f;
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &f);
	printf("%f\n", f);
	f = f * 100;
	i = (int)f - (((int)f / 100) * 100);
	//i = (f - (int)f) * 100;
	printf("i = %d\n", (int)i);
	return 0;
}*/

/* �迭 ���� */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//arr[3] = 10;
	printf("array 3��° ���� : %d\n", arr[3]);
	return 0;
}*/

/* �迭 ����ϱ� */
/*#include <stdio.h>
int main() {
	int arr[10] = { 2,10,30,21,34,23,53,21,9,1 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("�迭�� %d ��° ���� : %d \n", i + 1, arr[i]);
	}
	return 0;
}*/

/* ��� ���ϱ� */
/*#include <stdio.h>
int main() {
	int arr[5]; //������ �����ϴ� �迭
	int i, ave = 0;

	for (i = 0; i < 5; i++) // �л����� ������ �Է� �޴� �κ�
	{
		printf("%d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) // ��ü �л��� ������ ���� ���ϴ� �κ�
	{
		ave = ave + arr[i];
	}

	// ����̹� 5�� �����ش�
	printf("��ü �л��� ����� : %d \n", ave / 5);
	return 0;
}*/

/*ģ���� ��Ź*/
/*#include <stdio.h>
int main() {
	int arr[10];
	int i, ave = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		ave = ave + arr[i];
	}
	ave = ave / 10;
	printf("��ü �л��� ����� : %d \n", ave);
	for (i = 0; i < 10; i++) {
		printf("�л� %d : ", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}
	return 0;
}*/

/* �Ҽ� ���α׷� */
/*#include <stdio.h>
int main() {
	int prime[1000] = {0};
	int i, b = 2, c = 0; //i�� for�� ����, b�� prime�� ù°��, c�� prime �� ��ȣ ī��Ʈ
	//for (i = 0; i < 1000; i++) printf("prime�� %d��° �� %d \t", i, prime[i]);		
	prime[0] = b;
	b=b+1; //b=b+1 �� prime�� �ι�°��
	printf("�Ҽ� : %d \n", prime[0]);
	for (;;) {                       //�Ҽ� �̾Ƴ���
		for (i = 0; i <= c; i++) {
			if (b % prime[i] != 0) continue;     //cnt++;      //cnt =0
			else break;
		}
		if ((i - 1) == c) {           // prime �濡 �־��ֱ�
			prime[i] = b;
			c++;
			printf("�Ҽ� : %d \n", prime[i]);
			if (c == 999) break;
		}
		b = b + 2;
	} 
	return 0;
}*/

/* ���� �غ��� */
/*#include <stdio.h>
int main() {
	int prime[1000];
	int i, b = 2, c = 0;
	prime[0] = b;
	b = b + 1;
	printf("�Ҽ� %d \n", prime[0]);

	for (;;) {
		for (i = 0; i <= c; i++) {
			if (b % prime[i] != 0) continue;
			else break;
		}
		if (i - 1 == c) {
			prime[i] = b;
			c++;
			printf("�Ҽ� %d \n", prime[i]);
			if (c == 999) break;
		}
		b = b + 2;
	}
	return 0;
}*/

/* ���� �ɱ�? */
/*#include <stdio.h>
int main() {
	int total;
	printf("��ü �л� �� : ");
	scanf("%d", &total);
	int arr[total];
	int i, ave = 0;

	for (i = 0; i < total; i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}
	ave = ave / total;
	printf("��ü �л��� ����� : %d \n", ave);

	for (i = 0; i < total; i++) {
		printf("�л� %d :", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}
	return 0;
}*/

/* ���� �̰͵�? */
/*#include <stdio.h>
int main() {
	int total = 3;
	int arr[total];
	int i, ave = 0;

	for (i = 0; i < total; i++) {
		printf("%d ��° �л��� ������? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}

	ave = ave / total;
	printf("��ü �л��� ����� : %d \n", ave);

	for (i = 0; i < total; i++) {
		printf("�л� %d : ", i + 1);
		if (arr[i] >= ave)
			printf("�հ� \n");
		else
			printf("���հ� \n");
	}
	return 0;
}*/

/*�ʱ�ȭ ���� ���� ��*/
/*#include <stdio.h>
int main() {
	int arr[3] = { 1 };;
	
	printf("���� ���� ���� : %d", arr[0]);
	
	return 0;
}*/

/* 11-1 c����� ����Ʈ(�迭) ����1 �� �Է� ���� �л����� ������ ���� ������ �����ϴ� ���α׷��� ����� ������. */
/*#include <stdio.h>
int main() {
	int stu[3];
	int i, save, j;
	for (i = 0; i < 3; i++) {
		printf("%d��° �л��� ������ �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &stu[i]);
		for (;;) {
			if (stu[i] > 100 || stu[i] < 0) {
				printf("�ٽ� �Է��Ͻÿ� : ");
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
		printf("������ ���� ������ ���� : \t");
		for (i = 2; i >= 0; i--) {
			printf("%d\t", stu[i]);
		}

	return 0;
}*/

/* 11-1 c����� ����Ʈ(�迭) ����2 �Է� ���� �л����� ������ ���� �׷����� ��Ÿ���� ���α׷��� ����� ������. */
/*#include <stdio.h>
int main() {
	int num[12];
	int i, j;
		for (i = 0; i < 12; i++) {
			printf("%d��° �л��� ������ �Է��� �ּ��� : ", i + 1);
			scanf("%d", &num[i]);
			for (;;) {
				if (num[i] > 100 || num[i] < 0) {
					printf("0�� 100 ������ ���� �Է��� �ּ��� : ");
					scanf("%d", &num[i]);
				}
				else break;
			}
		}
		for (i = 0; i < 12; i++) {
			printf("%d\n", num[i]);
				for (j = 0; j < num[i]; j++) {
				printf("��");
			}
			printf("\n\n");
		}
		return 0;
}*/

/* 2���� �迭 */
/*#include <stdio.h>
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	printf("arr �迭�� 2�� 3���� ���� ��� : %d \n", arr[1][2]);
	printf("arr �迭�� 1�� 2���� ���� ��� : %d \n", arr[0][1]);
	return 0;
}*/

/* �л� ���� �Է� �ޱ� */
/*#include <stdio.h>
int main() {
	int score[3][2];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				printf("%d ��° �л��� ���� ���� : ", i + 1);
				scanf("%d", &score[i][j]);
			}
			else if (j == 1) {
				printf("%d ��° �л��� ���� ���� : ", i + 1);
				scanf("%d", &score[i][j]);
			}
		}
	}
	for (i = 0; i < 3; i++) {
		printf("%d ��° �л��� ���� ���� : %d, ���� ���� : %d \n", i + 1, score[i][0], score[i][1]);
	}
	return 0;
}*/

/* 1. Selection Srot (���� ����) */
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
		printf("%d��° �迭 ��� %d\n", i + 1, arr[i]);
	}
	return 0;
}*/

/* 2. Insertion Srot (���� ����) */
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
		//printf("J�� : %d\n", j);
		i++;
	}
	for (i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	printf("\n");
	return 0;
}*/


/* ���� ���� */
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
		printf("%d��° �� %d\n", i+1,arr[i]);
	}
}*/

/* ���� ���� for */
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
		printf("%d��° �� %d\n", i + 1, arr[i]);
	}
	return 0;
}*/


/* 3. ���� ���� (Bubble Sort) */
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
		printf("%d��° �� %d\n", i + 1, arr[i]);
	}
	return 0;
}*/


















/* ������ ���� */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	printf("������ p�� ��� �ִ� �� : %p \n", p);
	printf("int ���� a�� ����� �ּ� : %p\n", &a);
	return 0;
}*/




/* *�������� �̿� */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	a = 2;
	printf("a�� �� : %d \n", a);
	printf("*p�� �� : %d\n", *p);
	printf("p�� �� : %p\n", p);
	return 0;
}*/

/* *������ */
/*#include <stdio.h>
int main() {
	int *p;
	int a;
	p = &a;
	*p = 3;
	printf("a�� �� : %d\n", a);
	printf("*p�� �� : %d\n", *p);
	printf("p�� �ּ� : %d\n", p);
	printf("a�� �ּ� : %d", &a);

	return 0;
}*/



/* �����͵� ������ */
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

/* ��� ������? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	const int* pa = &a;
	b = 3;
	//*pa = 3; // �ùٸ��� ���� ����
	pa = &b; // �ùٸ� ����
	//printf("%d", b);
	return 0;
}*/


/* ��� ������? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	int* const pa = &a;
	*pa = 3; // �ùٸ� ����
	//printf("%d", a);
	pa = &b; // �ùٸ��� ���� ����
	return 0;
}*/

/* ��� ������? */
/*#include <stdio.h>
int main() {
	int a;
	int b;
	const int* const pa = &a;
	*pa = 3; // �ùٸ��� ���� ����
	//printf("%d", a);
	//b = 3;
	pa = &b; // �ùٸ��� ���� ����
	//printf("%d", a);
	return 0;
}*/

/* �������� ���� */
/*#include <stdio.h>
int main() {
	int a;
	int* pa;
	pa = &a;
	printf("pa �� �� : %p \n", pa);
	printf("(pa+1)�� �� : %p \n", pa + 1);
	return 0;
}*/

/* ����? */
/*#include <stdio.h>
int main() {
	int a;
	char b;
	double c;
	int* pa = &a;
	char* pb = &b;
	double* pc = &c;

	printf("pa �� �� : %p \n", pa);
	printf("(pa+1) �� �� : %p \n", pa + 1);
	printf("pb �� �� : %p \n", pb);
	printf("(pb+1) �� �� : %p \n", pb + 1);
	printf("pc �� �� :\n %p \n", pc);
	printf("(pc+1) �� �� :\n %p \n", pc + 1);
	return 0;
}*/


/* �������� ���� */
/*#include <stdio.h>
int main() {
	int a;
	int* pa=&a;
	//pa = &a;
	printf("pa �� �� : %p \n", pa);
	printf("(pa-1)�� �� : %p \n", pa - 1);
	return 0;
}*/

/* �����ͳ����� ���� */
/*#include <stdio.h>
int main() {
	int a;
	int* pa = &a;
	int b;
	int* pb = &b;
	int* pc = pa + pb;
	return 0;
}*/

/* �迭�� ���� ����? */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("arr[%d] �� �ּҰ� : %p \n", i, &arr[i]);
	}
	return 0;
}*/

/* ����? */
/*#include <stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];
	for (i = 0; i < 10; i++) {
		printf("arr[%d]�� �ּҰ� : %p", i, &arr[i]);
		printf("(parr + %d)�� �� : %p", i, (parr + i));
		if (&arr[i] == (parr + i)) {
			printf("--> ��ġ\n");
		}
		else printf("--> ����ġ\n");
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


/*arr�� ��ü*/
/*#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	printf("arr�� ��ü : %p\n", arr);
	printf("arr[0]�� �ּ� �� : %p\n", &arr[0]);
	return 0;
}*/

/* �迭�� �迭�̰� �����ʹ� �����ʹ� */
/*#include <stdio.h>
int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* parr = arr;
	printf("Sizeof(arr) : %d\n", sizeof(arr));
	printf("Sizeof(parr) : %d \n", sizeof(parr));
	return 0;
}*/

/* [] ������ */
/*#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,9,5 };
	printf("a[3] : %d\n", arr[3]);
	printf("*(a+3) : %d\n", *(arr+3));
	return 0;
}*/

/* �ű��� [] ��� */
/*#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,4,5 };
	printf("3[arr] : %d\n", 3[arr]);
	printf("*(3+a) : %d\n", *(arr+3));
	return 0;
}*/

/* 1���� �迭 ����Ű�� */
/*#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	int* parr;
	parr = arr;				//	parr=&arr[0]; �� �����ϴ�
	printf("arr[1] : %d\n", arr[1]);
	printf("parr[1] : %d\n", *(parr+1));
	return 0;
}*/

/* ������ �̿��ϱ� */
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
	printf("�� ���� ���� ��� : %d\n", sum / 10);
	return 0;
}*/

/* ai ��� ��� */
/*#include <stdio.h>
int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* parr;

	parr = &arr[0]; // parr�� arr[0]�� �ּҸ� ������ ��
	printf("parr = %d\n", *parr); // 10 ���

	*parr = 100; // parr�� ����Ű�� �޸� ������ ���� 100���� ����
	printf("arr[0] = %d\n", arr[0]); // 100 ���
	return 0;
}*/

/* �迭�� */
/*#include <stdio.h>
int main() {
	int arr[10] = { 100,98,97,95,89,76,92,96,100,99 };
	arr++;
	return 0;
}*/

/* �������� ������ */
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

/* �迭 �̸��� �ּҰ�? */
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

/* ������? */
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
	printf("��ü ũ�� : %d\n", sizeof(arr));
	printf("�� ���� ���� : %d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("�� ���� ���� : %d\n", sizeof(arr) / sizeof(arr[0]));
}*/

/* ���� �ɱ�? */
/*#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	int** parr;
	parr = arr;
	printf("arr[1][1] : %d\n", arr[1][1]);
	printf("parr[1][1] : %d\n", parr[1][1]);
}*/

/* ����! ���� �迭�� ������ */
/*#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int(*parr)[3];;
	parr = arr;
	printf("parr[1][2] : %d, arr[1][2] : %d\n", parr[1][2], arr[1][2]);
	return 0;
}*/


// �迭�� �� (*������ �̸�)[2���� �迭�� �� ����];
//	ex) int (*parr)[3];

/* �迭 ������ */
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

/* �׷��ٸ� �� �ڵ�� ���� ���� �������? */
/*/#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int**parr;
	parr = arr;
	//printf("arr : %d \n", *parr);
	printf("parr[1][1] : %d\n", parr[1][1]); //����!
	return 0;
}*/

/* ������ �迭 */
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

/* �Լ� */
/*#include <stdio.h>
int print_hello() {
	printf("Hello!!\n");
	return 0;
}
int main() {
	printf("�Լ��� �ҷ����� : ");
	print_hello();

	printf("�� �θ���? ");
	print_hello();

	return 0;
}*/





/* �Լ��� ���� */
/*#include <stdio.h>
int return_func() {
	printf("�� ����ȴ�\n");
	return 0;
	printf("�� �ȵ� ��");
}
int main() {
	return_func();
	return 0;
}*/





/* ��ȯ�� */
/*#include <stdio.h>
int ret() { return 1000; }
int main() {
	int a = ret();
	printf("ret() �Լ��� ��ȯ�� : %d \n", a);
	return 0;
}*/



/* ���� ���� */
/*#include <stdio.h>
int magicbox() {
	i += 4;
	return 0;
}
int main() {
	int i;
	printf("���� ���ڿ� ������� �� : ");
	scanf("%d", &i);

	magicbox();
	printf("���� ���ڸ� ������ : %d \n", i);
	return 0;
}*/



/* �Լ��� ���� */
/*#include <stdio.h>
int slave(int master_money) {
	master_money += 10000;
	return master_money;
}
int main() {
	int my_money = 100000;
	printf("2009.12.12 ��� : $%d\n", slave(my_money));
	return 0;
}*/


/* �ɱ�� */
/*#include <stdio.h>
int slave(int my_money) {
	my_money += 10000;
	return my_money;
}
int main() {
	int my_money = 100000;
	printf("2009.12.12 ��� : $%d\n", slave(my_money));
	printf("my_money : %d", my_money);

	return 0;
}*/

/* ���� ���� �Լ� ����1 */
/*#include <stdio.h>
int hs(int m_m) {
	m_m += 4;
	//printf("i : %d", m_m);
	return m_m;
}
int main() {
	int i = 10;
	printf("i : %d\n",hs(i));
	printf("���� i : %d", i);
	return 0;
}*/


/* ��2 */
/*#include <stdio.h>
int kkr(int m) {
	m += 2;
}
int rk(int n) {
	kkr(n) + n;
}
int main() {
	int i = 0;
	printf("���� ������ ���� : %d\n", kkr(i));
	printf("���� ������ ��� : %d\n", rk(i));

	return 0;
}*/


/* ��3 */
/*#include <stdio.h>
int hap(int i) {
	int i;
	int sum = 0;
	for()
}

int main() {
	int i = 1;
	int n;
	
	printf("n ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		hap(i);
		i++;
	}
	return 0;
} */


/* ��¥ ������ ���� ������ ����� */
/*#include <stdio.h>
int main() {
	int y, m, d, yo;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int daysum=0;
	printf("�⵵.��.�� ������ �Է��Ͻÿ�.\n");
	scanf ("%d. %d. %d", &y, &m, &d);
	printf("y=%d, m=%d, d=%d\n", y, m, d);
	printf("y-1 = %d\n", y - 1);
	daysum = ((365 * (y-1)) + ((y-1) / 4) - ((y-1) / 100) + ((y-1) / 400));    //���� ���
	printf("���� 4 = %d, 100 = %d, 400 = %d\n", y % 4, y%100, y%400);

	//if (y % 4 == 0 && y % 400 == 0 || y % 100 != 0) {
			//if (m > 2) { daysum = daysum + 1; }
	//}
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				if (m > 2) { daysum = daysum + 1; }                     // 400�� ���� ���⿡ 2�� ���ĸ� �÷���
				//else if(m = 2 && d > 28) { daysum = daysum + 1; }
			}
		}
		else if (m > 2) { daysum = daysum + 1; }                         // 4�� ���� ���⿡ 2�� ���ĸ� �÷���
			//else if (m = 2 && d > 28) { daysum = daysum + 1; }
	}

	for (int i = 0; i < m - 1; i++) {
		daysum = daysum + month[i];               // ���Ϸ��� �� ���� ���� �ϱ��� �ջ�
	}
	daysum = daysum + d;
	yo = daysum%7;
	
	switch (yo) {
	case 1:
		printf("������ %d", yo);
		break;
	case 2:
		printf("ȭ���� %d", yo);
		break;
	case 3:
		printf("������ %d", yo);
		break;
	case 4:
		printf("����� %d", yo);
		break;
	case 5:
		printf("�ݿ��� %d", yo);
		break;
	case 6:
		printf("����� %d", yo);
		break;
	case 0:
		printf("�Ͽ��� %d", yo);
		break;
	}

}*/

/* �޷� ����� */
/*#include <stdio.h>
int main() {
	int y, i, j, k, yo;
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysum = 0;

	printf("�⵵�� �Է��Ͻÿ�.\n");
	scanf("%d", &y);

	daysum = ((365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1); // �Է³⵵ 1��1�ϱ��� ���ϱ�

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {	
				month[1] = 29;
			}
		}
		else month[1] = 29;	}
	yo = daysum % 7;

	
	for (j = 0; j < 12; j++) {
		printf("\n\n\n             %d�� %d��\n", y, j + 1);
		printf("======================================\n");
		printf("   ��   ��   ȭ   ��   ��   ��   ��\n");

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

	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &y);

	daysum = (365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1;
	yo = daysum % 7;
	printf("2024�� 1�� 1���� ���� = %d \n", yo);
	printf("%d", daysum);

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) { month[1] = 29; }
		}  
		else month[1] = 29;
	}
	

	for (i = 0; i < 12; i++) {
		printf("\n\n\n        %d�� %d��\n", y, i + 1);
		printf("===============================\n");
		printf("  ��  ��  ȭ  ��  ��  ��  ��\n");

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
	char year[10] = "��";
	char mon[10] = "��";
	char line[10] = "=";
	char week[100] = "  ��  ��  ȭ  ��  ��  ��  ��";
	char space[10] = " ";
	int sw1 = 0;
	int sw2 = 0;
	char a;

	printf("������ �Է��Ͻÿ�.");
	scanf("%d", &y);

	daysum = (365 * (y - 1)) + ((y - 1) / 4) - ((y - 1) / 100) + ((y - 1) / 400) + 1;
	yo = daysum % 7;
	yo2 = (yo + month[0]) % 7;
	printf("2024�� 1�� 1���� ���� = %d \n", yo);
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
	char ch; //����

	short sh; //����
	int i;
	long lo;

	float fl; //�Ǽ�
	double du;

	printf("char �� ���� �Է� : ");
	scanf("%c", &ch);

	printf("short �� ���� �Է� : ");
	scanf("%hd", &sh);
	printf("int �� ���� �Է� : ");
	scanf("%d", &i);
	printf("long �� ���� �Է� : ");
	scanf("%ld", &lo);

	printf("float �� ���� �Է� : ");
	scanf("%f", &fl);
	printf("double �� ���� �Է� : ");
	scanf("%lf", &du);

	printf("car : %c, short : %d, int : %d", ch, sh, i);
	printf("long : %ld, float : %f, double : %f \n", lo, fl, du);

	return 0;
} */






















/*#include <stdio.h>       ��Ʈ 20��       �շ� �� 
int main() {
	float a= 20000000000;
	printf("a�� ���� %d \n", a);

	return 0;
}*/