#include <iostream>
#include <string.h>
//#include <stdio.h>
void strReserveRec(char* str, int left, int right)
{
	if(left >= right)
		return;
	
	char tmp = str[left];
	str[left] = str[right];
	str[right] = tmp;

	strReserveRec(str, left+1, right-1);
}

int main()
{
	char m_str[] = "hello world!";
	strReserveRec(m_str, 0, strlen(m_str)-1);
	std::cout << m_str << std::endl;
	return 0;
}

