#include<stdlib.h>
#include<stdio.h>

int main(){
	
	FILE *career_datas ;
	career_datas = fopen("career_datas.txt","a+");
	if (career_datas == NULL) {
		printf("There is no such file.");
}
		else printf("The file career_datas.txt exists.\n");
		
		
	char league_name[4000];
    int a,b,c,d,e,f,g;
    printf ("Input the league name: ") ;
    gets(league_name);
	printf("Input the number of matches played: ");
    scanf("%d",&a);
    printf("Input the number of Goals: ");
    scanf("%d",&b);
   	printf("Input the number of Assists: ");
    scanf("%d",&c);
    if ((a>1) && (b>2) ){
	
    printf("Input the number of  hat-trick with 3 goals: ");
    scanf("%d",&d);
    printf("Input the number of  hat-trick with 4 goals: ");
    scanf("%d",&e);
    printf("Input the number of  hat-trick with 5 goals: ");
    scanf("%d",&f);
    printf("Input the number of  hat-trick with 6 goals: ");
    scanf("%d",&g);
}
	fprintf (career_datas,"%s \n",league_name);
    fprintf(career_datas,"Matches: ");
    fprintf (career_datas,"%d",a);
    fprintf(career_datas,"\nGoals: ");
    fprintf (career_datas,"%d",b);
    fprintf(career_datas,"\nAssists: ");
    fprintf (career_datas,"%d",c);
if ((a>1) && (b>2)) {     
    fprintf(career_datas,"\nHat Trick:");
    fprintf (career_datas,"%d",d+e+f+g);
    fprintf(career_datas,"\nHat Trick Types by number of goals:");
    fprintf(career_datas,"\n3':");
    fprintf (career_datas,"%d",d); 
    fprintf(career_datas,"\n4':");
    fprintf (career_datas,"%d",e);
    fprintf(career_datas,"\n5':");
    fprintf (career_datas,"%d",f);
    fprintf(career_datas,"\n6':");
    fprintf (career_datas,"%d",g);
}
else if ((a=1) && (b>2)){
fprintf(career_datas,"\nHat Trick:");
fprintf (career_datas,"%d",1);
fprintf(career_datas,"\n%d':",b);
fprintf (career_datas,"%d",1); 


}
	fprintf(career_datas,"\n");   
     
    fclose(career_datas);
	
}
