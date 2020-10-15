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
            if(strcmpi(ext,"7z")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"arj")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"deb")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"pkg")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"rar")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"rpm")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"tar.gz")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"z")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"zip")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                //Disc and media file extensions
                if(strcmpi(ext,"bin")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"dmg")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"iso")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"toast")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"vcd")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                //Data and database file extensions
                if(strcmpi(ext,"csv")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"dat")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"db") || (strcmpi(ext,"dbf")==0))
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"log")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }if(strcmpi(ext,"mdb")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"sav")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"sql")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"tar")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"xml")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                //E-mail file extensions
                if(strcmpi(ext,"email")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"eml")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"emlx")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"msg")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"oft")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"ost")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"pst")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"vcf")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                //Executable file extensions
                if(strcmpi(ext,"apk")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"bat")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"bin")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"cgi") || (strcmpi(ext,"pl")==0))
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"com")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"exe")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"gadget")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"jar")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"msi")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"wsf")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                //Font file extensions
                if(strcmpi(ext,"fnt")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"fon")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"otf")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
                if(strcmpi(ext,"ttf")==0)
                {
                   strcpy(final_cmd," ");
                   char *temp=getCmd(filename,ext,final_cmd);

                   system(temp);
                }
        }
        closedir(d);
    }
}
