#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>


string ari(string x)
{
   int c=0,w=0,s=0;
   int score=0;
   for(int i=0;i<strlen(x);i++)
   {
      if(isalnum(x[i]))
      { 
        c++;
      }  
   
      if(isspace(x[i])
      {
        w++;
      }
      if(x[i]=='.'||x[i]=='!'||x[i]=='?')
      {
        s++;
       }
   }

    score=((4.71*(c/w))+(0.5*(w/s))-21.43)
    
    
    switch(score)
    {
    case 1: return "Kindergarten";
             break;
    case 2: return "First/Second Grade";
             break;
    case 3: return"Thried Grade";
            break;
    case 4: return"Fourth Grade";
    	    break;
    case 5:return="Fifth Grade";
           break;
    case 6:return="Sixth Grade";
    	    break;
    case 7: return="Seventh Grade";
    	    break;
    case 8: return="Eighth Grade";
    	  break;
    case 9:return="Ninth Grade";
    	    break;
    case 10: return="Tenth Grade";
    	     break;
    case 11: return="Eleventh Grade";
    	     break;
    case 12: return="Twelfth Grade";
             break;
    case 13: return="College Student";
             break;
    case 14: return="Professor"
    		break;
    		
   };
   
   return NULL;
}
