/*
#include<iostream>
using namespace std;
const int N=1000010;
int head,e[N],ne[N],idx;
int id[N];
void init() {
	head=0;//头节点是0
	e[0]=1;//数据数组第零位是1
	ne[0]=-1;//第零位的下一位指向下标是-1即为空
	id[1]=0;//数据为1的下标id为0
	idx=1;//数据数组中总共存在1个值
}
void add(int k,int x) {//此时是第k位后面插入x元素
	e[idx]=x;//此段将下一位的数据赋值为x
	ne[idx]=ne[k];//然后下一位的对应ne指针指向第k位的下一位
	ne[k]=idx;//然后令第k位的下一位是idx,既发生了临时变量第k位与第idx位(既链表所连接的下一位)的置换
	id[x]=idx;//插入x后,将x对应的id标位idx,既链表的尾端
	idx++;//将链表的尾端延伸
}
void delate(int k){
	ne[k]=ne[ne[k]];//跳过第k位的下一位
}
int main(){
	int q;
	scanf("%d",&q);
	init();
	while(q--){
		int x,y,i;
		cin>>i;
		if(i==1){
			scanf("%d %d",&x,&y);
			add(id[x],y);
		}
		else if(i==2){
			scanf("%d",&x);
			printf("%d\n",e[ne[id[x]]]);
		}
		else{
			scanf("%d",&x);
			delate(id[x]);
		}
	}
	return 0;
}
*/