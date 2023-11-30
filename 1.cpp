#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	
	double x;
	double y;

	while (true)
	{
		cout << " X =" ;
		cin >> x ;

    if (x<-4)
        {y=0; }
    else if (x>=-4 && x<=-2)
        {y=x+3 ; } 
    else if (x>-2 && x<=4)
        {y=(x * -1)/2 ; }
    else if (x>4 && x<=6)
        { y=-2 ; }
    else if (x>6 && x<=10)
        { y=sqrt(-(x-10)*(x-6))-2 ; }
    else if (x>10)
        { y=0;}
		cout << " y = " << y << endl;
	}
	return 0;
}