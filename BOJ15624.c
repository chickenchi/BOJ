#include <stdio.h>

typedef long long int ll;

typedef struct Matrix {
    ll Data[2][2];
} Matrix;

Matrix Matrix_Multiply(Matrix A, Matrix B)
{
	Matrix Result;

    Result.Data[0][0] = (A.Data[0][0] * B.Data[0][0] +
                   	    A.Data[0][1] * B.Data[1][0]) % 1000000007;

    Result.Data[0][1] =  (A.Data[0][0] * B.Data[1][0] +
                   		 A.Data[0][1] * B.Data[1][1]) % 1000000007;

    Result.Data[1][0] =  (A.Data[1][0] * B.Data[0][0] +
                   		 A.Data[1][1] * B.Data[1][0]) % 1000000007;

    Result.Data[1][1] =  (A.Data[1][0] * B.Data[1][0] +
                   		 A.Data[1][1] * B.Data[1][1]) % 1000000007;

    return Result;
}

Matrix Reset()
{
	Matrix Fibo;

	Fibo.Data[0][0] = 1; // n+1
	Fibo.Data[0][1] = 1; // n
	Fibo.Data[1][0] = 1; // n
	Fibo.Data[1][1] = 0; // n-1

	/*
	1 1
	1 0
	*/

	return Fibo;
}

int main()
{
	ll N;

	scanf("%lld", &N);

	if(!N)
	{
		printf("0");
		return 0;
	}

    Matrix a;
	Matrix multi;

	a = Reset();
	multi = a;

	for(ll i=1; i<N; i++) a = Matrix_Multiply(a, multi);

	printf("%lld", a.Data[0][1]);
        
    return 0;
}