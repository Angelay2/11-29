#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int one(){
	int n;
	printf("����*��������:\n");
	scanf("%d", &n);

	int i, j;

	for (i = 1; i < n; i++){
#if 0//�����ڵ���,ѡ��ע��
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}

		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
#else
		//Ҳ�ɱ�ʾΪ������ʽ
		for (j = 0; j < i + n - 1; j++){
			putchar(j < n - i ? ' ' : '*');
		}

#endif
		putchar('\n');
	}

	for (i = n; i > 0; i--){
#if 0
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}

		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
#else
		for (j = 0; j < i + n - 1; j++){
			putchar(j < n - i ? ' ' : '*');
		}

#endif
		putchar('\n');
	}
	system("pause");
	return 0;
}
int main(){
	int n ;
	printf("����*��������:\n");
	scanf("%d",&n);
	int i, j;

	for (i = 1; i < n; i++){
		for (j = 1; j <= 2 * i - 1; j++){
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n; i >= 1; i--){
		for (j = 2 * i - 1; j >= 1; j--){
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}