#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GENRES 148

char ARTIST[200];
char *get_music_detail(char filex[])
{
    int i;

    char id3[128];
    char music_file_path[100];

    strcpy(music_file_path,filex);
    FILE *fp = fopen(music_file_path, "rb");

    if (!fp)
    {
        printf("Couldn't open file %s\n", music_file_path);
        exit(EXIT_FAILURE);
    }
    if (fseek(fp, -128, SEEK_END) || fread(id3, 128, 1, fp) != 1)
    {
        printf("Couldn't jump/read in file %s\n", music_file_path);
        exit(EXIT_FAILURE);
    }
    fclose(fp);


    if (strncmp(id3, "TAG", 3))
    {
        printf("File \"%s\" doesn't have an ID3 tag\n\n", music_file_path);
    }

    else
    {
        unsigned char *s = id3+3;
        char title[31];
        char artist[31];
        char album[31];
        char year[5];
        char comment[31];
        char genre[31];

	/* Id3 tag elements don't necessarily end in a '\0' if they
	   occupy the full 30 character space. Thus, we'll have to
	   nul-terminate all strings just to be sure. */

        strncpy(title, s, 30);
        title[30] = '\0';
        s += 30;

        strncpy(artist, s, 30);
        artist[30] = '\0';
        s += 30;

        strncpy(album, s, 30);
        album[30] = '\0';
        s += 30;

        strncpy(year, s, 4);
        year[4] = '\0';
        s += 4;

        strncpy(comment, s, 30);
        comment[30] = '\0';
        s += 30;

	/* The genre field is not encoded as a string, but just one byte
	   that indexes the decoding table. If memory is too expensive,
	   the whole field may be ignored or just shown as a number. */

    //printf("encoding %d \n",*s);
	

        strcpy(ARTIST,artist);
    }
    return ARTIST;
}


	


