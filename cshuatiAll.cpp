/*
*为机试的刷题
*
*/


/*
*Part 算法竞赛入门经典 刘汝佳
*
*
*/
##############1-1################
include<stdio.h>
int main()
{
	printf("%d\n",1+2);
	return 0;
 } 

################1-4#################
#include<stdio.h>
int main()
{
	float a,b;
	scanf("%d%d",&a,&b);
	printf("%.1f\n",a/b);
	return 0;
 } 

########1-6#############################
 #include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%3d",&n);//3 digit for the integer part
printf("%d%d%d",n%10,n/10%10,n%100);
return 0;
 } 

##########swap...############
 #include<stdio.h>
#include<math.h>
int main()
{
int a,b,t;
scanf("%d%d",&a,&b);
t=a;//are there any swap(a,b); function in C?
a=b;
b=t;
printf("%d %d",a,b);
return 0;
 } 
 //Ｉdon't know why I have to use C when there are more intelligent languages out there

//OK fine,contests are black box tested...
 #include<stdio.h>
#include<math.h>
int main()
{
int a,b,t;
scanf("%d%d",&a,&b);
printf("%d %d",b,a);
return 0;
 } 

/*
*Nice （and basic） problem set from
*http://www.docin.com/p-1471825370.html
*/
#############10->2 jinzhi#####################
 #include<stdio.h>
 int fact(int n)
 {
 	if(n<2)
 		return n;
 	else
 		return fact(n/2)*10+n%2; //!!!
 }
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("%d",fact(n));
 	return 0;
 }

 #########$2.3 for beer,$1.9 for coke.Total is 82.3.######33
#include<stdio.h>
#include<math.h>
 int main()
 {
int a,b;
for(a=0;2.3*a<82.3;a++)
	for(b=a+1;1.9*b+2.3*a<82.3;b++)//b start from a+1
	{

//if(a*2.3+b*1.9>=82.3-0.000001&&a*2.3+b*1.9<=82.3+0.000001)
//if(fabs(a*2.3+b*1.9-82.3)<0.00001)
		{
			printf("here\n");
			printf("%d\n",a);
		}
	}
	return 0;
 }

########### area of a circle########

#include<stdio.h>

# define PI 3.1415926535879

 int main()
 {
int r;
scanf("%d",&r);
printf("%.7f",PI*r*r);
return 0;
 }

 ########duizhe noodle###############
#include<stdio.h>
#include<math.h>

 int main()
 {
 int num=pow(2,10)+1;

printf("%d",num);
return 0;
 }


#########print continuous binary numbers#########

#include<stdio.h>
int main(void)
{
int count=0;
int i,j,k,l,m;
for(i=0;i<=1;i++)
	for(j=0;j<=1;j++)
		for(k=0;k<=1;k++)
			for(l=0;l<=1;l++)
				for(m=0;m<=1;m++) 
				{
					printf("%d%d%d%d%d\n",i,j,k,l,m);
				}
				return 0;
}

########max min sum########################
#include<stdio.h>
#include<stdlib.h>
#define MAX 10000
int main()
{
	int i ,n,min=MAX,max=-MAX;
	int sum=0,a[MAX];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
		if(a[i]<min)
			min=a[i];
		if(a[i]>max)
			max=a[i];
		sum+=a[i];
	
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	printf("sum=%d\n",sum);
	return 0;
}

######### max common devider############
/* 穷举法*/
#include<stdio.h>
#include<stdlib.h>
#define MAXINE 100

int main(void)
{
	int a,b,i,t,m,n;
	scanf("%d%d",&a,&b);
	m=a;n=b;	
	for(i=1;i<=a;i++)//failure for i=0
	{		
		if(a%i==0&&b%i==0){
					t=i;
		}
	}
	printf("%d",t); 
	printf("%d",m*n/t);
	return 0;
}
/*辗转相除法*/
#include<stdio.h>
#include<stdlib.h>
#define MAXINE 100

int main(void)
{
	int a,b,c;
	scanf("%d%d",&a,&b);	
while(b!=0)
{
	c=a%b;a=b;b=c;
}
printf("%d",a);
}


/*
*
*算法竞赛入门经典 cpp部分
*
*/

#####a+b####################
#include<cstdio>//在cpp中使用c的io时包含的头文件。类似的还有cmath,cstring
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2) printf("%d\n",a+b);
	//scanf函数返回值为正，代表输入参数的个数 
	return 0;
	
}

######就是一道经典题，判断左右括号是否匹配##############
1.扫描整个表达式； 
2.判断当前字符是否为括号（左右括号） 
①如果不是，则继续扫描下一个字符； 
②如果是，则判断当前操作符是否为左括号 
若为左括号—>直接入栈。 
如果不是左括号，则说明是右括号，这时应该判断栈是否为空。 
若栈为空—> 说明此表达式右括号多于左括号。 
若栈不为空—>判断当前操作符是否和栈顶操作符匹配，若不匹配—->说明左右括号不匹配，若匹配—–>则继续判断下一个操作符。 
3.最后，判断栈是否为空 
①栈不为空—–>说明左括号多于右括号 
②栈为空—–>说明括号匹配成功。

#include<iostream>

using namespace std;

#include<stack>
#include<cassert> 

bool isOperator(char ch)
{
	if(ch=='('||ch==')'||ch=='['||ch==']')
		return true;
	return false;
}
bool MatchBrackets(char* str)
{
	stack<char> s;
	while(*str!='\0')
	{
		if(!isOperator(*str))
		{
			str++;
			continue;
		}
		if(*str=='('||*str=='[')
		{
			s.push(*str);
			str++;
		}else
		{
			//判断右括号多于左括号的if 
			if(s.empty()){
				cout<<"右括号多于左括号"<<endl;
				return false;
			}
			
			//括号匹配的if 
			if(*str==')'&&s.top()=='('||*str==']'&&s.top()=='[')
			{
				s.pop();
				str++;
			}
			else
			{
				cout<<"匹配不成功"<<endl;return false;
			}
			//判断左括号多于右括号的if 
			if(!s.empty()){
				cout<<"左括号多于右括号"<<endl;
				return false;
			}
			 cout<<"左右括号匹配正确"<<endl; 
		}
	}
}
int main(){
	char a[]="(())abc[](]";
	cout<<MatchBrackets(a)<<endl;	
	return 0;	
}


######sum of int ########################################
int sum(int * begin,int*end)
{
	int *p=begin;
	int ans=0;
	for(int *p=begin;p!=end;p++)
		ans+=*p;
		
	return ans;
}
###############字符数组排序#############################
#include<iostream>
#include<string> 
using namespace std;

int main(){
	//string类型的数组 
	string strarr[5]={"chuan1","chuan2","chuan3","chuan4","chuan5"};
	int k;

	for(int i=0;i<5;i++){
		k=i;
		for(int j=0;j<5;j++){
			if(strarr[j]>strarr[k]){
				k=j;
			}
		}	
	strarr[i].swap(strarr[k]);		
	}	
return 0;
}

/*
*c++stl初步
*
* 算法竞赛入门经典
*
*/
######make a dictionary###################

/*输入一个文本，找出所有不同的单词（连续的字母序列），按字典序从小到大输出。 单
词不区分大小写
*/
#inlcude<iostream>
#include<string>
#include<set>
#include<sstream>
using namespace std;

set<string> dict;

int main(){
	string s,buf;
	while(cin>>s){
	//ctrl+z for EOF
		for(int i=0;i<s.length();i++)
		if(isalpha(s[i])) s[i]=tolower(s[i]);else s[i]=' ';
		stringstream ss(s);
		while(ss>>buf) dict.insert(buf);
	}
	for(set<string>::iterator it=dict.begin();it!=dict.end();++it)
	{
		cout<<*it<<"\n";
	}
	return 0;
}

##二叉树创建及先/中/后序遍历#############################
/*二叉树创建及遍历-
*
*亲民版
*
*source  from http://blog.csdn.net/karldoenitz/article/details/8180297
*/ 
#include<iostream>

using namespace std;

struct node{
	char data;
	struct node* lchild,* rchild;
};

node* T;
void create(node* &T){
	//先序输入二叉树节点的值（char）,#代表空
	char ch;
	if((ch=getchar())=='#') T=NULL; 
	else{
		T=new node;
		T->data=ch;
		create(T->lchild);
		create(T->rchild);
	}
}
void inorder(node* &T)
{
	if(T){
		inorder(T->lchild);
		cout<<T->data;
		inorder(T->rchild);
	}else cout<<"";
}
void preorder(node* &T){
	if(T){
		cout<<T->data;
		preorder(T->lchild);
		preorder(T->rchild);
	}
	else cout<<"";
}
void postorder(node*&T){
	if(T){		
		postorder(T->lchild);
	    postorder(T->rchild);
		cout<<T->data;
	}
	else cout<<"";
}

