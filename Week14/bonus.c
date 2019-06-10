#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    float farenheit;
    float celcius;
    FILE *inFile;
    inFile = fopen("f.txt","r");
    FILE *outFile;
    outFile = fopen("c.txt","w");
    printf("Converting from F to C ");
    for(int i = 0; i < 3; i++)
    {
        Sleep(200);
        printf(". ");
    }
    while (fscanf(inFile,"%f",&farenheit)!= EOF)
    {
        celcius = ((farenheit - 32)*5)/9;
        printf("\n%.2f",celcius);
        fprintf(outFile,"%.2f\n",celcius);
    }
    fclose(inFile);
    fclose(outFile);
    return 0;
}
