########输入数据的每行包含若干个（至少一个）以空格隔开的整数，输出
每行中所有整数之和。########
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string line;
	while(getline(cin,line)){//按行读取
		int sum=0,x;
		stringstream ss(line);//iostream
		while(ss>>x) sum+=x;//像读取cin一样读取ss
		cout<<sum<<"\n";
	}
	return 0;
} 

#######用struct代替class,且包含变异constructor/operator/ostream##########
#include<iostream>

using namespace std;

struct Point{
	int x,y;
	Point(int x=0,int y=0):x(x),y(y){}
};

Point operator + (const Point & A,const Point & B){
	return Point(A.x+B.x,A.y+B.y);
}

ostream& operator <<(ostream &out,const Point &p){
	out<<"("<<p.x<<","<<p.y<<")";
	return out;
}
int main(){
	Point a,b(1,2);
	a.x=3;
	cout<<a+b<<"\n";
	return 0;
} 

####替换字符串中出现的所有;################################
#include<iostream>
#include<string> 
using namespace std;

int main(){
	string str="a string;to be;operated on";
	int x=str.find(";");
while(x>=0){
	str.replace(x,1," ");
	x=str.find(";",x+1);
	}
cout<<str<<endl;
return 0;
}
####字符串处理##############################################
1.C风格的字符串 
	char*x="ACCGOGGGHJBBBBNJISGWBSJSKAUSJ",//29
		*y="ADBAVABABAAASSGGXXGAGAGAHSJA";//28
  ####访问###########
	x[i]或*(x+i-1)
	
2.C++新增的string处理字符串
	string x="ACCGOGGGHJBBBBNJISGWBSJSKAUSJ",//29
		   y="ADBAVABABAAASSGGXXGAGAGAHSJA";//28
	
  ####头文件#########
	#include<string> 
  #####转化###########
	char * c=str.c_str();
  ####访问###########
	str[1]
	或
	 for (string::iterator it = s1.begin(); it != s1.end(); it++){
        cout<<*it<< endl;
    }
  ####处理函数#######
	很多，详细见CPP课本 
	

###数组处理####################################################
1.一维数组
 定义：
  ##静态############
  int c[12];
  int c[n]; 如果n已经被声明为常量
  ##动态##########
  int *c=new int[n]; 如果n为变量
 访问：
   c[1];
   *(c+1);
2.二维数组
直接定义二维数组：float a[3][4]; 
动态定义 
	用一位数组表示二维数组  int *c=new int[(m+1)*(n+1)];
	直接动态定义 int **arr=new int *[COL];
				for(int i=0;i<ROW;i++)
				{
					arr[i]=new int[COL];
				}

访问c[i*(n+1)+j]  c[i][j]

############字符串读入及大小写转化
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s;
getline(cin,s);
transform(s.begin(),s.end(),s.begin(),::toupper);
cout<<s;
}
##########理智地说，需要读入带空格的东西并且大小写转化的时候应该去用char[] +gets()

########## see if berkeley or stanford have any sort of cpp courses

#vector处理###########

#include<vector>

1.实现动态内存分配
a.一维
  cin>>n;
  vector<int> a(n);
 b.二维
  vector<vector<int>> a;
  cin>>m>>n;
  a.resize(n,vector<int>(m));
 2.排序
  sort(a.begin(),a.end());
 3.插入
  a.push_back(ele);
 4.遍历
 for(vector<int>::iterator it=a.begin();it!=a.end();it++)
 	cout<<*it<<endl;
 set,同样方式遍历

#set处理##################
 set与vector相比，可以用find函数实现快速查找
 但是，set是无序的。也就是从set中读出的时候是否是按照原来的顺序完全是看运气

插入：a.insert();
查找：a.find();返回index.如果找不到返回a.end();
大小:a.size();
遍历：for(set<int>::iterator it;it!=set.end();it++)
     		cout<<*it<<endl;
函数
#include<stdlib>
atoi(string.c_str()) string->char*->int
atof(string.c_str()) string->char*->float

###整理：
	所有vector处理
	set处理