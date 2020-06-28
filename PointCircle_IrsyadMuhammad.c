/*Program		: PointCircle.c
Deskripsi		: Memeriksa kedudukan sebuah point terhadap suatu lingkaran
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/23 April 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<math.h>

typedef struct {
        int x;
        int y;
} Point;

int main(){
	
	//declare
	Point center, test;
	int r;
	
	//assigning point and radius
	scanf("%d %d", &center.x, &center.y);
	scanf("%d", &r);
	scanf("%d %d",&test.x, &test.y);
	
	//formula : (x-a)^2+(y-b)^ < r^2 point is inside the circle
	//formula : (x-a)^2+(y-b)^ > r^2 point is outside the circle
	//formula : (x-a)^2+(y-b)^ = r^2 point is on the circle
	
	if(center.x == test.x && center.y == test.y){
		printf("tepat pada titik pusat");
	}
	else if((pow((test.x-center.x),2)+ pow((test.y-center.y),2)) == pow(r,2)){
		printf("tepat pada lingkaran");
	}
	else if((pow((test.x-center.x),2)+ pow((test.y-center.y),2)) < pow(r,2)){
		printf("di dalam lingkaran");
	}
	else if((pow((test.x-center.x),2)+ pow((test.y-center.y),2)) > pow(r,2)){
		printf("di luar lingkaran");
	}
		
	return 0;
}
