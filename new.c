#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float sine(float x){
	return (sin (x*PI/180));
}
float cosine(float x){
	return (cos (x*PI/180));
}
float tangent(float x){
	return (tan(x));
}
float sineh(float x){
	return (sinh(x));
}
float cosineh(float x){
	return (sinh(x));
}
float tangenth(float x){
	return (sinh(x));
}
float logten(float x){
	return (log10(x));
}
float squareroot(float x){
	return (sqrt(x));
}
float exponent(float x){
	return(exp(x));
}
float power(float x, float y){
	return (pow(x,y));
}
 int main(){
    int n;
    float x,y,answer;
    printf("What do you want to do?\n");
    printf("1.sin \n 2.cos\n3.tan\n 4.sinh\n5.cosh\n6.tanh\n7.1og10\n8.square root.\n9.exponent\n10.power\n");
    scanf ("%d",&n);
    if (n<9 && n>0){
    	printf("\n What is x? ");
    	scanf("%f",&x);
    	switch (n){
        	case 1: answer = sine(x);       
			break;
        	case 2: answer = cosine(x);     
			break;
        	case 3: answer = tangent(x);    
			break;
        	case 4: answer = sineh(x);      
			break;
        	case 5: answer = cosineh(x);    
			break;
        	case 6: answer = tangenth(x);   
			break;
        	case 7: answer = logten(x);     
			break;
        	case 8: answer = squareroot(x); 
			break;
        	case 9: answer = exponent(x);   
			break;
		}
    }
	if (n==10){
	    printf("What is x and y?\n");
	    scanf("%f%f",&x,&y);
	    answer = power(x,y);
	}      
  if (n>0 && n<11)
    	printf("%f\n",answer);
    else
    	printf("Wrong input.\n");
    return 0;
}
