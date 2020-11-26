 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;//학번 
	char name[100];//문자열로 이름 
	double grade;//학점 
};//와플틀 완성 

int main(int argc, char *argv[]) {
	struct student s1 = {123456, "JIWOO", 4.3};
	
	s1.ID = 456123;
	s1.grade = 3.0; 
	
	printf("ID : %d\n", s1.ID);
	printf("ID : %s\n", s1.name);//문자열 
	printf("ID : %f\n", s1.grade);//소수 
	return 0;
}
