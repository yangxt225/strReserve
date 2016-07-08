#include <iostream>
//#include <string.h>
// 字符串逆置
char* strReserve(char * str)
{
	char *p1 = str;
	char *p2 = str;
	while(*p2)
		++p2;
	p2--; 

	while(p2 > p1)
	{
		char tmp = *p1;
		*p1++ = *p2;
		*p2-- = tmp;
	}
	std::cout << str << std::endl;
	return str;
}

int main()
{
	char m_str[] = "hello world!";
	//strcpy(m_str, tmp);
	strReserve(m_str);
		
	return 0;
}




