#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 256

void misiion(char* fileName, int line,char* string){
	FILE *fp;
	char buffer[MAX_LENGTH];
	int lineCnt=0;

	char* tmp;

	if((fp = fopen(fileName, "rb")) !=NULL){
		while(fgets(buffer,MAX_LENGTH, fp) != NULL){
			lineCnt++;
			if(lineCnt == line) {
				printf("%s", strtok(buffer,string));
			}
		}

		if(lineCnt<line){
			printf("Wrong Line");
		}
	}else {
		perror(fileName);
		exit(1);
	}
	fclose(fp);
}
int main(int argc, char *argv[]){
	char fileNAme[MAX_LENGTH];
	int line;
	char string[MAX_LENGTH];

	scanf("%s %d %s",fileNAme,&line,string);
	misiion(fileNAme,line,string);

	return 0;
}


