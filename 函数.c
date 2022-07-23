#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <stdio.h>
int main()
{
    int hun, ten, ind, n;
    printf("result is:");
    for( n=100; n<1000; n++ )  /*整数的取值范围*/
    {
        hun = n / 100;
        ten = (n-hun*100) / 10;
        ind = n % 10;
        if(n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*各位上的立方和是否与原数n相等*/
            printf("%d  ", n);
    }
    printf("\n");
   
    return 0;
}
//int main()
//{
//	int a=0;
//	int count=0;
//	scanf("%d",&a);
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//if(1==((a>>i)&1))
//		count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//void maopaoshuzu(int arr[],int sz) {
//	int i=0;
//	for(i=0; i<sz-1; i++) {
//		int j=0;
//		for(j=0; j<sz-1-i; j++) {
//			if(arr[j]>arr[j+1]) {
//int temp=arr[j];
//arr[j]=arr[j+1];
//arr[j+1]=temp;
//			}
//		}
//	}
//}
//int main() {
//	int i=0;
//	int arr[]= {9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	maopaoshuzu(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//	
//	printf("%d ",arr[i]);
//}
//	return 0;
//}

//int njie(int n) {
//	int ret=1;
//	int i=0;
//	for(i=1; i<=n; i++) {
//    ret*=i;
//	}
//	return ret;
//}
//递归思想如下
//int njie(int n) {
//
//	if(n<=1)
//		return 1;
//
//	else
//		return n*njie(n-1) ;
//
//
//}
//int main() {
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	ret=njie(n);
//	printf("%d",ret);
//	return 0;
//}




// int A(char *str)
//{
//	if(*str!='\0')
//	return 1+A(str+1);
//	else
//	return 0;
//
//}
//
//int main()
//{
//	char arr[]="bit";
//	int lengh=A(arr);
//	printf("%d\n",lengh);
//}

//用函数表示二分查找算法
//在一个有序的数组中具体的查找某个值
//int A(int arr[],int k,int sz)
//{
//	int left=0;
//	int right= sz-1;
//	while (left<=right){
//
//	int mid=(left+right)/2;
//	if(arr[mid]<k)
//	{
//		left =mid+1;
//	}
//	else if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else
//	{
//		return mid;
//
//	}
//
//}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=2;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//
//	int ret=A(arr,k,sz);
//	if(ret==-1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，这个数字的下标是%d\n",ret);
//	}
//	return 0;
//}


//int is_prime(int n)
//{
//	int j=0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//		return 0;
//	}
//	return 1;
//}
//int main() {
//	int i=0;
//	for(i=100; i<200; i++)
//	{
//
//		if(is_prime(i)==1)
//		 {
//			printf(" %d ",i);
//		}
//	}
//	return 0;
//}


//void Swap(int* pa,int* pb) {
//	int temp=0;
//	temp=*pa;
//	*pa=*pb;
//	*pb=temp;
//}
//
//int main() {
//	int a;
//	int b;
//	a=10;
//	b=12;
//	printf("%d %d\n",a,b);
//	Swap(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}
