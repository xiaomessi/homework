//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int differBit(int a, int b){
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++){
//		if ((a & 1) ^ (b & 1)){
//			++count;
//		}
//		a = a >> 1;
//		b = b >> 1;
//	}
//	return count;
//}
//可以直接用oneCount，传入参数a^b就行了，相同为0，不同为1，然后数1的个数就行了
//
//int main(){
//
//	int a = 0, b = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//
//	ret = differBit(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}