int main(){
create(T);
preorder(T);
cout<<endl;
inorder(T);
cout<<endl;
postorder(T);
cout<<endl;
	return 0;
}
####动态规划求最长公共子串#############
#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
//template<typename Iterator>
//int * lcslengh(char*x,char *y,int m,int n)
int m=29,n=28;
int main()
{
	
	/*C风格的字符串 
	char*x="ACCGOGGGHJBBBBNJISGWBSJSKAUSJ",//29
		*y="ADBAVABABAAASSGGXXGAGAGAHSJA";//28
	###访问###########
	x[i]或*(x+i-1)
	*/
	/*C++新增的string处理字符串*/ 
	string x="ACCGOGGGHJBBBBNJISGWBSJSKAUSJ",//29
		   y="ADBAVABABAAASSGGXXGAGAGAHSJA";//28
	/*	
	###头文件#########
	#include<string> 
	###转化###########
	char * c=str.c_str();
	###访问###########
	str[1]
	或
	 for (string::iterator it = s1.begin(); it != s1.end(); it++){
        cout<<*it<< endl;
    }
	###处理函数#######
	很多，详细见CPP课本 
	*/
	int *c=new int[(m+1)*(n+1)];
	//1.用一位数组表示二维数组 | 直接定义二维数组：float a[3][4]; 
	//2.m,n为变量，需要动态创建数组	 | int c[(m+1)*(n+1)]; 如果m,n已经被定义为常量  
	int i,j;
	for(i=0;i<m;i++) c[i*(n+1)]=0;//*(c+i*(n+1))等价于 c[i*(n+1)]
	for(j=0;j<n;j++) c[j]=0;//按行存储
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(x[i]==y[j]) c[i*(n+1)+j]=c[(i-1)*(n+1)+j-1];//c[i][j]=c[i-1][j-1];
			else c[i*(n+1)+j]=max(c[(i-1)*(n+1)+j],c[i*(n+1)+j-1]);
		 } 
		 
	
	return 0;
}

==》refactor!  refacorRefacor
==》这段代码由于未知错误无法成功运行


#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;
//template<typename Iterator>
int * lcslength(string x,string y,int m,int n)
{
		int *c=new int[(m+1)*(n+1)];
	int i,j;
	for(i=0;i<m;i++) c[i*(n+1)]=0;//*(c+i*(n+1))等价于 c[i*(n+1)]
	for(j=0;j<n;j++) c[j]=0;//按行存储
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(x[i]==y[j]) c[i*(n+1)+j]=c[(i-1)*(n+1)+j-1];//c[i][j]=c[i-1][j-1];
			if(c[(i-1)*(n+1)+j]>c[i*(n+1)+j-1]) c[i*(n+1)+j]=c[(i-1)*(n+1)+j];
			else c[i*(n+1)+j]=c[i*(n+1)+j-1];
		 } 	
	return c;
}
void printlcs(int*c,string x,string y,int i,int j,int n)
{
	if(x[i]==y[j]){
		printlcs(c,x,y,i-1,j-1,n);
		cout<<x[i]<<" ";
	}else if(*(c+i*(n+1)+j-1)>*(c+(i-1)*(n+1)+j))//c[i,j-1]>c[i-1,j]
		printlcs(c,x,y,i,j-1,n);
	else
		printlcs(c,x,y,i-1,j,n);
}

int main()
{
	
	string x="ACCGOGGGHJBBBBNJISGWBSJSKAUSJ",//29
		   y="ADBAVABABAAASSGGXXGAGAGAHSJA";//28
int * c=lcslength(x,y,29,28);
printlcs(c,x,y,29,28,29);
return 0;
}
//打印最长公共子串

##############pat 1025 翻转静态链表##################
//玛德，这个优秀的程序为什么跑不了 
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
struct node{
	int addr,data,next;
}; 
vector<node> orig(10000);//输入数据 (因为要用orig[n]所以先初始化出10000)
vector<node> list;//排列好的数据
vector<node> ans;//翻转后的顺序
int first,n,k;
int main(){
	scanf("%d%d%d",&first,&n,&k);//节点首地址，节点总数，反转节点数
	 node temp;
	 //数据输入
	 for(int i=0;i<n;i++){
	 	scanf("%d%d%d",&temp.addr,&temp.data,&temp.next);//读取 
	 	orig[temp.data]=temp;//写入node数组orig[] 
	 } 
	 //排列数据
	 int x=first;//x<-addr
	 while(x!=-1) {
	 	list.push_back(orig[x]); 
	 	x=orig[x].next;
	 }
	 for(int i=0;i<list.size();i++){
	 	cout<<list[i].addr<<";"<<list[i].data<<";"<<list[i].next<<endl;
	 }
	 //翻转列表 （通过index:fanzhuan 访问List,push到ans中） 
	 int n2=list.size();//?
	 int fanzhuan=k-1;
	 
	 while(fanzhuan<n2){
	 	for(int i=fanzhuan;i>fanzhuan-k;i--){
	 		ans.push_back(list[i]);
		 }
		 fanzhuan+=k;
	 }
	 //list尾部不翻转的部分 
	 for(int i=fanzhuan-k+1;i<n2;i++){
	 	ans.push_back(list[i]);
	 } 
	 //更新翻转后数据的next数据 ,并输出 
	 for(int i=0;i<n2-1;i++){
	 	ans[i].next=ans[i+1].addr; 
	 	printf("%05d %d %5d\n",ans[i].addr,ans[i].data,ans[i].next);
	 }
	 printf("%05d %d -1\n",ans[n2-1].addr,ans[n2-1].data);
} 

######1026.系统运行时间#######################################
//#include<cstdio>
#include<iostream>

//using namespace std;
int main(){
	int first,sec,s,h,m;
	scanf("%d%d",&first,&sec);
//cin>>first>>sec;
	s=sec-first;
/!不足1秒的时间四舍五入到秒
	if(s%100>=50){
		s=s/100+1;
	}else
		s=s/100;
	h=s/3600;
	m=(s-3600*h)/60;
	s=s%60;
	printf("%02d:%02d:%02d\n",h,m,s);
} 
#########1027打印沙漏########################################
/!踏实の分两部分把每一行的*和“ ”个数推导出来
#include<cstdio>

#include<iostream>
using namespace std;

int main(){
int n,i,j,row;
char ch;
cin>>n>>ch;
for(i=1;i*i/2-1<n;i=i+2){}


row=i-2;
//cout<<"r="<<row<<endl;

//print前n/2+1
for(i=0;i<row/2+1;i++)
{
	for(j=0;j<i;j++)cout<<" ";
	for(j=0;j<row-2*i;j++)cout<<ch;
	cout<<endl;
//	cout<<"i1="<<i<<endl;
} 
 for(i=row/2+1;i<row;i++)
 {
 	for(j=0;j<(2*row-2*i-1)/2;j++)cout<<" ";
	for(j=0;j<(i-row/2)*2+1;j++)cout<<ch;
	cout<<endl;
//	cout<<"i="<<i<<endl;
 }
 return 0;
} 
###1001 简单处理（3n+1）#######################3

#include<cstdio>
#include<iostream>
using namespace std;

int main(){
int s=0,n;
cin>>n;
while(n!=1)
if(n%2==0)
{
	n=n/2;
	s++;
}else{
	n=(3*n+1)/2;
	s++;
}
cout<<s<<endl;
 return 0;
} 

#######pat 甲级 1003 求单源最短路径 任然有问题###########
 #include<iostream>
using namespace std;
const int CITYNUM=500;
const int M=2147483647;//int最大值 


int city[CITYNUM];//每个城市team数
int road[CITYNUM][CITYNUM];
bool visited[CITYNUM]={false};

int minLen[CITYNUM]={0};//source到index城市最短路径长度 
int sum[CITYNUM]={0};//source到index城市最大team和 
int same[CITYNUM]={0};//source到index城市相同路径长度 

void dij(int source,int dest,int n){
	int i,t,mm,next;
	int count=0;//记while循环次数 
	int cur=source;
	sum[cur]=city[cur]; 
	same[cur]=city[cur];
	while(count<n-1)
	{
		visited[cur]=true;
		for(i=0;i<n;i++){
			//初次访问 
			if(visited[i]==true)continue;
			// 如果cur与i间存在一条路径 
			if(road[cur][i]){
				t=minLen[cur]+road[cur][i];
				if(t<minLen[i]||minLen[i]==0){
					minLen[i]=t;
					same[i]=same[cur];
					sum[i]=sum[cur]+city[i];
					min[cur] 
				}else if(t==minLen[i]){
					same[i]=same[cur]+1;
//					same[i]=same[cur];
					//选择相同长度路径中比较大的team数 
					if(city[i]+sum[cur]>sum[i]) sum[i]=city[i]+sum[cur];
				}
			}
//		mm=M; 
//		if(minLen[i]<M && minLen[i]!=0)
//		{
//			mm=minLen[i];
挑选出next,为MinLen[cur]赋值(为什么要赋值为minLen[i]?) 
//			next=i;
//		}
		}
//		minLen[cur]=mm;
		if(next==dest)break;
		cur=next;
		count++;
	}
	return;
}
int main(){
	int n,m,C1,C2,c1,c2;
	cin>>n>>m>>C1>>C2;
	int i;
	for(i=0;i<n;i++)cin>>city[i];  
//	cout<<"m="<<m<<endl;
	for(i=0;i<m;i++){
		cin>>c1>>c2;
		cin>>road[c1][c2];
//		cout<<i<<endl;
		road[c2][c1]=road[c1][c2];
	}
	if(C1==C2){
		cout<<1<<' '<<city[C1]<<endl;
		return 0;
	}
	dij(C1,C2,n);
	cout<<same[C2]<<" "<<sum[C2]<<endl;
	return 0;
} 

/!法二，对整个图所有节点dfs ： http://blog.csdn.net/iaccepted/article/details/21451949 
/!法三，Rui背下来的dij模板
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAXNODE 30
#define MAXCOST 1000
int dist[MAXNODE],cost[MAXNODE][MAXNODE],n=5;
void dijkstra(int v0)
{
    int s[MAXNODE];
    int mindis,dis,i,j,u;
    for(i=1;i<=n;i++)
    {
        dist[i]=cost[v0][i];
        s[i]=0;
    }
    s[v0]=1;
    for(i=1;i<=n;i++)
    {
        mindis=MAXCOST;
        for(j=1;j<=n;j++)
        {
            if(dist[j]<mindis&&s[j]==0)
            {
                u=j;
                mindis=dist[j];
            }
        }
        s[u]=1;
        for(j=1;j<=n;j++)
        {
            if(s[j]==0)
            {
                dis=dist[u]+cost[u][j];
                dist[j]=(dist[j]<dis)?dist[j]:dis;
            }
        }
    }
}

