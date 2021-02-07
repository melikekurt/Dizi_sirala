//Melike Kurt  Bu program diziyi minimumdan maximuma dogru siralar ve bastirir
#include<stdio.h>
int main(){
	int numbers[10]={5,4,8,1,6,2,3,7,9,0};//dizimizi karisik bir sekilde yazdik
	int i;
	for(i=0;i<10;i++){
		int imin = i;
		int j;
		for(j=i+1;j<10;j++){
			if(numbers[imin]<numbers[j])
			imin=j;
		}
		
		if(imin!=i){
			int temp = numbers[imin];
			numbers[imin]=numbers[i];
			numbers[i]=temp;
		}
		
	}
	
	int a;
	for(a=0;a<10;a++){
		printf("%d ",numbers[a]);
	}
	
	
	return 0;
}
