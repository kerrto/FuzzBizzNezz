//
//  main.c
//  FuzzBizzNezz1
//
//  Created by Kerry Toonen on 2015-11-05.
//  Copyright © 2015 Kerrto. All rights reserved.
//


#include <stdio.h>
int main ()
{
    int a;
    printf ("Please input an integer value for Nezz");
    printf ("\n");
    scanf("%d", &a);
    printf("Nezz is: %d", a);
    

    
    int b;
    printf ("\n");
    printf("Please input an integer value for Fuzz");
    printf ("\n");
    scanf("%d", &b);
    printf("Fuzz is: %d",b);
    printf ("\n");

    
    int c;
    printf("Please input an integer value for Bizz");
    printf ("\n");
    scanf("%d", &c);
    printf("Bizz is: %d", c);
    printf ("\n");

    
    //Making the output up to Nezz
    int i;
    for (i=1 ; i<=a ; i++)
        
        //Making the output for both Fuzz and Bizz print both**********************
        
        if (i%b==0 && i%c==0)
            
            printf("FuzzBizz\n");
    
    //Making multiples of Fuzz print Fuzz
    
        else if (i%b==0)
            
            printf("Fuzz\n");
    
    //Making multiples of Bizz print Bizz
    
        else if (i%c==0)
            
            printf ("Bizz\n");
    
        else
            
            printf ("%d\n",i);
    
    return 0;
    
}
//Finished