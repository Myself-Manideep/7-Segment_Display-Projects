
#include "System_Handler.h"
#include "..\..\Lib\Delay\Delay.h"

void main()
{
	unsigned char port[] = {  0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
	unsigned int count=0;
	
	while(1)
	{
		
		
					if(SW1 == 0)
					{
						Delay_1ms(10);
						
						if(SW1 == 0)
						{
								if(count < 9)
								{
										count++;
										Digit0 = 1;
										Digit_port = port[count];
										while(SW1 == 0);
						  	}
						}
					}

					
					if(SW2 == 0)
					{
						Delay_1ms(10);
						Digit0 = 1;
						
						if(SW2 == 0)
						{
							if(count <= 0)
							{
								count = 9;
							}
							else
							{
								count--;
								
								Digit_port = port[count];
								while(SW2 == 0);
							}
						}
					}
		
	}
}
				
