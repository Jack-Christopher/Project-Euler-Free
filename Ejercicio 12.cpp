#include<iostream>

using namespace std;

int fact_prim(int long long numero)
{
	int long long n = numero;
	int k = 2;
	int k2 = 1;
	int valor = 1;
	int long long producto = 1;
	int temp = 0;
	
	while(true)
	{
		if (producto == numero)
		{
			temp++;
			valor *= temp;
			break;
		}
		else if (n % k == 0)
		{
			temp++;
			n /= k;
			producto *= k;
			
			
		}
		else
		{
			temp++;
			valor *= temp;
			temp = 0;
			k++;
		}
	}
	
	return valor;
}




int main()
{
	
	int long long numero = 1;
	
	int numero2 = 2;
	
	while(true)
	{
		numero += numero2;
		
		if (fact_prim(numero) > 500)
		{
			break;
		}
		
		numero2++;
		
	}
	
	cout<< numero;
	
	
	return 0;
}


