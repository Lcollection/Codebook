#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n>=0 && n<=59) cout << "E" <<endl;
        else if(n>=60 && n<=69) cout << "D" <<endl;
        else if(n>=70 && n<=79) cout << "C" <<endl;
        else if(n>=80 && n<=89) cout << "B" <<endl;
        else if(n>=90 && n<=100) cout << "A" <<endl;
        else cout << "Score is error!" <<endl;
    }
    return 0;
}