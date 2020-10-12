//these are the required header files
#include <dirent.h>
#include<string.h>
#include<stdlib.h>
#include <stdio.h>
#include <errno.h>

void getNames(); //function that is the heart of the program
char * gettExtension(char *); //separate extension from file name

filepath="";//enter the file path

int main()
{
    getNames();
    return(0);

}


char * gettExtension(char *fullname){
    char* ext1;
    ext1 = strrchr(fullname,'.');
    return ext1+1;
}


void getNames(){
    DIR *d;
    struct dirent *dir;
    d = opendir(filepath);

    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            int dx;
            int size=strlen(dir->d_name);
            char filename[size+10];
            char *ext;
            strcpy(filename,dir->d_name);

          }
        closedir(d);
}
}