void display_path(int vo)
{
    int i;
    printf("The shortest path is follow from point %d to other points:\n",vo);
    for(i=1;i<=n;i++)
    {
        printf("<%d> -->  <%d>  ",vo,i);
        if(dist[i]==MAXCOST)
            printf("No Path!\n");
        else
            printf("%d\n",dist[i]);
    }
}

int main()
{
    int i,j,v0=1;
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cost[i][j]=MAXCOST;
    for(i=1;i<=n;i++)
        cost[i][i]=0;
    cost[1][2]=10;
    cost[1][5]=100;
    cost[1][4]=30;
    cost[2][3]=50;
    cost[4][3]=20;
    cost[3][5]=10;
    cost[4][5]=60;
    dijkstra(v0);
    display_path(v0);
}

####1028 人口普查##########################

#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    string name,birth;
    string ma="2014/09/06";
    string mi="1814/09/06";
    string compareMa=ma,compareMi=mi;
    string nameMa,nameMi;
    for(int i=0;i<n;i++){
        cin>>name>>birth;
        if(birth>ma||birth<mi)continue;
        if(birth<=compareMa) {nameMa=name;compareMa=birth;}  /！比较生日：直接比较字符串
        if(birth>=compareMi) {nameMi=name;compareMi=birth;}
//        cout<<sum;
        sum++;
    }
if(sum>0)
cout<<sum<<" "<<nameMa<<" "<<nameMi<<endl;
else
    cout<<"0"<<endl;/!注意考虑没有合法输入的边界情况
 return 0;
}
########## 1029 旧键盘####################################
//啊好气哦这么简单一个题不会做
#include<cstdio>
#include<iostream>
using namespace std;
void insert(char a[],char in,char *x)
{

    for(int i=0;i<*x;i++)
    {
        if(a[i]==in) return;
    }
    a[(*x)++]=in;
}

int main(){

char x=0,a[81]={0},b[81]={0},bad_key[80]={0};
cin>>a>>b;
for(int i=0,j=0;a[i]!='\0';i++)
{

    if(toupper(a[i])==toupper(b[j]))
        j++;
    else
        insert(bad_key,toupper(a[i]),&x);
}
cout<<bad_key;
return 0;

}
/!问题除了思路中需要有保存已经发现的坏建，
还有对字符、字符串的处理

/自己解的..减小了char[] char*等理解的复杂度。没有分离出擦汗如操作
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//vector<char> a;
//a.push_back();

int main(){
   char s1[81],s2[81];//加一位会被get到的'/0'
   cin.getline(s1,81);
   cin.getline(s2,81);

   string bad_key="";
   int j=0;
   int flag;

for(int i=0;s1[i]!='\0';i++)
{
    s1[i]=(char)toupper(s1[i]);
    flag=0;
  for(int j=0;s2[j]!='\0';j++)
  {
      s2[j]=(char)toupper(s2[j]);

      if(s1[i]==s2[j]){flag=1;break;}
  }

  if(flag==1) continue;
  if(bad_key.find(s1[i])==-1)
bad_key+=s1[i];
}
cout<<bad_key<<endl;

 return 0;
}


#####1030 完美数组########################################4.5测试点没有过-5
#include<iostream>
//#include<string>
#include<algorithm>
using namespace std;

int main(){
//解题思路：加一步排序:sort()
int n,p,temp=0;
cin>>n>>p;
int *c=new int[n];
int i,mi,ma;
for(i=0;i<n;i++){
  cin>>*(c+i);
}
 sort(c,c+n);// 平均时间：(n log n) 并不算慢
//冒泡排序
//for(i=0;i<n;i++)
//{
//
//    for(int j=n-1;j>i;j--)
//        {
//            if(*(c+j)<*(c+j-1))
//                swap(*(c+j),*(c+j-1));
//        }
//}

//注意需要两层循环，以每一个数组元素为初始元素
 for(int j =0;j<n;j++)
 {
    mi=*(c+j);
    for(i=j+temp;i<n;i++){//i=j+temp ，从上一次比较之后的下一个元素开始，减小循环次数
        ma=*(c+i);
        if(ma>mi*p) {i--;break;}
        ma=*(c+i);
    }
    if(i-j>temp)temp=i-j;
 }
 cout<<temp;
 return 0;
}


}


/！能够过测试点4、5的代码段（+5）
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N,count=0;
    double p,array[100010];;
    scanf("%d%lf",&N,&p);
    for(int i=0;i<N;i++)
        scanf("%lf",&array[i]);
    sort(array,array+N);
    for(int i=0;i<N;i++)            //遍历，将a[i]作为最小数
        for(int j=i+count;j<N;j++){ //j置为要满足可以更新数列长度的值，减少循环次数
            if(array[j]>array[i]*p) //如果不满足条件了，则将下一个元素最为最小值
            break;
            if(j-i+1>count)         //如果此次的长度大于上一次，更新数列长度
                count=j-i+1;
        }
    printf("%d",count);
    return 0;
} 

#######甲级 1004 并没有认真看 dfs 理解题目之后应该是能够弄出来的
并且》..不好意思以下这段代码并没有通过测试
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
//#include<stdlib>
#include<cstring>
#include<vector>
#include<map>

using namespace std;

map<int,vector<int>>adjlist;
int record[101]={0};

void dfs(int id,int level){
if(adjlist[id].empty()){
    ++record[level];
    return;
}
vector<int>::iterator ite=adjlist[id].begin();
for(;ite!=adjlist[id].end();++ite)
{

    dfs(*ite,level+1);
}
}
int main(){
    int n,m,id,k,sid,i,cle,cnt;
    cin>>n>>m;
    cle=n-m;
    while(m--){
        cin>>id>>k;
        while(k--){
            cin>>sid;
            adjlist[id].push_back(sid);
        }
    }
    dfs(1,0);
    cnt=record[0];
    for(i=1;cnt<cle;++i){
        cout<<record[i];
        cnt+=record[i];
    }
    cout<<endl;
 return 0;
}

#####1031 查验身份证##############################################
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
//#include<stdlib>
#include<cstring>

using namespace std;

int main()
{

    int n,i,j;
    cin>>n;
    int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    char id[100][17];//根据题目要求输入预估的大小100
    char c;
    int flag=0;
    int sum=0;

    for(i=0;i<n;i++){
            cin>>id[i];//可以对char[][]进行读入一行的操作
            for(j=0;j<17;j++)
            {

                if(id[i][j]<'0'||id[i][j]>'9') break;
                sum+=w[j]*(id[i][j]-'0');//逻辑要清晰
            }
            if(j<17){cout<<id[i]<<endl;flag=1;continue;}
            sum=sum%11;

            if(m[sum]!=id[i][17]){cout<<id[i]<<endl;flag=1;}
    }
    if(flag==0) cout<<"All passed"<<endl;
return 0;
}

##########1032 求最高分数#######################################
#include<iostream>

using namespace std;

int main()
{
int n,i,sum[100000]={0},index,grade;
cin>>n;
for(i=0;i<n;i++){
    cin>>index>>grade;
    sum[index]+=grade;
}
int ma=sum[0],temp=0;
for(i=1;i<=n;i++)
{
    if(sum[i]>ma) {ma=sum[i];temp=i;}
}
cout<<temp<<' '<<ma;
return 0;
}
#### 1033 坏键盘###################################################
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char badKey[60],str[100000];
    int flag=1,shift=0;
    /!对char型数组全部赋值
    memset(badKey,'=',60);
    memset(str,'=',100000);
    /!对int型数组赋值一般使用循环。（除了赋0之外)
 cin>>badKey;
 cin>>str;
 for(int i=0;i<100000&&str[i]!='=';i++)//str
 {
flag=1;
     for(int j=0;j<60&&badKey[j]!='=';j++)//bad_key
     {
         if(badKey[j]=='+'){shift=1;}
         if(str[i]==badKey[j]||str[i]==(char)(badKey[j]+32)) {/1大小写转化
         flag=0;}
     }
     if(shift=1){
        if(str[i]>'A'&&str[i]<'Z') continue;
     }
     if(flag==1) cout<<str[i];
 }
return 0;
}
######1034 有理数四则运算#########################################
/！17/20 
/!倒数第二个测试点：因为相乘结果可能超过int.最好将所有类型设置为long

#include<iostream>

using namespace std;
//结构体处理分数
struct FC{
long z,m,s;//分子,分母,符号
};

long gcd(long a,long b){return b==0?a:gcd(b,a%b);}
//约分,分离符号
FC yuefen(FC a){
    if(a.z<0){a.z*=-1;a.s=-1;}
    if(a.m<0){a.m*=-1;a.s=-1;}
    long temp=gcd(a.z,a.m);
    a.z/=temp;
    a.m/=temp;
    return a;
}
//输出整个分数（按正负、是否有整数部分等"
void prt_fc(FC a){
if(a.m==0) cout<<"Inf";//如果分母为0
else{
    long i=a.z/a.m;//提取整数部分
    if(i<0){a.s=-1;i*=(-1);}
    a.z=a.z%a.m;//化为真分数
    a=yuefen(a);//约分
    if(a.z==0&&i==0) cout<<"0";
    else{
        if(a.s==-1) cout<<"(-";
        if(i!=0) cout<<i;
        if(i!=0&&a.z!=0) cout<<" ";
        if(a.z!=0) cout<<a.z<<"/"<<a.m;
        if(a.s==-1) cout<<")";
    }
}
}
//输出整个算式
void prt_eq(FC a,FC b,char c,FC outcome)
{

    prt_fc(a);
    cout<<" "<<c<<" ";
    prt_fc(b);
    cout<<" = ";
    prt_fc(outcome);
    cout<<endl;
}
//分数四则运算(或者用运算符重载？)

