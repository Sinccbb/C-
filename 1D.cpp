#include <iostream>
#include <string>

using namespace std;

int main()
{
	string mc, npc, sutradara;
	cin >> mc >> npc;

	bool editor = false;
	for (int i = 0; i < mc.length(); ++i)
	{
		sutradara = mc;

		sutradara.erase(i,1);

		if (sutradara == npc){
			editor = true;
		}
	}

	if (editor){
		cout << "Tentu saja bisa!";
	}else{
		cout << "Wah, tidak bisa :(";
	}
	
	return 0;
}
