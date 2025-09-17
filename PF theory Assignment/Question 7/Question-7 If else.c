#include <stdio.h>
int main(){
int Value;
printf("Enter a value (1-7): ");
scanf("%d",&Value);
if(Value == 1){
printf("You entered Monday");
}else if (Value == 2){
printf("You entered Tuesday");
}else if(Value == 3){
printf("You entered Wednesday");
}else if(Value == 4){
printf("You entered Thursday");
}else if (Value == 5){
printf("You entered Friday");
}else if (Value==6){
printf("You entered Saturday");
}else if (Value == 7){
printf("You entered Sunday");
}else {
printf("You entered a value out of range");
}
return 0;
}