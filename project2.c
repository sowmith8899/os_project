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
		int p,q;
		for(p=0;p<4;p++)
		{
			for(q=0;q<4-1-p;q++)
			{
				if(priority[q]<priority[q+1] && process_arrived[q]!=0 && process_arrived[q+1]!=0)
				{
					double t1=priority[q];
					priority[q]=priority[q+1];
					priority[q+1]=t1;
					int t2=process_arrived[q];
					process_arrived[q]=process_arrived[q+1];
					process_arrived[q+1]=t2;
				}
				else if(priority[q]==priority[q+1]  && process_arrived[q]!=0 && process_arrived[q+1]!=0)
				{
					if(burst[q]<burst[q+1])
					{
						int t=process_arrived[q];
						process_arrived[q]=process_arrived[q+1];
						process_arrived[q+1]=t;
					}
				}
			}
		}
