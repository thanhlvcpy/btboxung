#include <bits/stdc++.h>

using namespace std;
bool dx(int a){
		int t=0,t1=a;
		while(a!=0){
				t=t*10+a%10;
				a=a/10;
		}
		if(t==t1)
				return true;
		else
					return false;
}
bool nto(int a){
		if(a<2)
				return false;
		if(a==2||a==3)
				return true;
		if(a%2==0||a%3==0)
				return false;
		int i=5;
		while(i<=trunc(sqrt(a))){
				if(a%i==0||a%(i+2)==0)
					return false;
				i=i+6;
		}
		return true;		

}
int main(){
    freopen("auction.inp","r",stdin);
    freopen("auction.out","w",stdout);
    long long a,b;
		cin>>a>>b;
		int d=0;
		for(int i=a;i<=b;i++)
			if(dx(i)==true&&nto(i)==true)
			d++;
		cout<<d;
}
