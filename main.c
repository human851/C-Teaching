#include <stdio.h>
#include <stdlib.h>

#define LEN 2
#define STRINGIFY(x) STRINGIFY2(x)
#define STRINGIFY2(x) #x

#define bool int
#define true 1
#define false 0

void even(int a);

int main(int argc, char *argv[]) {
	char n[10] ,ch[2];
	int a=2;
	bool f=true;
	printf("f=%d\n",f);
	
	printf("input n's value:");
	scanf("%"STRINGIFY(LEN)"s",&n);

	printf("%s\n",n);
	
	return 0;
}

void even(int a){
	if(a%2==0)
		printf("%d是偶数！",a);
	else
		printf("%d是奇数！",a);
}

//矩阵转置 
//const int n=5 ;
//	int i , j , k=1;
//	int arr[2][3] , brr[3][2];
//	printf("arr\n");
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//				arr[i][j]=k;
//				brr[j][i]=k++;
//				printf("%d ",arr[i][j]);
//			}
//		printf("\n");	
//	}
//	printf("brr\n");
//	for(i=0;i<3;i++){
//		for(j=0;j<2;j++)
//		{
//			printf("%d ",brr[i][j]);
//		}
//		printf("\n");	
//	}
