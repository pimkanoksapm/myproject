for(Last=cnt-1; Last>=0; Last--) 
{
   for(j=0; j<=Last-1; j++) 
   { 
       if(Num[j] > Num[j+1]) 
	   { 
		   Temp = Num[j]; 
		   Num[j] = Num[j+1]; 
		   Num[j+1] = Temp; 
	   }
	}
}
