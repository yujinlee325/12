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
    //char c;
    char str[100];

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
    {
        return -1;
    }
    
   // while ((c=fgetc(fp))!= EOF){
    while (fgets(str, 100, fp) != NULL){
       // printf("%c", c);
        printf("%s", str) ;
    }
        
    
    fclose(fp);
    
    return 0;
}
