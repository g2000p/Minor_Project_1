//the required header files
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>


void getNames(char []);     //gets the name of new folder that will be created
char * getExtension(char *);       //separates extension from file name

filepath="";        //enter the file path

int main()
{
    getNames();
    return(0);

}

char * getExtension(char *filename)       //separates extension from file name
{
    char* ext1;
    ext1 = strrchr(filename,'.');
    return ext1+1;
}

void getNames()     //gets the name of new folder that will be created
{
    DIR *d;
    struct dirent *dir;
    d = opendir(filepath);
    char final_cmd[1000]="";
    
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
        if(strcmpi(filename,".")==0||strcmpi(filename,"..")==0)continue;

        if (searchFordot(filename)==1)
        {
            ext=getExtension(filename);
            dx=directory_exist(filepath,ext);
            printf("\n%d %s\n",dx,filename);
        }
        else
        {
            ext=NULL;
            printf("\n%s\n",filename);
            continue;
        }
        chdir(filepath);
        if(!dx)
        {
            if(strcmpi(ext,"ipynb")==0)
                {
                    strcpy(final_cmd," ");
                    char *temp=getCmd(filename,ext,final_cmd);
                    system(temp);
                }
            //Audio file formats extensions
            if(strcmpi(ext,"aif")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"cda")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"mid") || strcmpi(ext,"midi")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"mp3")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"mpa")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"ogg")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"wav")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"wma")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            if(strcmpi(ext,"wpl")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
            //Compressed file extensions
        }
        closedir(d);
    }
}
