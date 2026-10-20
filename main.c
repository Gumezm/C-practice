#include <stdio.h>

int main() 
{
	printf("Hello, World!\n");
	printf("%d\n", 100);
	printf("%c\n", 'X');
	printf("%f\n", 3.1415);
	printf("%s\n", "Hello,World\0jjasdbh");
	
	system("pause");
	return 0;
}

// 0 表示程序正常结束，非 0 表示程序异常结束
// %d 表示以十进制的形式输出整数
// %c 表示输出字符
// %f 表示输出浮点数
