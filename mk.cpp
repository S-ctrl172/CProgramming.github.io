#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>


void listFiles(const char *path);

int main()
{
    
    char path[100];
    printf("Enter path to list files: ");
    scanf("%s", path);

    listFiles(path);
    return 0;
}


void listFiles(const char *path)
{
    struct dirent *dp;
    DIR *dir = opendir(path);
    FILE *fptr;
    fptr=fopen("Assignment.txt","w");
    if (!dir) 
		return; 

    while ((dp = readdir(dir)) != NULL)
    {
        fprintf(fptr,"%s\n", dp->d_name); 
    }
    fclose(fptr);
    closedir(dir);
}
