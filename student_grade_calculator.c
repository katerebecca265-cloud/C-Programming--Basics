#include <studio.h>

int main(){
	float marks, average;

printf("Enter your marks:");
scanf("%f",&marks);

average=marks;

if(average>=70){
	printf("Grade:A\n");
}else if(average>=60){
	printf("Grade:B\n");
}else if(average>=50){
	printf("Grade:C\n");
}else if(average>=40){
	printf("Grade:D\n");
}else{
	printf("Grade:E\n");
}

return 0;
}