 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;//�й� 
	char name[100];//���ڿ��� �̸� 
	double grade;//���� 
};//����Ʋ �ϼ� 

int main(int argc, char *argv[]) {
	struct student s1 = {123456, "JIWOO", 4.3};
	
	s1.ID = 456123;
	s1.grade = 3.0; 
	
	printf("ID : %d\n", s1.ID);
	printf("ID : %s\n", s1.name);//���ڿ� 
	printf("ID : %f\n", s1.grade);//�Ҽ� 
	return 0;
}
