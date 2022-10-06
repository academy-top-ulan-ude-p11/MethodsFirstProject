#include <iostream>

int counter()
{
	static int count = 0;
	return ++count;
}

long long FibLoop(int n)
{
	long long f1 = 0;
	long long f2 = 1;
	for (int i = 1; i < n; i++)
	{
		long long temp = f1 + f2;
		f1 = f2;
		f2 = temp;
	}
	return f2;
}

long long FibReq(int n)
{
	static long long FibArr[1000]{};
	if (n == 0 || n == 1) return n;

	if (!FibArr[n])
		FibArr[n] = FibReq(n - 1) + FibReq(n - 2);

	return FibArr[n];
}


int main()
{
	/*for (int i = 0; i < 5; i++)
		std::cout << counter() << "\n";*/

	std::cout << FibLoop(100) << "\n";
	std::cout << FibReq(100) << "\n";
		
}
