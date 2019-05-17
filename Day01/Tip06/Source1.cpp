#define Min(u, v) (u < v ? u : v)

int main()
{
	int a = 1, b = 2, c = 0;
	c = Min(++a, ++b); // (++a < ++b ? ++a : ++b)

}
/*
Recommendation dont use macros while implementation.

Avoid implementing algorithms in terms of macro functions whenever possible.

Use Inline function instead..
*/