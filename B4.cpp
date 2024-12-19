#include <stdio.h>

int main(){
	int a[3][3] = {
		{1,3,5},
		{2,4,6},
		{10,20,30}
	};
	int max=a[1][1];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j] > max)	
			max = a[i][j];
		}
	}
	printf("So lon nhat trong mang la: %d",max);
	return 0;
}
