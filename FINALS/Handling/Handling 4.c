# include <stdio.h>
int main(void)
{
	FILE *cfPtr;
	 char ID[10];
	char name[ 30];
	double avgMarks;
	cfPtr = fopen("marks.txt", "r");
	if ( cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	for(int i=0;i<3;i++){
		fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
		printf ("%s\t%s\t%.2lf\n", ID, name, avgMarks);
	}

	fclose(cfPtr);
	return 0;
}
