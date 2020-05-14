#include<iostream>

using namespace std;
int collatz(int n)
{
	int contador = 1;
	
	while (n != 1)
	{
		if(n%2 == 0) 
		{
			n/=2;
			contador++;
		}
		else 
		{
			n *= 3;
			n++;
			contador++;
		}
	}
	
	return contador;
}


int main()
{
	int n = 13;
	int maximo = 0;
	int aux = 0;
	int numero = 0;
	
	for (int k = 10; k < 1000000; k++)
	{
		aux = collatz(k);
		if( aux > maximo) 
		{
			maximo = aux;
			numero = k ;
		}
	}
	
	
	
	cout<<maximo;
	
	

	return 0;
}

