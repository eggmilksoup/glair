#include <stdio.h>

int
main(int argc, char *argv[])
{
	if(argc == 2)
	{
		FILE *file = fopen(argv[1], "r");
		char buf[2048];
		while(fgets(buf, 2048, file))
			printf("%s", buf);
		fclose(file);
		return(0);
	}
	return(1);
}
