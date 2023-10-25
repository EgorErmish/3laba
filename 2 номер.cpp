#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	float colrub;
	float proc;
	float colyear;
	float rashetproc;
	float rezyl;

	while (true) {
		cout << " Введиет сумму вклада : ";
		cin >> colrub;
		cout << endl;
		proc = 3;
		cout << " Количество лет : " ;
		cin >> colyear;
		cout << endl;
		rashetproc = (colrub * proc) / 100;
		rezyl = rashetproc * colyear;
		cout << " За " << colyear << " лет у вас будет сумма в " << rezyl << " рублей. " << endl;
		return 0;
	}
}

