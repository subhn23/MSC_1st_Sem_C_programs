#include <stdio.h>

    int main()
    {

    int ln,x;

    printf("Enter numbar of lines: ");
    scanf("%d",&ln);
    printf("\n");

    char string[ln][10];

    for( x=0;x<ln;x++){
        printf("Enter line no - %d ",(x+1));
        scanf("%s",&string[x][0]);
    }


    for(x=0;x<ln;x++)
    {           
        printf("Line No %d - %s \n",(x+1),string[x]);   
    }
    
    return 0;

}   
