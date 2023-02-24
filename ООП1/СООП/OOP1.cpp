#include <iostream>
#include "IntRange.h"
using namespace std;
IntRange makeRange(int x, int y)
{
	IntRange nn;
	if (!nn.Init(x, y)) {
		cout << "Wrong arguments to Init!" << endl;
	}
	return nn;
}

int main()
{
	IntRange r;
	r.Read();
	r.Display();
	r.rangeСheck();

	IntRange i;
	int x, y;
	cout << "first = ? ";
	cin >> x;
	cout << "second = ?";
	cin >> y;
	i = makeRange(x, y);
	i.Display();
	i.rangeСheck();
}
