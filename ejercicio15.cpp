#include <iostream>

using namespace std;

void numero_de_rutas(int x, int y)
{
	int long long numeros[x][y] = {};
	numeros[0][0] = 1;
	
	for(int k = 0; k < x; k++)
	{
		numeros[k][0] = 1;
		
	}
	
	for(int k = 0; k < y; k++)
	{
		numeros[0][k] = 1;
		
	}
	
	
	
	for(int k = 1; k < x; k++)
	{
		for (int m = 1; m < y; m++)
		{
			numeros[k][m] = numeros[k-1][m] + numeros[k][m-1];
		}
	}
	
	cout<<numeros[x-1][y-1];
	
}



int main()
{
	numero_de_rutas(21,21);
	
	
	return 0;
}
