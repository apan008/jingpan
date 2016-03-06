#include <iostream>
using namespace std;
int main() 
{ 
	int a,b,c,d,e;        //定义几个整形变量
	for(int i=0;i<30;i++)  
	{   
		a=1+rand()%100;     //产生随机数
		b=1+rand()%100;  
		c=1+rand()%100; 
		d=1+rand()%4; 
		e=rand()%2;

		if(e==0)          //当e=0的时候，进行的是整数四则运算
		{
			switch (d)   
			{    
				case 1:     
					cout<<a<<"+"<<b<<"="<<endl;     
				break;    
				case 2:         
					cout<<a<<"-"<<b<<"="<<endl;    
				break;    
				case 3:         
					cout<<a<<"*"<<b<<"="<<endl;    
					break;   
				case 4:        
					cout<<a<<"/"<<b<<"="<<endl;    
					break; 
			}
		} 
		else(e==1);      //当e=1的时候，进行的是真分数参与的四则运算
		{
			if(c>a)
			
			switch (d)   
			{    
				case 1:     
					cout<<"("<<a<<"/"<<c<<")"<<"+"<<b<<"="<<endl;     
				break;    
				case 2:         
					cout<<"("<<a<<"/"<<c<<")"<<"-"<<b<<"="<<endl;    
				break;    
				case 3:         
					cout<<"("<<a<<"/"<<c<<")"<<"*"<<b<<"="<<endl;    
					break;   
				case 4:        
					cout<<"("<<a<<"/"<<c<<")"<<"/"<<b<<"="<<endl;    
					break; 
			}
		}
	} 
	return 0; 
} 