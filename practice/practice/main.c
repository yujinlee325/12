//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/19.
//  Copyright © 2020 이유진. All rights reserved.
//

#include<stdio.h>
#include <stdlib.h>
#include<string.h>


int main(int argc, const char * argv[]) {
 
    int i ;
    FILE *fp;
    char str[100];
    
    
    fp = fopen("sample.txt", "w");
    if (fp == NULL)
    {
        return -1 ;
    }
    
    for(i=0;i<3;i++)
    {
      printf("Input a word : ") ;
      scanf("%s", str) ;
      fprintf(fp,"%s\n",  str);
    }
    
    fclose(fp);
    
    return 0;
}
