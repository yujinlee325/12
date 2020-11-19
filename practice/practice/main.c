//
//  main.c
//  practice
//
//  Created by 이유진 on 2020/11/19.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
 
    int i = 0 ;
    char str[4];
    
    str[0] = 'a' ;
    str[1] = 'b' ;
    str[2] = 'c' ;
    str[3] = '\0';
    
    printf("%s\n", str);
    
    while ( str[i] != '\0' ) {
        printf("%c", str[i] );
        i++ ;
    }
    
    return 0;
}
