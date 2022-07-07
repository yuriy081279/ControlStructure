#include<iostream>
using namespace std;
#define SQUARE 
void main()
{
	setlocale(LC_ALL, "");
	int n,y,z;
	//int counter = 0;
	
	cout << "введите размер фигуры: "; cin >> n;
	/*#ifdef SQUARE 
	for (int i = 0; i < n; i++)
	{
		cout << " ";
		for(int j = 0; j < n; j++)
		{
			
			cout << "* ";
		}
		cout << endl;
	}
	#endif SQUARE*/
	/*for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int j = 0; j<n-i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int c = 0; c <= i; c++)
		{
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int c = 0; c < n - i; c++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < n; i++)
	{
		cout << "      ";//отступ от кра€ консоли
		for (int c = 0; c < n - i; c++)
		{
			cout << " ";//внешний пробел ромба (верхн€€ половина)
		}
		for (int j = 0; j < 1; j++)
		{
			cout << "/";
		}
		for (int d = 0; d < i; d++)
		{
			cout << "  ";//внутренний пробел ромба (верхн€€ половина)
		}
		for (int j = 0; j < 1; j++)
		{
			cout << "\\";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "      ";//отступ от кра€ консоли
		for (int c=0; c <=i; c++)
		{
			cout << " ";//внешний пробел ромба (нижн€€ половина)
		}
		for (int j= 0; j < 1; j++)
		{
			cout << "\\";
		}
		for (int d=0; d<n-i-1; d++)
		{
			cout << "  ";//внутренний пробел ромба (нижн€€ половина)
		}
		for (int c = 0; c < 1; c++)
		{
			cout << "/";
		}
		cout << endl;

	}*/
	/*for (int i = 0; i < n; i++)
    {
		cout << "        ";
		z = i % 2;
		if (z==0)
		    for (int j = 0; j < n; j++)
		    {
			  y = j % 2;
			  if (y == 0)
			    cout << "+ ";
			  else
				cout << "- ";
	        }		 
		if (z==1)
	         for (int j = 0; j < n; j++)
		     {
			    y = j % 2;
			    if (y == 0)
				   cout << "- ";
			    else
				   cout << "+ ";
		     }
		     cout << endl;
	}*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)

			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "-";			
			//(i + j) % 2 == 0?cout << "+ ":cout << "- ";			
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << ((i + j) % 2 ? "+ " : "- ");
		cout << endl;
	}

}
	