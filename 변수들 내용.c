#include <stdio.h>

int main_변(void)
{
	/* int number1;
	printf("숫자입력 : ");
	scanf_s("%d", &number1);

	if (number1 % 2 == 0) {
		printf("짝수\n");
	}
	else {
		printf("홀수\n");
	} */

	// 실수형 변수에 대한 예제

	/* float f = 45.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d); */
	/* const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	YEAR = 2001; */

	//printf
	/* 연산 
	int add = 3 + 7;  //10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);*/

	//scanf : 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 :");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	//문자(한글자), 문자열(한글자 이상의 여러글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 프로젝트
	// 신상
	//이름? 키? 나이? 몸무게? 과?
	 /* char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이예요?");
	scanf_s("%d" , &age);

	float weight;
	printf("몸무게는 몇 kg이세요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 세요?");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨과세요?");
	scanf_s("%s", what, sizeof(what));

	//신상내용
	printf("\n\n--- 신상 정보 ---\n\n");
	printf(" 이름        : %s\n", name);
	printf(" 나이        : %d\n", age);
	printf(" 몸무게      : %.2f\n", weight);
	printf(" 키          : %.2lf\n", height);
	printf(" 과          : %s\n", what); */

	return 0; 
}