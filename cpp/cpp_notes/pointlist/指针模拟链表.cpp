/*
#include<iostream>
using namespace std;
const int N=1000010;
int head,e[N],ne[N],idx;
int id[N];
void init() {
	head=0;//ͷ�ڵ���0
	e[0]=1;//�����������λ��1
	ne[0]=-1;//����λ����һλָ���±���-1��Ϊ��
	id[1]=0;//����Ϊ1���±�idΪ0
	idx=1;//�����������ܹ�����1��ֵ
}
void add(int k,int x) {//��ʱ�ǵ�kλ�������xԪ��
	e[idx]=x;//�˶ν���һλ�����ݸ�ֵΪx
	ne[idx]=ne[k];//Ȼ����һλ�Ķ�Ӧneָ��ָ���kλ����һλ
	ne[k]=idx;//Ȼ�����kλ����һλ��idx,�ȷ�������ʱ������kλ���idxλ(�����������ӵ���һλ)���û�
	id[x]=idx;//����x��,��x��Ӧ��id��λidx,�������β��
	idx++;//�������β������
}
void delate(int k){
	ne[k]=ne[ne[k]];//������kλ����һλ
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