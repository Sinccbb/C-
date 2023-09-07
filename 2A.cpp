#include <iostream>
#define ll long long
#define ull unsigned long long
#define ui unsigned 

using namespace std;

ll fpb(ll a, ll b){
	if (a % b <= 0){
		return b;
	}else{
		return fpb(b, a % b);
	}
}

int main()
{
	ll a,b,c,d;
	ll e,f;
	cin >> a >> b >> c >> d;
	
	e = a*d + c*b;
	f = b*d;

	ll pembagi;
	if(e > f){
		pembagi = fpb(e,f);
	}else{
		pembagi = fpb(f,e);
	}

	cout << e/pembagi << " " << f/pembagi;
	
	return 0;
}
