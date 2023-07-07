#include<stdio.h>
struct students{
	int roll_num;
	char name[50];
	int chem_marks;
	int maths_marks;
	int phy_marks;
};
main(){   
   int i;
   float percent;
   struct students marks[5];
   
   	for(i=0;i<5;i++){
   		printf("Enter the details of student %d:\n",i+1);
   		
   		printf("Enter roll no:");
   		scanf("%d",&marks[i].roll_num);
   		
   		printf("Enter name:");
   		scanf("%s",&marks[i].name);
   		
   		printf("Enter chemistry marks:");
   		scanf("%d",&marks[i].chem_marks);
   		
   		printf("Enter maths marks:");
   		scanf("%d",&marks[i].maths_marks);
   		
   		printf("Enter physics marks:");
   		scanf("%d",&marks[i].phy_marks);
   		printf("\n-----------------------------------\n");
	}

	for(i=0;i<5;i++){
	    printf("\n\n%s(%d)\n",marks[i].name,marks[i].roll_num);
	    printf("chemistry=>%d\n",marks[i].chem_marks);
	    printf("maths=>%d\n",marks[i].maths_marks);
	    printf("physics=>%d\n",marks[i].phy_marks);
	    printf("Total=>%d/300\n",marks[i].chem_marks+marks[i].maths_marks+marks[i].phy_marks);
	    percent=marks[i].chem_marks+marks[i].maths_marks+marks[i].phy_marks;
	    printf("Percentage=>%f%\n",percent*100/300);
	    printf("\n-----------------------------------------\n");
	}
	return 0;
}
