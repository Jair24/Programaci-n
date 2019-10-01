#include<iostream>

using namespace std;

void tabladeprimos(int primo[],int n);
void Multiplos(int primo[],int n);
void show(int primo[],int n);

int main()
{
	int primo[1000];
	
	tabladeprimos(primo,1000);
	
	Multiplos(primo,1000);
	
	show(primo,1000);
}
void tabladeprimos(int primo[],int n)
{
	for(int i=0;i<n;i++)
	{
  	    primo[i]=true;
	}
}
void Multiplos(int primo[],int n)
{
	for(int i=2;i<n;i++){
	   if(primo[i]==1)
	      for(int j=2;i*j<n;j++){
		primo[i*j]=false;
	      }
	}
}
void show(int primo[],int n)
{
	for(int i=2;i<n;i++)
	{
   	   if(primo[i])
	       cout<<i<<" ";
	}
}  
