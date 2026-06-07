#include <stdio.h>
double add(double a, double b)
{
	return a + b;
}
double sub(double a, double b)
{
	return a - b;
}
int main() {
	printf("%f\n", add(5, 3));
	printf("%f\n", sub(10, 5));
}