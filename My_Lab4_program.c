#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

void Scale(char, double);


int main(int argc, char** argv){

char name[MAX] = "raw_data_";
char name1[MAX];
char* end;
double offset;
int offFlag = 0;
double scale;
int scaleflag;

for(int i=1; i<argc; i++){
	
	 if(strcmp(argv[i],"-n") == 0){
		printf("\nWe have the filename\n");
		strncpy(name1,argv[i+1],MAX);
	 }
	 else if(strcmp(argv[i],"-o") == 0){
		printf("\nWe have the offset\n");
		offset = strtod(argv[i+1], &end)
		offFlag = 1;	 
	}
	 else if(strcmp(argv[i],"-s") == 0){
		printf("\nWe have the scale factor\n");
		scale = strtod(argv[i+1], &end);
		scaleFlag  = 1;
	 }
 	else if(strcmp(argv[i],"-h") == 0){
		printf("\nWe have the help option\n");
	 }
	
	
}


char name2[MAX] = ".txt";

int val = atoi(name1);

if(val < 10){
char extra0[MAX] = "0";
strcat(extra0, name1);
strncpy(name1, extra0,MAX);
}

strcat(name, name1);
strcat(name, name2);

printf("\nthe filename is %s", name);

if(scaleFlag == 1){
	Scale(name, scale);
}


return 0;


}

void scale(char fileName, double scale){

}














for (int i=1; i < argc; i++)
	{	
		printf("%c\n",argv[i][2]);
	}
*/
