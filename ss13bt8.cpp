#include<stdio.h>
int timUCLN(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
	
}
int main(){
	int so1,so2;
	printf("nhap so thu1: \n");
	scanf("%d",&so1);
	printf("nhap so thu2: \n");
	scanf("%d",&so2);
	int ucln=timUCLN(so1,so2);
	printf("UCLN cua %d va %d la: %d\n",so1,so2,ucln);
	return 0;
}
