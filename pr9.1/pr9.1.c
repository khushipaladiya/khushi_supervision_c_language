#include<stdio.h>

int main(){
	FILE *p;
	FILE *ptr;
	int i;
	
	p=fopen("even_file.txt","w");
    ptr=fopen("odd_file.txt","w");
	
	if(p && ptr == NULL){
		printf("File is unable to open..");
	}else{
		printf("File was succefully opened..\n");
    }
	for(i=50;i<=70;i++){
		if(i%2==0){
		   fprintf(p,"Even Numbers:\n%d\n",i);
		}else{
		    fprintf(ptr,"Odd Number:\n%d\n",i);
		}
	}

return 0;
}
