#include"bootstrap.h"
#include<string.h>
#include<math.h>
int main()
{
	char bar[102]=" ";
	char s01[]="|/_\\";
	int	i=0;
	while(i<=100)
	{
		printf("[%-100s][%-3d%%][%c]\r",bar,i,s01[i%4]);
		i++;
		fflush(stdout);
		bar[i] ='#';
		usleep(10000);
	}
	return 0;
}



