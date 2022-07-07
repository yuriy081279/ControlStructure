#include<iostream>
using namespace std;

#define VERHNIY_LEVIY_UGOL	(char)218
#define VERHNIY_PRAVIY_UGOL (char)191
#define NIZHNIY_LEVIY_UGOL  (char)192
#define NIZHNIY_PRAVIY_UGOL (char)217
#define BELIY_PRIYAM        "\xDB\xDB"
#define HORIZ_LINE          "\xC4\xC4"
#define VERT_LINE           (char)179
#define BLACK_BOX           "  "

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски "; cin >> n;
	//for (int i = 176; i < 224; i++)
	  // cout << i << "\t" << (char) i <<endl; 
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{ //cout << "* ";
			if (i == 0 && j == 0)cout << VERHNIY_LEVIY_UGOL;
			else if (i == 0 && j == n)cout << VERHNIY_PRAVIY_UGOL;
			else if (i == n && j == 0)cout << NIZHNIY_LEVIY_UGOL;
			else if (i == n && j == n)cout << NIZHNIY_PRAVIY_UGOL;
			else if (i == 0 || i == n)cout << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else
			{
				//((i + j) % 2 == 0) ? cout << BELIY_PRIYAM << BELIY_PRIYAM : cout << "  ";
				//((i + j) % 2 == 0) ? cout << BELIY_PRIYAM << BELIY_PRIYAM : cout << "  ";
				cout<<((i + j) % 2 == 0 ? BELIY_PRIYAM : BLACK_BOX);

			}
		}
		cout << endl;
	}
}