int main()
{
    FC a,b,o1,o2,o3,o4;
    char xian;
    cin>>a.z>>xian>>a.m>>b.z>>xian>>b.m;
    o1.z=(a.z*b.m+b.z*a.m);
    o1.m=(a.m*b.m);
    o2.z=(a.z*b.m-b.z*a.m);
    o2.m=(a.m*b.m);
    o3.z=(a.z*b.z);
    o3.m=(a.m*b.m);
    o4.z=(a.z*b.m);
    o4.m=(a.m*b.z);
    prt_eq(a,b,'+',o1);
    prt_eq(a,b,'-',o2);
    prt_eq(a,b,'*',o3);
    prt_eq(a,b,'/',o4);
return 0;
}



############ 1035 插入与归并######################

/!21/25

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,i,j,k;
cin>>n;
int a1[100],a2[100];
for(i=0;i<n;i++) cin>>a1[i];//原始序列a1
for(i=0;i<n;i++) cin>>a2[i];//中间序列a2

//判断是否是插入排序：前半部分有序，后半部分无序
for(i=0;i<n&&a2[i]<a2[i+1];i++);
for(j=i+1;j<n&&a1[j]==a2[j];j++);
if(j==n)
{
    cout<<"Insertion Sort"<<endl;
    //从为排序部分开始继续插入排序
    for(k=0;k<i+1;k++)
    {
        if(a2[i+1]>a2[k]&&a2[i+1]<a2[k+1])
        swap(a2[i+1],a2[k+1]);
    }
    //输出
    for(k=0;k<n-1;k++) cout<<a2[k]<<" ";
    cout<<a2[n-1];
    cout<<endl;
}else{
cout<<"Merge Sort"<<endl;
//不断对原始序列进行mergeSort直到a1被归并到中间序列，然后再进行一步mergesort
/*1.判断是否已经归并到中间序列*/
int flag=1;
k=1;
while(flag){
        flag=0;
    for(i=0;i<n;i++) if(a1[i]!=a2[i]) flag=1;
/*mergeSort的过程*/
    k*=2;
for(i=0;i<n/k;i++)
sort(a1+i*k, a1+(i+1)*k);
for(i=k*(n/k);i<n;i++)//!对非偶数部分的尾巴进行排序??直接排？对mergeSort代码段仍然有不理解的部分
sort(a1+i,a1+n);
}
}
    //输出
    for(k=0;k<n-1;k++) cout<<a1[k]<<" ";
    cout<<a1[n-1];
    cout<<endl;

return 0;
}



mergesort:
    http://www.geeksforgeeks.org/merge-sort/
problem code: simple merge sort
http://blog.csdn.net/qq_17249047/article/details/46768423

######### A 1005 spell sum of integers#########################

/!17/20

#include<iostream>
#include<sstream>
using namespace std;
int main(){

    char num[100];
    int sum=0;
cin>>num;
for(int i=0;num[i]!='\0';i++)
{
    sum+=num[i]-'0';
}
//将int转化为string,实现按位访问：借助stringstream做中介
stringstream ss;
string str;
ss<<sum;
ss>>str;
int len=str.length();
string spell[10]={"zero","one","two","three","four","five","six","seven","eight","night"};
for(int i=0;i<len-1;i++)
cout<<spell[(int)str[i]-48]<<" ";
cout<<spell[(int)str[len-1]-48]<<endl;

return 0;
}

######### A 1006 sign in and sign out############################

#include<iostream>
#include<string>
using namespace std;
int main(){
int n,i;
string l="00:00:00",e="24:00:00";
string id,in,out,eid,lid;
cin>>n;
for(i=0;i<n;i++){
    cin>>id>>in>>out;
    if(in<e){eid=id;e=in;}
    if(out>l){lid=id;l=out;}
}
cout<<eid<<" "<<lid<<endl;
return 0;
}
########## B 1002 写出这个数##############
#include<iostream>
#include<sstream>
using namespace std;
int main(){

    char num[100];
    int sum=0;
cin>>num;
for(int i=0;num[i]!='\0';i++)
{
    sum+=num[i]-'0';
}
//将int转化为string,实现按位访问：借助stringstream做中介
stringstream ss;
string str;
ss<<sum;
ss>>str;
int len=str.length();
string spell[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
for(int i=0;i<len-1;i++)
cout<<spell[(int)str[i]-48]<<" ";
cout<<spell[(int)str[len-1]-48]<<endl;

return 0;
}

######### 1003 测试是否符合规定的xPATx形式#####################

/! 4/20 我真的不明白为什么会答案错误

#include<iostream>
#include<string>
using namespace std;
//虽然文字那么长，
//但是总结起来就是P之前的A数目乘以P与T之间的A的数目等于P后面的A的数目。
//划重点
int main(){
    int n,i,j,p,t,flag=1;
string str;
cin>>n;
int output[10]={0};
for(j=0;j<n;j++)
{
    cin>>str;
for(i=0;i<str.length();i++)
{
    if(str[i]!='P'&&str[i]!='A'&&str[i]!='T')
    {
//        cout<<1;
        flag=0;
    }
}
 p=str.find('P');
 t=str.find('T');
 if(t-p<0&&flag==1) {flag=0;}
 if(p*(t-p-1)!=str.length()-1-t&&flag==1){flag=0;}
 output[j]=flag;
}
//cout<<output[0];
for(i=0;i<n;i++)
{
    if(output[i]==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
return 0;
}
##############1004 成绩排名############################
#include<iostream>

using namespace std;
int main(){
    int n,i,mi=100,ma=0,score;
    string name,id,miId,miName,maId,maName;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>name>>id>>score;
    if(score>ma){
        ma=score;maName=name;maId=id;
    }
    if(score<mi){
        mi=score;miName=name;miId=id;
    }
}
cout<<maName<<" "<<maId<<endl;
cout<<miName<<" "<<miId<<endl;

return 0;
}

##########1037 霍格沃茨找零系统##########################

/!16/20

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
 int g1,g2,s1,s2,k1,k2,g,s,k;
 char point;
 cin>>g2>>point>>s2>>point>>k2>>g1>>point>>s1>>point>>k1;

stringstream ss,ss2;
string checkOut,harry;
ss<<g2<<'.'<<s2<<'.'<<k2;
ss>>checkOut;
ss2<<g1<<'.'<<s1<<'.'<<k1;
ss2>>harry;
//cout<<"yingfu:"<<checkOut<<endl;
//cout<<"hali"<<harry<<endl;
if(checkOut>harry)
{
        cout<<'-';
        swap(g1,g2);
        swap(s1,s2);
        swap(k1,k2);
//        cout<<"here";
}


 g=g1-g2;s=s1-s2;k=k1-k2;
  if(k<0) {
        if(s1!=0){k=29+k;s--;}
        else if(g1!=0){s+=17;k+=29;g--;}
  }
 if(s<0){
     if(g1!=0){s+=17;g--;}
 }
cout<<g<<'.'<<s<<'.'<<k<<endl;
 return 0;
}

###########1038 统计同成绩的学生##################

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
int n,score[100]={0},i,s;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>s;
    score[s]++;
}
int k,aim;
cin>>k;

for(i=0;i<k-1;i++)
{
    cin>>aim;
 cout<<score[aim]<<' ';
}
cin>>aim;
cout<<score[aim];
 return 0;
}

#######1039 到底买不买##########################

14/20

#include<iostream>
#include<cstring>
using namespace std;
int main(){
char all[1000],target[1000];
memset(all,'#',1000);
memset(target,'#',1000);
int i,j,n1=0,n2=0;
cin>>all>>target;
for(i=0;i<1000;i++)
{
    for(j=0;j<1000;j++)
    {
        if(all[j]==target[i]){
            all[j]='#';
            target[i]='#';
        }
    }
}
for(i=0;i<50;i++)
{
    if(all[i]!='#') n1++;
    if(target[i]!='#') {n2++;
}
}

if(n2==0) cout<<"Yes "<<n1;
else cout<<"No "<<n2;

 return 0;
}

########## A 1007  Maximum Subsequence Sum ###########

蛮力法
16/25

#include<iostream>
using namespace std;
int main(){
    int n,sum=0,tmp,i,j,start,end;
    cin>>n;
    int k[1000];
    for(i=0;i<n;i++) cin>>k[i];
    for(i=0;i<n;i++)
    {
        tmp=0;
        for(j=i;j<n;j++)
        {
            tmp+=k[j];
            if(tmp>sum){
                    sum=tmp;
                start=k[i];
                end=k[j];
            }
        }
    }
    cout<<sum<<" "<<start<<" "<<end<<endl;

return 0;
}



########1040 PAT的个数#################################

#include<iostream>
using namespace std;
int main(){
string str;
cin>>str;
//cout<<str;
int numT=0,numAT=0,numPAT=0;
for(int i=str.length();i>=0;i--){
    if(str[i]=='T') numT++;
    if(str[i]=='A') numAT=(numAT+numT)%1000000007;
    if(str[i]=='P') numPAT=(numPAT+numAT)%1000000007;
}
    cout<<numPAT;

    return 0;
}

##########1041 考试座位号##############################
#include<iostream>
#include<string>
using namespace std;
int main(){
int n,m;
string sid,trialId,testId;
string info[1000][3];
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>info[i][0]>>info[i][1]>>info[i][2];
}
cin>>m;
for(int i=0;i<m;i++){
    cin>>trialId;
    for(int j=0;j<n;j++){
        if(info[j][1]==trialId) cout<<info[j][0]<<" "<<info[j][2]<<endl;
    }
}
    return 0;
}

##########1042 字符统计############################################

12/20

