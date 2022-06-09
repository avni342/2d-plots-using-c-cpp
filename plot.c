#include "pbPlots.h"

#include<stdio.h>

#include "supportLib.h"

int main()

{

 

 int n1=8;

 int n2=8;

 double x[100];



 int i,j;

 printf("ENTER x coordinates\n");

 

 for(i=0;i<n1;i++)

 {   

   

  scanf("%lf",&x[i]);

 }

 





double y[100];

printf("\nENTER y coordinates\n");

 

 for(i=0;i<n1;i++)

 {   

   

  scanf("%lf",&y[i]);

 }

 





RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();

DrawScatterPlot(imageRef,000,400,x,8,y,8);

size_t length;

double *pngData= ConvertToPNG(&length ,imageRef->image);

WriteToFile(pngData,length,"plot.png");

return 0;}





