main()
{
	int timer=0,i=0,bt=0;
	int process[4]={1,2,3,4};
	int arrival[4]={0,2,4,5};
	int burst_time[4]={7,4,1,4};
	int burst[4]={7,4,1,4};
	int process_arrived[4]={1};
	double priority[4]={0};
	int complete[4]={0};
	while(1)
	{
		int k;
		for(k=0;k<4;k++)
		{
			if(timer>=arrival[k] && burst[k]!=(-1)) 
			{
				priority[k]=1+((timer-arrival[k])/burst[k]);
			}
		}
    }
