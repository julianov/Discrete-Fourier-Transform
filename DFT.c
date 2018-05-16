#include "dft.h"

void DFT (double *input, double *amplitudeOutput, double *phaseOutput)
{

int length = sizeof(input)/sizeof(double);

double realPart, imgPart;
double continous=0;

int k,j;

for(k=1;k<((length/2)+1);k++)
{
	realPart=0;
	imgPart=0;
	for(j=0;j<length;j++)
	{

		realPart += input[j] * cos (- 2 * PI * k* j * (1/lenght) ); 

		imgPart += input[j] * sin (- 2 * PI * k* j * (1/lenght) );
	}
	
	amplitudeOutput[k] = sqrt( pow(realPart,2)+pow(imgPart,2) );
	phaseOutput[k] = atan(imgPart/realPart);	
}

for(k=0;k<length;k++)
{
	continous+=input[k];
}
continous/=length; 

amplitudeOutput[0]=continous; 
phaseOutput[0]=0;

}

