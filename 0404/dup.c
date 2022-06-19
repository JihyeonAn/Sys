#include <unistd.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int fd1, fd2;
	if((fd1 = creat("myfile", 0600)) == -1)
		perror("myfile");
	write(fd1, "Hello! Linux", 12);
	fd2 = 3;
	write(fd2, "Bye! Linux", 10);
	exit(0); 
}
