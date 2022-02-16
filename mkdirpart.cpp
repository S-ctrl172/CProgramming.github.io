#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int check,check1,check2,check3,check4,check5,check6,check7;
	char* dirnameX = "prog";
	
	char* dirname = "prog/X";
	char* dirname1 = "prog/X/XX1";
	char* dirname2 = "prog/X/XX1/XXX1";
	char* dirname3 = "prog/X/XX1/XXX2";
	char* dirname4 = "prog/X/XX2";
	
	
	char* dirname_1 = "prog/Y";
	char* dirname_2 = "prog/Z";
	
	
	check7 = mkdir(dirnameX); // because all file in one folder
	
	FILE * fPtr;
    fPtr = fopen("prog/file12.txt", "w");
	 if(fPtr == NULL)
    {
      printf("Unable to create file.\n");
      exit(EXIT_FAILURE);
    }
    
     fPtr = fopen("prog/file23.txt", "w");
     if(fPtr == NULL)
    {
      printf("Unable to create file.\n");
      exit(EXIT_FAILURE);
    }
	
	
	check = mkdir(dirname);
	check1 = mkdir(dirname1);
	check2 = mkdir(dirname2);
	check3 = mkdir(dirname3);
	check4 = mkdir(dirname4);
	
	check5 = mkdir(dirname_1);
	check6 = mkdir(dirname_2);
			

						
			
///1st file			
			
 //FILE * fPtr;
 fPtr = fopen("prog/X/XX1/XXX1/file1.txt", "w");
	if(fPtr == NULL)
    {
      printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
fclose(fPtr);

///2nd file
	 fPtr = fopen("prog/X/XX1/XXX1/file2.txt", "w");
	 if(fPtr == NULL)
    {
       printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
	fclose(fPtr);
	
///3rd file
	fPtr = fopen("prog/X/XX1/XXX1/file3.txt", "w");
	 if(fPtr == NULL)
    {
       printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
	fclose(fPtr);
		
		
	if(!check2)
		printf("Directory created\n");
		else{
		printf("Unable to create directory\n");
		exit(1);
		}
		getch();
		system("dir");
		getch();
		
}
