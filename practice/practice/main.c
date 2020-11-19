//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/19.
//  Copyright © 2020 이유진. All rights reserved.
//

#include<stdio.h>
#include<string.h>


int main(int argc, const char * argv[]) {
 
    FILE *fp ;
    char str[100];
    char path[100];
    char lookup[100];
    
    printf("input file path: ");
    scanf("%s", path);
    printf("input search word: ");
    scanf("%s", lookup);
    

    fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("invaild path! (%s)\n", path);
        return -1;
    }
    
   while (fgets(str, 100, fp) != NULL){
       //strncmp
       if(strncmp(str, lookup, strlen(lookup)) == 0)
       {
           printf("Search failed!\n");
           fclose(fp);
           return 0 ;
       }
   }
    printf("Search failed!\n");
    fclose(fp);
    
    return 0 ;
    
}

