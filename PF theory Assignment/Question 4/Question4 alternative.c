#include<stdio.h>
int main(){
int card1,card2,card3,card4,card5,rank1,rank2;
int count1=0,count2=0;
printf("Enter card 1:");
scanf("%d",&card1);
printf("Enter card 2:");
scanf("%d",&card2);
printf("Enter card 3:");
scanf("%d",&card3);
printf("Enter card 4:");
scanf("%d",&card4);
printf("Enter card 5 :");
scanf("%d",&card5);
rank1 = card1;
count1 = 1;
if(card2== rank1){
    count1 +=1;
}else  {
    rank2 = card2;
    count2 = 1;
}if(card3 == rank1){
   count1 += 1;
}else if (card3 == rank2){
    count2 +=1;
}

else if (card3 != rank1 && count2==0){
	rank2 = card3;
    count2 = 1;
}
if (card4 == rank1){
    count1 += 1;
}else if (card4 == rank2){
	count2 +=1;
}
else if (card4 != rank1 && count2== 0){
    rank2 = card4;
    count2 = 1;
}if (card5 == rank1){
    count1 += 1;
}else if(card5 == rank2){
    count2 += 1;}else{
    	printf("Not full");
    	return 0;
	}

if(count1 == 3 && count2 == 2 || count1 == 2 && count2 == 3){
    printf("House is full");
    
}else{
    printf("Not full");
}
return 0;
}