#include<iostream>
#include<string>
using namespace std;
int main(){
int f[26]={0},i;
string str;
getline(cin,str);
for(i=0;i<str.length();i++)
{
    if(str[i]>'A'&&str[i]<'Z') str[i]=(char)str[i]+32;
//    cout<<str[i];
f[str[i]-'a']++;

}
int ma=0,temp=0;
for(i=0;i<26;i++){
    if(f[i]>ma) {ma=f[i];temp=i;}
}
cout<<(char)('a'+temp)<<" "<<ma;
    return 0;
}

######### A 1008 电梯运行#########################################

#include<iostream>
using namespace std;
int main(){
    int n,now=0,next,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>next;
        if(now<next) sum+=(next-now)*6+5;
        else sum+=(now-next)*4+5;
        now=next;
    }
    cout<<sum;
return 0;
}
########### 1006 换个格式输出整数######################################
#include<iostream>
using namespace std;
int main(){
    int i,j;
    string str;
    cin>>str;
    if(str.length()==3){
        for(i=0;i<str[0]-'0';i++) cout<<'B';
        for(i=0;i<str[1]-'0';i++) cout<<'S';
        for(i=1;i<=str[2]-'0';i++) cout<<i;
    }
    else if(str.length()==2){
        for(i=0;i<str[0]-'0';i++) cout<<'S';
        for(i=1;i<=str[1]-'0';i++) cout<<i;
    }
    else if(str.length()==1){
        for(i=1;i<=str[0]-'0';i++) cout<<i;
    }
return 0;
}

##########1007 素数对猜想#############################

#include<iostream>
using namespace std;
/!要掌握基本的盘算素数模块
/!分离出判断素数函数，降低了程序的复杂性
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int i,n,d[100000],j=0,sum=0;
  cin>>n;
  for(i=2;i<=n;i++){
if(isPrime(i)) {d[j]=i;j++;}
  }
    for(i=1;d[i]!=0;i++){
        if(d[i]-d[i-1]==2) sum++;
    }
//    cout<<d[0]<<";"<<d[1]<<";"<<d[2]<<endl;
    cout<<sum;
return 0;
}

########1008 循环右移################################
#include<iostream>
using namespace std;

int main(){
int n, m,arr[100],arr2[100],i;
cin>>n>>m;
for(i=0;i<n;i++){
    cin>>arr[i];
    arr2[(i+m)%n]=arr[i];
}
for(i=0;i<n-1;i++) cout<<arr2[i]<<" ";
cout<<arr2[n-1]<<endl;

return 0;
}

##########1009 说反话##################################
/!待测试
/!或者用stack in <std::vector<char> 
/!strtok将分割符的字符delimiter替换为'\0'并且返回首地址。
/!头文件string.h

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){
    int i=0;
char str[80];
string result[80];
for(i=0;i<80;i++) result[i]="#";
gets(str);
char * temp=strtok(str," ");
i=0;
while(temp){
    result[i]=temp;
    temp=strtok(NULL," ");
    i++;
}
for(i=0;result[i]!="#";i++);
for(int j=i-1;j>0;j--) cout<<result[j]<<" ";
cout<<result[0];
return 0;
}

#####1010 一元多项式####################################

#include<iostream>

using namespace std;
int main(){
int x,z;
cin>>x>>z;
while(z!=1){
    cout<<x*z<<" "<<z-1<<" ";
    cin>>x>>z;
}
cout<<x*z<<" "<<z-1;
return 0;
}

#####1011 检查a+b>c ####################################
#include<iostream>

using namespace std;
int main(){
long a,b,c,n,i;
int re[10]={0};
cin>>n;
for(i=0;i<n;i++){
        cin>>a>>b>>c;
   if(a+b>c) re[i]=1;

}
for(i=0;i<n;i++){
    cout<<"Case #"<<i+1<<": ";
    if(re[i]==1) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
return 0;
}

#####1012 数字分类####################################

17/20 格式错误

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
int a1=0,a2=0,a3=0,a5=0,m=0,sig=1,n,num;
double a4=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>num;
    if(num%5==0&&num%2==0) a1+=num;
    if(num%5==1) {
        a2+=sig*num;
        sig*=-1;
    }
     if(num%5==2){
    a3+=1;
    }
    if(num%5==3){
    a4+=num;m++;}
    if(num%5==4&&num>a5){
     a5=num;
    }
}
if(m!=0) a4=(double)a4/m;

if(a1==0)cout<<"N ";else cout<<a1<<" ";
if(a2==0)cout<<"N ";else cout<<a2<<" ";
if(a3==0)cout<<"N ";else cout<<a3<<" ";
if(m==0)cout<<"N ";else cout<<setiosflags(ios::fixed)<<setprecision(1)<<a4<<" ";
if(a5==0)cout<<"N ";else cout<<a5;
return 0;
}


#####1013 数素数#######################################
#include<iostream>
#include<iomanip>

using namespace std;
bool isPrime(int x){
for(int i=2;i*i<=x;i++){
    if(x%i==0) return false;
}
return true;
}
int main(){
int m,n,i=0,j=2,prime[10000];

while(i<10000){
    if(isPrime(j)){prime[i]=j;i++;}
    j++;

}
cin>>m>>n;
int row=0;
for(i=m-1;i<n;i++){
    row++;
    if(row==10) {cout<<prime[i]<<endl;row=0;}
    else cout<<prime[i]<<" ";
}
return 0;
}

#####1014 福尔摩斯的约会####################################

还没有写完。。照理说并不难啊。。应该是脑残了吧。。。

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int i,h;
    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string weekday;
    for(i=0;i<s1.length()-1;i++){
        if(s1[i]==s2[i]) weekday=week[(int)s1[i]-'A'];break;}

    for(j=i;j<s1.length()-1;j++){
        if(s1[i]==s2[i])
        {
            cout<<s1[i];
            if(s1[i]>'0'&&s1[i]<'9') {h=(int)s1[i]-'0';}
            else {h=(int)s1[i]-'A';;}
        }
    }
    cout<<weekday<<" "<<h<<":";
return 0;
}

####1016 部分A+B#############################
#include<iostream>
#include<math.h>
using namespace std;
int main(){
   string a,b;
   char aa,bb;
   cin>>a>>aa>>b>>bb;
   int i,pa=0,pb=0;
   for(i=0;i<a.length();i++){
    if(a[i]==aa) {pa++;}

   }
   for(i=0;i<b.length();i++){
    if(b[i]==bb) pb++;
   }
   int sumA=0,sumB=0;
   for(i=0;i<pa;i++) sumA+=(int)(aa-'0')*pow(10,i);
int temp;
  for(i=0;i<pb;i++) {
        sumB+=(int)(bb-'0')*pow(10,i);
        temp=(int)(bb-'0')*pow(10,i);
最终结果少了1.复查的时候发现他妈的下面两句输出结果不一样我就不明白是什么原因了
说不定是编译器的问题。直接提及爱哦一下试一试
        cout<<temp<<endl;
        cout<<(int)(bb-'0')*pow(10,i)<<endl;

  }
// cout<<3*pow(10,2)<<endl;
  cout<<sumA+sumB;
return 0;
}
####1021 个位数统计##########################
#include<iostream>
#include<math.h>
using namespace std;
int main(){
   string n;
   cin>>n;
   int d[10]={0};
   for(int i=0;i<n.length();i++){
    d[n[i]-'0']++;
   }
  for(int i=0;i<10;i++){
    if(d[i]!=0){
        cout<<i<<":"<<d[i]<<endl;
    }
  }
return 0;
}

####1017 A除以B#############################
谜之性状
看别人的代码代码

#include<iostream>
#include<math.h>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
cout<<a/b<<" "<<a%b;
return 0;
}


####1018 剪刀石头布###########################
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
int n,jias=0,jiap=0;
int jiej[3]={0},jiey[3]={0};//B,C,J获胜此次数
string str;
cin>>n;
getline(cin,str);//读入第一个换行符
for(int i=0;i<n;i++){
//        cout<<i<<endl;
    getline(cin,str);
    if(str=="C J"){
        jias++;
        jiej[1]++;
    }
        if(str=="J c"){
        jiey[1]++;
    }
        if(str=="J B"){
        jias++;
        jiej[2]++;
    }
        if(str=="B J"){
        jiey[2]++;
    }
        if(str=="B C"){
         jiey[0]++;
    }
        if(str=="C B"){
        jias++;
        jiej[0]++;
    }
    if(str=="B B"||str=="C C"||str=="J J") jiap++;
}

    cout<<jias<<" "<<jiap<<" "<<n-jias-jiap<<endl;
    cout<<n-jias-jiap<<" "<<jiap<<" "<<jias<<endl;
    int maj=0,may=0,tempj=0,tempy=0;
    for(int i=0;i<3;i++){
        if(jiej[i]>maj){tempj=i;maj=jiej[i];}
        if(jiey[i]>may){tempy=i;may=jiey[i];}
    }
    string str1="BCJ";
    cout<<str1[tempj]<<" "<<str1[tempy];


}


####1019 数字黑洞#############################
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<sstream>
using namespace std;

int cmpd(char a,char b){
	return a>b;
}
int main(){
	char n[4];
	cin>>n;
	string str;

	int dec=1,inc=0;
	while(dec-inc!=6174&&dec-inc!=0){
	sort(n,n+4,cmpd);
	 dec=atoi(n);
	sort(n,n+4);
	 inc=atoi(n);
	 printf("%04d - %04d = %04d",dec,inc,dec-inc);
	cout<<endl;
		stringstream ss;
	ss<<dec-inc;
	ss>>str;
	n[0]=str[0];n[1]=str[1];n[2]=str[2];n[3]=str[3];
}

	return 0;
}

