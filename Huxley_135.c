#include <stdio.h>
#include <math.h>

// 135 - Coast Guard
// https://thehuxley.com/problem/135

void entrada( )
{
	float D, VF, VG, tF, tG, DG;
	scanf("%f %f %f", &D, &VF, &VG);

	if(D != -1 && VF != -1 && VG != -1 )
	{
    
	DG = sqrt(pow(12,2) + pow(D,2));
    tG = DG / VG;
    tF = 12 / VF;

    printf("%s", tG <= tF ? "S\n" : "N\n");
    entrada();
	}
    
	else return;
}

int main()
{
  entrada();
  return(0);
}
