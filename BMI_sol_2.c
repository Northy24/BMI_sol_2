#include <stdio.h>

float calBMI(float w, float h){
    float bmi = w/(h*h);
    return bmi;
}

int main(){
    float weight;
    float height;
    printf("Enter your Weight(Kilograms) : ");
    scanf("%f",&weight);
    printf("Enter your Height(Centimeters) : ");
    scanf("%f",&height);
    height = height/100;
    float BMI = calBMI(weight,height);
    printf("Your BMI is %.3f\n",BMI);
    if(BMI < 18.5){
        printf("You are  substandard");
    }else if(BMI > 18.5 && BMI < 24.9){
        printf("You are normal");
    }else if(BMI >= 30){
        printf("Your are higher than normal");
    }
    return 0;
}