####1020 月饼###################################
#include<iostream>
#include<algorithm>
using namespace std;
//最大收益--单价最高的月饼
struct node{
double w=0.1,p=0.0;
double unit=p/w;
};
int cmp(node a,node b){
return a.unit>b.unit;}
int main(){
int type,total,i;
node n[1000];
cin>>type>>total;
for(i=0;i<type;i++){
    cin>>n[i].w;
}
for(i=0;i<type;i++){
    cin>>n[i].p;
    n[i].unit=(double) n[i].p/n[i].w;
}
sort(n,n+type,cmp);
int sumW=0;
for(i=0;i<type;i++){
        sumW+=n[i].w;
    if(sumW>total) break;
}
int temp=i;
double sum=0.0;
sumW=0;
for(i=0;i<temp;i++){
    sum+=n[0].p;
    sumW+=n[i].w;
}
sum+=(double)((total-sumW)/n[temp].w)*n[temp].p;
cout<<sum<<endl;
}
###1021 个位数统计#########################
#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
int num[10]={0};
cin>>str;
for(int i=0;i<str.length();i++){
    num[str[i]-'0']++;
}
for(int i=0;i<str.length();i++){
    if(num[i]!=0)
        cout<<i<<":"<<num[i]<<endl;
}
}
###1022 D进制的A+B############################
#include<iostream>
#include<stack>
using namespace std;
int main(){
int a,b,n;
cin>>a>>b>>n;
int sum=a+b;
stack<int> result;
while(sum){
    result.push(sum%n);
    sum/=n;
}
for(int i=0;i<result.size()+3;i++)
{
    cout<<result.top();
    result.pop();
}
}
#####1023 组个最小数##########################
#include<iostream>
using namespace std;
int main(){
    int i,num[10]={0};
    for(i=0;i<10;i++) cin>>num[i];
    for(i=1;i<10;i++) if(num[i]!=0) {cout<<i;num[i]--;break;}
    for(i=0;i<10;i++)
        for(int j=0;j<num[i];j++){
         cout<<i;
    }
    return 0;
}
#####1024 科学计数法##############################
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
cin>>str;
//E的位置
int pos;
int i=0;
for(i=0;i<str.length();i++){
    if(str[i]=='E') pos=i;
}
//将E后面的数标记为after
int after;
after=atoi(str.substr(pos+2,str.length()-pos-1).c_str());
//如果为负数，需要输出一位符号
if(str[0]=='-') cout<<'-';
//
//分E后面是正数、负数处理
if(str[pos+1]=='+')//如果为正数
    {
    //需要在整个数字后面添加0
    if(pos-3<after){
        for(i=1;i<pos;i++){
            if(str[i]!='.') cout<<str[i];
        }
        for(i=0;i<after-pos+3;i++) cout<<'0';
    }
    //不需要在整个数字之后添加0
    else{
        for(i=0;i<pos;i++){
            if(i==3+after)cout<<'.';
            if(str[i]!='.')cout<<str[i];
        }
            }

}
//如果E后面为负数或0
else{
    if(after==0)for(i=1;i<pos;i++) {cout<<str[i];cout<<"h"<<endl;}
    cout<<"0.";
    for(i=0;i<after-1;i++)cout<<'0';
    for(i=1;i<pos;i++) if(str[i]!='.') cout<<str[i];

}
}

#######1043 输出PATest##########################
#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cin>>str;
int PATest[6]={0};
int i;
for(i=0;i<str.length();i++){
    if(str[i]=='P') PATest[0]++;
    if(str[i]=='A') PATest[1]++;
    if(str[i]=='T') PATest[2]++;
    if(str[i]=='e') PATest[3]++;
    if(str[i]=='s') PATest[4]++;
    if(str[i]=='t') PATest[5]++;
}
for(i=0;i<10000;i++){
    if(PATest[0]!=0){cout<<'P'; PATest[0]--;}
    if(PATest[1]!=0){cout<<'A'; PATest[1]--;}
    if(PATest[2]!=0){cout<<'T'; PATest[2]--;}
    if(PATest[3]!=0){cout<<'e'; PATest[3]--;}
    if(PATest[4]!=0){cout<<'s'; PATest[4]--;}
    if(PATest[5]!=0){cout<<'t'; PATest[5]--;}
}
return 0;
}
##1044 火星文############################################

/!一个substr,一个atoi，一个函数抽离
/!不需要重新用数组（vector）保存结果再输出,都一行输出一行即可

#include<iostream>
#include<cstdio>
#include<string>
#include<stdlib.h>
using namespace std;

string mar[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string jinwei[12]= {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void func1(string str){
    int e;
    e=atoi(str.c_str());
    if(e>12) cout<<jinwei[e/13-1]<<" ";
    cout<<mar[e%13];
}

void func2(string str){
    int num=0;
    if(str.length()==3||str.length()==4){

        for(int i=0;i<=12;i++){
        if(str==mar[i]) {cout<<i;return;}
        if(i==12) continue;
        if(str==jinwei[i]){cout<<13+i;return;}
    }}else{
    for(int i=0;i<12;i++){
            if(jinwei[i]==str.substr(0,3))
                num+=(i+1)*13;
            if(mar[i]==str.substr(4,3))
                num+=i;
        }
        cout<<num;return;
    }
}
int main(){
int n;
cin>>n;
string str;
int len,number=0,i;
getchar();//读入回车，防止被之后的getline读入
for(i=0;i<n;i++){
    getline(cin,str);
    if(str[0]>'0'&&str[0]<'9'){
     func1(str);
    }
    else{
      func2(str);
    }
     cout<<endl;
    }
}



//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//vector<int> a;
//a.push_back(1);
//a.push_back(2);
//cout<<vector<int>a.l
//}
/!如果用vector是不是可以用IndexOF的函数（stackouverflow）


##1045 快速排序##################################################
#include<iostream>
using namespace std;
int arr[100000]={0},n;
bool smaller(int i)
{
    for(int j=0;j<i;j++)
        if(arr[j]>arr[i])return false;
    return true;
    }
bool bigger(int i)
{
    for(int j=i+1;j<n;j++)
        if(arr[j]<arr[i])return false;
    return true;
    }

int main(){
int result[10000]={0},i;
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
}
int num=0;
for(i=0;i<n;i++){
    if(smaller(i)&&bigger(i)) {result[num]=arr[i];num++;}
}
cout<<num<<endl;
for(int j=0;j<num-1;j++){
    cout<<result[j]<<" ";
}
cout<<result[num-1];
return 0;
}

######1046 划拳#############################################
#include<iostream>
using namespace std;
int main(){
    int i,n,a[4],result[100]={0};//甲赢1，乙赢2
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        if(a[1]==a[3]) continue;
        if(a[0]+a[2]==a[1]) result[i]=1;
        if(a[0]+a[2]==a[3]) result[i]=2;
    }
    int jia=0,yi=0;
    for(i=0;i<n;i++){
        if(result[i]==1) yi++;
        if(result[i]==2) jia++;
    }
    cout<<jia<<" "<<yi;
}

#####1047 团体编程赛###############################################
#include<iostream>
using namespace std;
int main(){
int n,a[1000]={0},i,id,sid,score;
char c;
cin>>n;
for(i=0;i<n;i++){
cin>>id>>c>>sid>>score;
a[id]+=score;
}
int ma=0,temp=0;
for(i=0;i<1000;i++){
    if(a[i]>ma) {ma=a[i];temp=i;}
}
cout<<temp<<" "<<ma;
return 0;
}
######1048 数字加密###################################################
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
string a,b;
int i,res,l;
cin>>a>>b;
l=a.length();
//cout<<"b"<<b.length()<<endl;
for(i=b.length();i>0;i--){
    if(l-(b.length()-i)==0) break;
    if(i%2==1){
        res=((int)(a[l-(b.length()-i)-1]+b[i-1]-'0'-'0'))%13;
//        cout<<"l"<<l<<";b.l"<<b.length();
//        cout<<"a["<<l-(b.length()-i)-1<<"]="<<a[l-(b.length()-i)-1]<<endl<<"b"<<i-1<<"="<<b[i-1]<<endl;
//        cout<<res<<endl;
        if(res<10) {s.push((char)res+48);/!将0-9数字转化为char'0'-'9'输出
//        cout<<(char)res+48<<endl;
        }
    else if(res==10) s.push('J');
    else if(res==11) s.push('Q');
    else if(res==12) s.push('k');
    }
    else{
        res=(int)b[i-1]-a[l-(b.length()-i)-1];
//        cout<<"l"<<l<<";b.l"<<b.length();
//        cout<<"a["<<l-(b.length()-i)-1<<"]="<<a[l-(b.length()-i)-1]<<endl<<"b"<<i-1<<"="<<b[i-1]<<endl;
//        cout<<res<<endl;
        if(res<0) s.push((char)res+10+48);
        else s.push((char)res+48);
    }

//    cout<<res<<endl;
}
for(int j=i-1;j>=0;j--)
{
    s.push(b[j]);
}
//int h=52;
//s.push(h);
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
return 0;
}
######1049 数列的片段和####################################
/!求和的规律
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[100001],sum=0.0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum = sum + a[i] * i * (n - i + 1);
        //sum=sum+(n-i+1)*i*a[i]; 这样通不过
    }
    printf("%.2f",sum);
    return 0;
}


###1050 螺旋矩阵############################################
19/25

用例2：
30
1 2 4 3 5 6 7 8 9 10 11 13 12 14 15 16 17 19 18 20 23 24 21 22 25 26 27 29 28 30


