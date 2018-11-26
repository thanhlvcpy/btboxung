#include <bits/stdc++.h>
using namespace std;
bool snt(int a){
	if(a<2)
		return false;
	if(a==2||a==3)
		return true;
	if(a%2==0 ||a%3==0)
		return false;
	int i=5;
	while(i<=trunc(sqrt(a))){
		if(a%i==0||a%(i+2)==0)
			return false;
		i=i+6;
	}
	return true;
}
bool bty(int a){
	int dem=0;
	while(a!=0){
		int tm=a%10;
		a=a/10;
		dem=dem+pow(tm,2);
	}

	if(snt(dem)==true)
		return true;
	else return false;
}

int main()
{
    freopen("beauty.inp","r",stdin);
    freopen("beauty.out","w",stdout);
    int k;
	while(cin>>k){
		int d=0;
		int number_at_k=1;
		while(d<k){
			number_at_k++;
			d++;
			while(bty(number_at_k)==false)
				number_at_k++;
		}
		cout<<number_at_k<<endl;
		number_at_k++;
	}
    return 0;
}
