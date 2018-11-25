#include <bits/stdc++.h>
using namespace std;
int n,h;
bool nguyento(int a)
{
    if(a==1)
        return false;
    if(a<3)
        return true;
    for(int i=2;i<= trunc(sqrt(a));i++)
            if(a%i==0)
                return false;
    return true;

}
bool docao(int a)
{
    int s=0;
    while (a!=0)
    {
        s= s + a%10;
        a=a/10;
    }
    if (s==h) return true;
    else return false;
}
int main()
{
    freopen ("docao.inp","r",stdin);
    freopen ("docao.out","w",stdout);
    cin>>n>>h;
    for (int a=1;a<=n;a++)
        if(nguyento(a)==true && docao(a)==true)
            cout<<a<<endl;
    return 0;
}