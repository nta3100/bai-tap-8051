#include <REGX52.H>

sbit LED_PIN = P2^0;

void Delay_ms(unsigned int t);

void main()
{
	while(1)
	{
		LED_PIN = !LED_PIN;
		Delay_ms(500);
	}
}

void Delay_ms(unsigned int t)
{
	unsigned int x = 0;
	t = t*82;
	while(x < t)
	{
		x++;
	}
}