#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int findmn(int n)
{
    int i,row=n,col=1,tempr,tempc;
    for(i=1;i<n/2-1;i++){
        if(n%i==0){
            tempc=i;
            tempr=n/i;
            if(tempr-tempc<row-col&&tempr>tempc){row=tempr;col=tempc;}
        }
    }
//    cout<<row;
    return row;
}
int main(){
    int i,j,n,a[10000],row,col;
    cin>>n;
    for(i=0;i<n;i++) {cin>>a[i];}
    row=findmn(n);
    col=n/row;
    int b[100][100]={0};
    sort(a,a+n);
//    for(i=0;i<n;i++)cout<<a[i];
    int numa=n-1;
//    cout<<"numa:"<<numa<<";";
   for(i=0;i<col/2+1;i++){
    for(j=0;j+i<col-i&&numa>=0;j++){b[0+i][j+i]=a[numa];numa--;}
    for(j=1;j+i<row-i&&numa>=0;j++) {b[j+i][col-1-i]=a[numa];numa--;}
    for(j=col-2-i;j>=i&&numa>=0;j--){b[row-1-i][j]=a[numa];numa--;}
    for(j=row-2-i;j>i&&numa>=0;j--){b[j][0+i]=a[numa];numa--;}
    }


    for(i=0;i<row;i++)
        for(j=0;j<col;j++){
            if(j!=col-1)
//                cout<<b[i][j]<<" ";
printf("%d ",b[i][j]);
            else
                cout<<b[i][j]<<endl;
        }

return 0;
}

###1501 复数乘法####################################################
#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main(){
    double r1,r2,p1,p2,a,b;
    cin>>r1>>p1>>r2>>p2;
    a=r1*r2*cos(p1)*cos(p2)-r1*r2*sin(p1)*sin(p2);
    b=r1*r2*(sin(p2)*cos(p1)+cos(p2)*sin(p1));
    printf("%.02f",a);
    if(b>0) printf("-%.02fi",b);
    else printf("%.02fi",b);
return 0;
}
//
//#include <iostream>
//#include <cmath>
//#include <cstdio>
//using namespace std;
//int main() {
//    double r1, p1, r2, p2;
//    cin >> r1 >> p1 >> r2 >> p2;
//    double A, B;
//    A = r1 * r2 * cos(p1) * cos(p2) - r1 * r2 * sin(p1) * sin(p2);
//    B = r1 * r2 * cos(p1) * sin(p2) + r1 * r2 * sin(p1) * cos(p2);
////    if (A + 0.01 >= 0 && A < 0)
////        printf("0.00");
////    else
//        printf("%.02f", A);
//    if(B >= 0)
//        printf("+%.2fi", B);
//    else if (B + 0.01 >= 0 && B < 0)
//        printf("+0.00i");
//    else
//        printf("%.2fi", B);
//    return 0;
//}

####1052 卖个萌###############################
这个题，不需要读入所有行之后输出，读一行输出一行也可以完全通过测试
用vector可以：1.k的大小并没有指明 2.极大简化用数组的处理过程
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector<string>> v;
string str;
int i,j;
//获取所有符号
for(i=0;i<3;i++){
getline(cin,str);
vector<string>row;
for(j=0;j<str.length();j++)
    if(str[j]=='[')
        for(int k=j;k<str.length();k++)
            if(str[k]==']'){
            row.push_back(str.substr(j+1,k-j-1));
            break;}
v.push_back(row);
}
//按数字输出
int k;
int a,b,c,d,e;
cin>>k;
for(int i=0;i<k;i++){
cin>>a>>b>>c>>d>>e;
if(a>v[0].size()||b>v[1].size()||c>v[2].size()||d>v[1].size()||e>v[0].size()||a<0||b<0||c<0||d<0||e<0)
    {cout<<"Are you kidding me? @\\/@"<<endl;continue;}
  else cout<<v[0][a-1]<<v[1][b-1]<<v[2][c-1]<<v[1][d-1]<<v[0][e-1]<<endl;
}
return 0;
}
####1053 住房空置率###############################################
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int n,d,i,j,k,sum=0,num=0,num2=0;
double e,t;
cin>>n>>e>>d;
for(i=0;i<n;i++){
sum=0;
cin>>k;
for(j=0;j<k;j++){
    cin>>t;
    if(t<e) sum++;
}
if(sum>k/2){
    num++;
    if(sum>d){num--;num2++;}
//    cout<<num<<endl<<num2<<endl;
}
}
printf("%.1f%%",(double)num/n*100);
printf(" %.1f%%",(double)num2/n*100);
}
####1054 求平均值#####################################

函数
#include<stdlib>
atoi(string) string->int
atof(string) string->float

//#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
//#include<sstream>
using namespace std;
int main(){
    vector<string> number;
    vector<string> error;
int n,j,point;
cin>>n;
string temp;
bool isNumber;
for(int i=0;i<n;i++){
        point=1;
        isNumber=true;
    vector <string> num;
    cin>>temp;
    for(j=0;j<temp.length();j++){
        if(temp[j]!='.'&&temp[j]!='-'&&(temp[j]<'0'||temp[j]>'9'))isNumber=false;//不是.-或数字
        if(atoi(temp.c_str())>1000||atoi(temp.c_str())<-1000)isNumber=false;
        if(temp[j]=='-'&&j!=0)isNumber=false;//-不在最前面
        if(temp[j]=='.'){point--;if(point<0) isNumber=false;//出现两个及以上的小数点
                         if(temp.length()-j-1>2) isNumber=false;//haoguo两位小数
                         }
    }
    if(isNumber)
    number.push_back(temp);
    else
        error.push_back(temp);
}
for(int i=0;i<error.size();i++){
    cout<<"ERROR: "<<error[i]<<" is not a legal number"<<endl;
}
//stringstream ss;
float now;
double sum=0.0;
for(int i=0;i<number.size();i++){
//    ss<<number[i];
//    now<<ss;
now=atof(number[i].c_str());
    sum+=now;
}
printf("The average of %d numbers is %.2f",number.size(),(double)sum/number.size());
if(number.size()==0) cout<<"The average of 0 numbers is Undefined";
}

//#include<iostream>
//#include<stdlib.h>
//
//using namespace std;
//int main(){
//    char* d="123.1";
//    double cd=atof(d);
//cout<<cd;
//}

###1055 集体照###########################################
将姓名和身高作为结构体保存，用vector<node> 保存你结构体组
自定义的sort,implement cmp函数
中间、左右，分开处理

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
string name;
int h;
};
int cmp(struct node a,struct node b){//相同身高安姓名顺序..待完善
    if(a.h!=b.h) return a.h>b.h;
else return a.name<b.name;
}

int main(){
//输入并排序
int n,k,i;
cin>>n>>k;//总人数，排数
vector<node> v(n);
for(i=0;i<n;i++){
    cin>>v[i].name>>v[i].h;
}
sort(v.begin(),v.end(),cmp);//!
//将人name放入vector<string>stemp(n)对应位置

int m;
int l=0;//用于在v[i]中记下标
int t=0;
int row=k;

while(row){
    //分是否最后一排计算每排人数
  if(row==k) m=n-(n/k)*(k-1);
  else m=n/k;

  vector<string> stemp(m);//初始化的时候不要忘记(n)
  l=t;
  stemp[m/2]=v[l].name;
  cout<<v[l].name<<endl;
  l++;
  for(i=m/2-1;i>=0;i--) {stemp[i]=v[l].name;l=l+2;}
  l=t+2;
  for(i=m/2+1;i<m;i++){stemp[i]=v[l].name;l=l+2;}
  //输出
  for(l=0;l<m;l++)cout<<stemp[l];
  cout<<endl;
  t+=m;
  row--;
}

return 0;
}
###1056 求组合数的和######################################
#include<iostream>
using namespace std;
int main(){
int n,sum=0,t;
cin>>n;
for(int i=0;i<n;i++){
        cin>>t;
    sum+=t;
}
cout<<sum*11*(n-1);
}
##1057 数一零##########################################
/！十进制转化为二进制
#include<iostream>
#include<string>
using namespace std;
int main(){
    int sum=0;
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
                str[i]=toupper(str[i]);/！touppe()!!!
                sum+=str[i]-'A'+1;/！isalpha()!!
                cout<<str[i]-'A'+1;
    }
}
    int num1=0,num0=0;
    while(sum){
            cout<<sum%2;
        if(sum%2==1) num1++;
        else num0++;
        sum/=2;
    }
    cout<<num0<<" "<<num1;
}
#####1058 多选题判分#################################################
/!set来比较学生答案以及正确答案
具体各数组作用、解题思路见git package 1058

#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
int n,m,temp,k,total[1000],wrongCnt[1000]={0},maxWrongCnt=0,i,j;
set<char> answer;
char c;
cin>>n>>m;//stu number,problem number
vector<set<char>> right(m);
//存储题目所有信息（尤其是将正确答案保存到<set>right[i]中准备和学生的答案比较
for(i=0;i<m;i++){
    cin>>total[i]>>temp>>k;
    for(j=0;j<k;j++) {cin>>c;right[i].insert(c);}
}
//学生答题情况
int sum=0;
for(i=0;i<n;i++){//学生循环
    sum=0;
    for(int l=0;l<m;l++){//题目循环
        cin>>c>>k;
        for(j=0;j<k;j++){cin>>c;answer.insert(c);}//插入answer的循环

/*用迭代器输出集合中所有元素
*        cout<<l<<":";
*        set<char>::iterator it;
*        for(it=answer.begin();it!=answer.end();it++) cout<<*it;
*            cout<<endl;
*/
        if(answer==right[l]) {sum+=total[i];}
        else wrongCnt[l]++;
        cin>>c;
        answer.clear();//清除set中所有元素
    }
    cout<<sum<<endl;
}
//输出wrongCnt情况
for(i=0;i<m;i++) if(wrongCnt[i]>maxWrongCnt) maxWrongCnt=wrongCnt[i];
cout<<maxWrongCnt;
for(i=0;i<m;i++) if(wrongCnt[i]==maxWrongCnt){cout<<" "<<i+1;}
if(maxWrongCnt==0) cout<<"Too simple"<<endl;


return 0;
}


#####1059 C语言竞赛(20)##################################################
集合ss存储所有已经询问过的id，如果发现当前id已经出现在ss中，则输出“Checked”
用int res[10000]存储id位置,id即数组下标。如果没有出现的话对应res[id]=0

