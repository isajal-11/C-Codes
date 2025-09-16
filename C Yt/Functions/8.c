//write a function to convert celsius into fahrenheit
#include<stdio.h>
float ConvertCelsiustoFah(float n);
int main(){
float Celsius=34.5;        //naming conflict here, i gave it the name  ConvertCelsius which was wrong as
                             //once you declare a variable with the same name as a function, the variable hides (overrides) the function name inside that scope.
ConvertCelsiustoFah(Celsius);

    return 0;
}

 float ConvertCelsiustoFah(float n){

    float TempFah=(n*9.0/5.0)+32;
    printf("The temperature in Fahrenheit is %f",TempFah );

    return TempFah;

}