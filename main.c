#include  <stdio.h>

int sensorValues[] = {0,0,0,0,0}; 
int index=0;
double averages[100];
int filter();

int main(void)
{ 
	filter(3);
	filter(4);
	filter(5);
    filter(3);
	filter(4);
	filter(7);
    filter(3);
	filter(3);
	filter(5);
    filter(8);
	filter(4);
	filter(5);
    filter(2);
	filter(35);
    filter(5);
	filter(6);
	filter(3);
	printf("The averages: ");
	for (int i=0; i<index ; i++){
		printf("\n %.2f", averages[i]);		
	}
	printf("\n");
}

int filter (int sensorValue) {
      sensorValues[index%5]=sensorValue;
		float sum=0;
		for (int i = 0; i < 4; i++ ) {
			sum+=sensorValues[i];
		}
	 averages[index]=(float)sum/5;
	 index++;
	 return 0;
}
