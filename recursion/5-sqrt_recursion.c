#include "main.h"
/**
 *
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	int temp = 0, rs;
	
	rs = n / 2;
	
	if (n < 0)
	{	
		return (-1);
	}
	if (rs != temp)
	{
		temp = rs;
		rs = (n/temp + temp) / 2;
	}
	return (rs);
}
