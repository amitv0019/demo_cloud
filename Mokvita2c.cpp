
#include <bits/stdc++.h>

using namespace std;
int freq[10]={0};
int checkMonth(int maxMonth)
{
    int a=maxMonth/10;
    int b=maxMonth%10;
    if(maxMonth==0)
        return -1;
    if(maxMonth>9)
    {
    if(freq[b]!=0 &&  freq[a]!=0)
    {
        freq[b]--;
        freq[a]--;
        return maxMonth;
    }
    }
    if(maxMonth<10)
    {
        if(freq[b]!=0)
        {
            freq[b]--;
            return maxMonth;
        }
    }
    else
        return checkMonth(maxMonth-1);
}  
    
    
    
int checkDate(int maxDate)
{
    int a=maxDate/10;
    int b=maxDate%10;
   
   if(maxDate==0)
        return -1;
    if(maxDate>9)
    {

      if(freq[b]!=0 && freq[a]!=0)
    {
        freq[b]--;
        freq[a]--;
        return maxDate;
    }

}
 if(maxDate<10)
{

	if(freq[b]!=0)
	{
		freq[b]--;
		return maxDate;
	}

}
    else
        return checkDate(maxDate-1);
} 
    
    
    
    
    
int checkHour(int maxHour)
{
    int a=maxHour/10;
    int b=maxHour%10;
    if(maxHour==-1)
        return -1;
    if(maxHour>9)
    {

      if(freq[b]!=0 && freq[a]!=0)
    {
        freq[b]--;
        freq[a]--;
        return maxHour;
    }

}
if(maxHour<10)
{
	if(freq[b]!=0)
	{
		freq[b]--;
		return maxHour;
	}

  }  else
        return checkHour(maxHour-1);

}
    
int checkMin(int maxMin)
{
    int a=maxMin/10;
    int b=maxMin%10;
    if(maxMin==-1)
        return -1;
        
    if(maxMin>9)
    {
	
      if(freq[b]!=0 && freq[a]!=0)
    {
        freq[b]--;
        freq[a]--;
        return maxMin;
    }
}
if(maxMin<10)
{
	if(freq[b]!=0)
	{
		freq[b]--;
		return maxMin;
	}
}
    else
        return checkMin(maxMin-1);
} 


int main()
{
	
    int i;
    int a[12]={0};
    
    for(i=0;i<12;i++)
    {
        cin>>a[i];
      char ch;
      if(i!=11)
        cin>>ch;
        freq[a[i]]++;
    }
        
    int maxMonth=12;
    int maxDate=31;
    int maxTime=23;
    int maxMin=59;

     
   int Month=checkMonth(maxMonth);
    int Date=checkDate(maxDate);
    int hour=checkHour(maxTime);
    int min=checkMin(maxMin);
      
    
   if(Month==-1|| Date==-1|| hour==-1 || min==-1)
        cout<<"0";
    
    else
    {
    	if(Month<10)
    	cout<<0<<Month<<"/";
    	else
    	cout<<Month<<"/";
    	
    	if(Date<10)
    	cout<<0<<Date<<" ";
    	else
    	cout<<Date<<" ";
    	
    	if(hour<10)
    	cout<<0<<hour<<":";
    	else
    	cout<<hour<<":";
    	
    	if(min<10)
    	cout<<0<<min;
    	else
    	cout<<min;
    }
	
       
        
 return 0;
}  
