#include <stdio.h>
#include<string.h>
#define MAXCHAR 1000

int count_of_keyword(char *x[]){

int i=1,count=0;
while(i!=0){

        if(strcmp("e1",x[count])==0){
         break;
        }
         //printf("%d   %s\n",count,x[count]);
         count++;

    }
return count;
}

// 1)for java 2)for c 3) python

int content_based_categorization(char filename[]){
 FILE *fp;
    //char* filename = "C:\\Users\\Dell\\Desktop\\filetry\\c2.txt";
    char read[100];
    int countkeyJava=0,countkeyC=0;
    int totalword=1;

    char *JAVA[]={"abstract","assert","boolean","break","byte","case","catch","char","class","continue","default"
    ,"do","double","else","enum","extends","extends","final","finally","float","for","if","implements","import",
    "instance","of","int","interface","long","native","new","nullpackage","java.util.Scanner","reader.nextInt();","java.util.Scanner;","e1"};


    char *C[]={"auto","break","case","char","const","continue","default","do","double","else","enum"
    ,"extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static",
    "struct","switch","typedef","union","unsigned","void","volatile","while","#include","<stdio.h>","main()","e1"};

    int countjava=0,countC=0;

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
    }

    countkeyJava=count_of_keyword(JAVA);
    countkeyC=count_of_keyword(C);

    while (!feof(fp)) {

        fscanf(fp, "%s", read);

        for(int i=0;i<countkeyJava;i++){

         if(strcmpi(read,JAVA[i])==0){
           // printf("read:%s  java:%s\n",read,JAVA[i]);
            countjava++;
         }
        }

        for(int i=0;i<countkeyC;i++){

              if(strcmpi(read,C[i])==0){
           //printf("read:%s  java:%s\n",read,JAVA[i]);
            countC++;
         }
        }

      totalword++;

    }
    fclose(fp);


  float ratiojava=(countjava*100)/totalword;
  float ratioc=(countC*100)/totalword;

/*
0=other
1=c
2=java
3=python
*/
if(ratioc<5.0 && ratiojava<5.0 ){
    printf("other");
    return 0;
}

else if(ratioc == ratiojava){
    return 0;
}

else if(ratioc>ratiojava){
    return 1;
}

else{
    return 2;
}


//printf("ratio of java:%f \n ratio of c:%f ",ratiojava,ratioc);

}





