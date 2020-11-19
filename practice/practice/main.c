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
 
    
    char src[] = "The worst things to eat before you sleep";
    char dst[100] ;
    
    strcpy(dst, src) ;
    char str[30] = "happy C programming" ;
    
    
    printf("copied string : %s", dst);
    
    printf("length of \"%s\" : %i\n", str, strlen(str) );
    
  
    return 0;
}
