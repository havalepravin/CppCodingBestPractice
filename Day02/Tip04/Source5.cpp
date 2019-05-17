#include <Windows.h>

void ThreadProc1(void *param) {
	int n = reinterpret_cast<int>(param);
	for (int i = 0; i < n; ++i)
	{

	}
}

int main()
{
	int a = 1000;
	int *ptr = reinterpret_cast<int*>(a); //This may be bad use of reinterpret_cast.

	CreateThread(NULL, 0, ThreadProc1, (LPVOID)1000, 0, 0)
}