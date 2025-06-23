# My First Program

## Code Example

''' C
#include <stdio.h>
int main()
{ 
FILE *fp = fopen("hello1.txt","w");
if(fp == NULL)
{
	perror("File creation Failed");
	return 1;
}
fprintf(fp,"Hello, world we are writing programs for file handling !\n");
fclose(fp);
return 0;
}
