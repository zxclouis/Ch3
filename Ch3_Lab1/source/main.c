#include <stdio.h>
#include <stdlib.h>

int Odd(int U);
int Even(int U);
int Totalsum(int U);

int main(void)
{
	int n,sum;
	char Addchoice,a;
	printf("1+2+...+n=?�п�Jn=");
	scanf_s("%d", &n);
	scanf_s("%c", &a, 1);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O),���ƩM(E),�٬O��ƩM(I)?�п��:");
	scanf_s("%c", &Addchoice, 1);
	
	switch (Addchoice)
	{
	case'O':
		sum = Odd(n);
		break;
	case'E':
		sum = Even(n);
		break;
	case'I':
		sum = Totalsum(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�M��%d\n", sum);
	system("pause");
	return 0;
}

int Odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1)

			total = total + i;
	}
		return total;
	
}
int Even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0)

			total = total + i;
	}
		return total;
	
}
int Totalsum(int U)
{
	return Odd(U)+Even(U);
}