#include<iostream>
#include<string>
#include<set>
using namespace std;
bool isPrime(int n){
int i;
if(n==2) return true;
for(i=2;i*i<n;i++)if(n%i==0) return false;
return true;
}

int main(){
int n,k,i,j;
int t;
cin>>n;
int id[100000]={0};
for(i=0;i<n;i++){
    cin>>t;
    id[t]=i+1;
}
cin>>k;
set<int>searched;
for(i=0;i<k;i++){
    cin>>t;
    if(id[t]==0) {cout<<t<<": Are you kidding?"<<endl;continue;}
    if(searched.find(t)==searched.end())/!判断是否找到
    searched.insert(t);
    else {cout<<t<<": Checked"<<endl;continue;}
     if(id[t]==1) cout<<t<<": Mistery Award"<<endl;
    else if(isPrime(id[t])) cout<<t<<": Minion"<<endl;
    else cout<<t<<": Chocolate"<<endl;
}
}


###1060 爱丁顿数###########################################
21/25 运行超时（有更加优秀的思路）
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,e=0,a[100000],num=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
//sort(a,a+n);
for(int i=0;i<n;i++){
        num=0;
    for(int j=0;j<n;j++){
        if(a[j]>i) num++;
    }
    if(num>=i&&i>e) e=i;
}
cout<<e;
}
###1061 判断题#################################################
#include<iostream>
using namespace std;
int main(){
int m,n,i,score[100],rightAnswer[100],sum[100]={0};
cin>>n>>m;
for(i=0;i<m;i++) cin>>score[i];
for(i=0;i<m;i++) cin>>rightAnswer[i];
int temp;
for(i=0;i<n;i++)
    for(int j=0;j<m;j++)
{
    cin>>temp;
    if(temp==rightAnswer[j]) {sum[i]+=score[j];}
//    cout<<j<<":"<<score[j]<<endl;
}
for(i=0;i<n;i++)
    cout<<sum[i]<<endl;
return 0;
}

####1062 大小在两个给定分数之间的最简分数################################################
不需要（从数学思维上）求三个分母最小公倍数，比较复杂
从计算机角度通过离散数字的递增、比较来解决这个问题

#include<iostream>
using namespace std;
int gcd(int a,int b){
return b==0?a:gcd(b,a%b);
}

int main(){
int n1,m1,m2,n2,k;
char c;
cin>>n1>>c>>m1>>n2>>c>>m2>>k;
if(n1*m2>n2*m1)
{
    swap(n1,n2);
    swap(m1,m2);
}
int num=0;
while(num*m1<=n1*k) num++;
if(gcd(num,k)==1) cout<<num<<"/"<<k;
num++;
while(num*m2<n2*k){
    if(gcd(num,k)==1) cout<<" "<<num<<"/"<<k;
    num++;
}

return 0;
}
####1063 计算谱半径#############################################################
除了这个数学名词吓人之外....
还有sqrt在<cmath>头文件

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
int n,i,s,x;
double ma=0.0;
cin>>n;
for(i=0;i<n;i++){
    cin>>s>>x;
    if(sqrt(s*s+x*x)>ma) ma=sqrt(s*s+x*x);
}
printf("%.2f",ma);
}
####1064 朋友数######################################
太简单

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
int n,i,zheng[36]={0};
string temp;
cin>>n;
int sum;
for(i=0;i<n;i++)
{
    cin>>temp;
    sum=0;
    for(int j=0;j<temp.length();j++) sum+=temp[j]-'0';
    zheng[sum]++;
}
sum=0;
for(i=0;i<36;i++){
    if(zheng[i]!=0) {
            sum++;
    }}
cout<<sum<<endl;
int f=0;
for(i=0;i<36;i++)
{
    if(zheng[i]!=0&&f==0) {f=1;cout<<i;}
    else if(zheng[i]!=0) cout<<" "<<i;
}
}
#########1065 统计单身人数##########################################
没理解题意造成的无用功。起码样例输入和样子输出要看明白吧
//#include<iostream>
//#include<set>
//using namespace std;
//int main(){
//int n,i,m,id[100000]={0},temp;
//cin>>n;
//for(i=0;i<n;i++){
//    cin>>temp;
//    id[temp]=1;
//    cin>>temp;
//    id[temp]=1;
//}
//cin>>m;
//int sum=0;
//for(i=0;i<m;i++){
//        cin>>temp;
//    if(id[temp]==0){
//        sum++;
//    }
//}
//cout<<sum<<endl;
//int f=0;
//for(i=0;i<m;i++){
//      if(id[i]==0&&f==0){cout<<i;f++;}
//      else if(id[i]==0)cout<<" "<<i;
//}
//}
对每一个待判定的guest判断其男朋友是否在guest数组中。
其中男朋友存在与否、是谁，保存在couple数组中。
所有数组用vector或set实现，实现动态分配、插入，升序输出

#include<iostream>
#include<vector>
#include<set>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
int m,n,i;
cin>>n;
//所有配对情况保存在couple数组中！！！
vector<int> couple(100000,-1);
int a,b;
for(i=0;i<n;i++){
    cin>>a>>b;
    couple[a]=b;
    couple[b]=a;
}
//待查询id保存在数组guest中
cin>>m;
vector<int> guest(m);
for(i=0;i<m;i++){
    cin>>guest[i];
}
//是否有couple的结果保存在set中
set<int> result;
for(i=0;i<m;i++){
vector<int>::iterator c=find(guest.begin(),guest.end(),couple[guest[i]]);
if(c==guest.end()) result.insert(guest[i]);
}
//输出元素总数
cout<<result.size()<<endl;
//元素升序输出
for(auto it=result.begin();it!=result.end();it++){
    if(it!=result.begin()) printf(" ");
    printf("%05d",*it);
}
return 0;
}
####1066 图像过滤########################################
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
int m,n,a,b,g,i,j;
cin>>m>>n>>a>>b>>g;
vector<int> row(n);
for(i=0;i<m;i++){
    for(j=0;j<n;j++)
    {
        cin>>row[j];
        if(row[j]>=a&&row[j]<=b) row[j]=0;
        if(j!=0) cout<<" ";
        printf("%03d",row[j]);
    }
cout<<endl;
}
return 0;
}

####1067 试密码#############################################
14/20
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
int n;
string correct,temp;
cin>>correct>>n;
int trial=1;
while(1){
    if(trial>n){cout<<"Account locked"<<endl;break;}
    cin>>temp;
    if(temp=="#") break;
    if(temp!=correct) cout<<"Wrong password: "<<temp<<endl;
    if(temp==correct){cout<<"Welcome in"<<endl;break;}
    trial++;
}
}
########1068 图像中与四周色差超过阈值的点###############################
不能用数组a[1000][1000]//这个二维数组超过了内存分配的允许范围
转而使用二维的vector.
! resize函数
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> a;
int m,n,T,i,j,temp=0,ti,tj;//这个二维数组超过了内存分配的允许范围
cin>>m>>n>>T;
a.resize(n,vector<int>(m));
for(i=0;i<n;i++)
for(j=0;j<m;j++){
    cin>>a[i][j];
}
int f=0;
for(i=1;i<n-1;i++)
for(j=1;j<m-1;j++){
    if(a[i][j]-a[i-1][j-1]>T&&a[i][j]-a[i-1][j]>T&&a[i][j]-a[i-1][j+1]>T
       &&a[i][j]-a[i][j-1]>T&&a[i][j]-a[i][j+1]>T
       &&a[i][j]-a[i+1][j-1]>T&&a[i][j]-a[i+1][j]>T&&a[i][j]-a[i+1][j+1]>T){

        if(temp==0){temp=a[i][j];ti=i;tj=j;}
        else if(temp!=0){cout<<"Not Unique";f=1;break;}
       }
}
if(temp==0)cout<<"Not Exist";
else if(f==0) cout<<"("<<i<<","<<j<<"): "<<temp;
}



#####1069 weibo转发抽奖####################################
用set的原因是vector没有find函数，而set有，可以实现快速查找
但是输出的时候因为set中元素是无序的，所以输出的顺序无法保障。由此想到可以用
结构体保存元素+输入顺序(int)
#include<iostream>
#include<vector>
#include<set>
#include<sstream>
#include<string>
using namespace std;
int main(){
int m,n,s,i;
string temp,st;
cin>>m>>n>>s;
set<string> winner;
for(i=0;i<m;i++){
    cin>>temp;
    if(i==s-1||(i-s+1)%n==0&&i!=0){
        if(winner.find(temp)==winner.end()){
            winner.insert(temp);
        }
        else {
            cin>>temp;i++;
                winner.insert(temp);
    }
}
}
if(winner.size()==0) cout<<"Keep going...";
else{
   	for(set<string>::iterator it=winner.begin();it!=winner.end();++it)
	{
		cout<<*it<<"\n";
	}
}
winner.clear();
}
另一种办法：不通过加入set判断是否访问过形同的用户名，而是通过将用户名数组中int置1
string类型做数组索引的实现方式：map

###1070 最大结绳长度######################################
#include<iostream>
#include<algorithm>
using namespace std;
//分析：因为所有长度都要串在一起，每次都等于(旧的绳子长度+新的绳子长度)/2，所以越是早加入绳子长度中的段，越要对折的次数多，所以既然希望绳子长度是最长的，
//就必须让长的段对折次数尽可能的短。所以将所有段从小到大排序，然后从头到尾从小到大分别将每一段依次加入结绳的绳子中，最后得到的结果才会是最长的结果～
int main(){
    int n,i;
    int a[10000]={0};
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;/!此处造成23/25:sum[0]应该等于a[0]而非a[0/2]
    for(i=0;i<n;i++){
        sum+=a[i];
        sum/=2;
    }
    cout<<sum;
}
