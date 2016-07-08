#include <iostream>

char * strReserveXOR(char * str)
{
	char * p1 = str;
	char * p2 = str;
	while(*p2)
		p2++;
	p2--;

	while(p2 > p1)
	{
		*p2 = *p2 ^ *p1;
		*p1 = *p2 ^ *p1;
		*p2 = *p2 ^ *p1;
		p2--;p1++;
	}
	return str;
}

int main()
{
	char m_str[] = "hello world!";
	strReserveXOR(m_str);
	std::cout << m_str << std::endl;
	return 0;
}



