#include <stdio.h>

int main()
{ 	int ASM, Written, Practice;
	printf("nhap diem ASM: ");
	scanf("%d", &ASM );
	printf("nhap diem Written: ");
	scanf("%d", &Written );
	printf("nhap diem Practice: ");
	scanf("%d", &Practice );
	if ( ASM > 0  && ASM <= 10 );{
		if (ASM >= 4)
		printf("ban da vuot qua bai thi ASM");
		else 
		printf("ban da thi truot bai thi ASM");
	}
	if ( Written > 0 && Written <= 100 );{
		if (Written >= 100)
		printf("ban da vuot qua bai thi Written");
		else
		printf("ban da thi truot bai thi Written");}
	if ( ASM > 0 && ASM <= 15 ){
		if (Practice >=6 )
		printf("ban da vuot qua bai thi Practice ");
		else
		printf("ban da thi truot bai thi Practice");}
	
	}
