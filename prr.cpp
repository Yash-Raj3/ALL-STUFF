#include <stdio.h>

int main(){
  char colour[100];
  printf("Enter The Colour Of String : ");
  scanf("%s",&colour);

// find lengthof the colour
int n = 0 ;
while (colour[n] != '\0'){
   n++;
}

// check for moves
int yasirmoves = 0 ;
int binishmoves = 0 ;
for (int i = 1; i < n-1 ; i++){
    if (colour[i-1] == 'y' && colour[i] == 'y' && colour[i+1] == 'y'){ 
       yasirmoves++ ;
    }
    
    if (colour[i - 1] == 'b' && colour[i] == 'b' && colour[i + 1] == 'b') {
    binishmoves++;
    }
}

    if (yasirmoves > binishmoves) {
        printf("Yasir\n");
    } else {
        printf("Binish\n");
    }

    return 0;
}
