#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char* argv[])
{
    DIR *mydir;
    struct dirent *myfile;
    struct stat mystat;
    if (argc < 2)argv[1]=".";
    mydir = opendir(argv[1]);
    while((myfile = readdir(mydir)) != NULL)
    {
        stat(myfile->d_name, &mystat);    
        printf(" %s ", myfile->d_name);
    }
    printf("\n");
    closedir(mydir);
}
