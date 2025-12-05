#include <stdio.h>
#include <stdlib.h>

int menuScreen(){
	int choice;
	system("cls");
	printf("1) PHYSICAL QUANTITES,\n");
	printf("2) CURRENCY,\n");
	printf("3) EXIT PROGRAM.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	return choice;
}

int phyQtyScreen(){
	int choice;
	system("cls");
	printf("============PHYSICAL QUANTITIES============\n\n");
	printf("1) LENGTH,\n");
	printf("2) TIME,\n");
	printf("3) SPEED,\n");
	printf("4) MASS,\n");
	printf("5) TEMPERATURE,\n");
	printf("6) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE:");
	scanf("%d",&choice);
	return choice;
}

void currencyScreen(){
	int choice;
	float value, pkr, usd = 282.62, gbp = 369.09, eur = 327.43, aed = 76.41;
	system("cls");
	printf("==========CURRENCIES==========\n\n");
	printf("SELECT A CURRENCY TO CONVERT FROM:\n");
	printf("1) PKR,\n");
	printf("2) USD,\n");
	printf("3) GBP,\n");
	printf("4) EUR,\n");
	printf("5) AED,\n");
	printf("6) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 6){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				pkr = value;
				break;
			case 2:
				pkr = value * usd;
				break;
			case 3:
				pkr = value * gbp;
				break;
			case 4:
				pkr = value * eur;
				break;
			case 5:
				pkr = value * aed;
				break;
		}
		printf("RESULTS AS OF NOV-19, 2025):\n");
		printf("PKR %.2f \tUSD %.2f \tGBP %.2f \nEUR %.2f \tAED %.2f\n",pkr,pkr/usd,pkr/gbp,pkr/eur,pkr/aed);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		currencyScreen();
	}
}

void lenScreen(){
	int choice;
	float value, mVal, km = 1000, cm = 0.01, in = 0.0254, ft = 0.3048, mi = 1609.344, yd = 0.9144;
	system("cls");
	printf("============LENGTH============\n\n");
	printf("SELECT A UNIT TO CONVERT FROM:\n");
	printf("1) METERS (m),\n");
	printf("2) KILOMETERS (Km),\n");
	printf("3) CENTIMETERS (cm),\n");
	printf("4) MILES (mi),\n");
	printf("5) YARDS (yd),\n");
	printf("6) FEET (ft),\n");
	printf("7) INCHES (in),\n");
	printf("8) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 8){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				mVal = value;
				break;
			case 2:
				mVal = value * km;
				break;
			case 3:
				mVal = value * cm;
				break;
			case 4:
				mVal = value * mi;
				break;
			case 5:
				mVal = value * yd;
				break;
			case 6:
				mVal = value * ft;
				break;
			case 7:
				mVal = value * in;
				break;
		}
		printf("RESULTS:\n");
		printf("%.4f m \t%.4f km \t%.4f cm \t%.4f mi \n%.4f yd \t%.4f ft \t%.4f in\n",mVal,mVal/km,mVal/cm,mVal/mi,mVal/yd,mVal/ft,mVal/in);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		lenScreen();
	}
}

void timeScreen(){
	int choice;
	float value, sVal, ms = 0.001, mt = 60, hr = 3600, d = 86400, yr = 31556952;
	system("cls");
	printf("============TIME============\n\n");
	printf("SELECT A UNIT TO CONVERT FROM:\n");
	printf("1) MILISECONDS (ms),\n");
	printf("2) SECONDS (s),\n");
	printf("3) MINUTES (mt),\n");
	printf("4) HOURS (hr),\n");
	printf("5) DAYS (d),\n");
	printf("6) YEARS (yr),\n");
	printf("7) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 7){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				sVal = value * ms;
				break;
			case 2:
				sVal = value;
				break;
			case 3:
				sVal = value * mt;
				break;
			case 4:
				sVal = value * hr;
				break;
			case 5:
				sVal = value * d;
				break;
			case 6:
				sVal = value * yr;
				break;
		}
		printf("RESULTS:\n");
		printf("%.3f ms \t%.3f s \t%.3f mt \n%.3f hr \t%.3f d \t%.f yr\n",sVal/ms,sVal,sVal/mt,sVal/hr,sVal/d,sVal/yr);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		timeScreen();
	}
}

void speedScreen(){
	int choice;
	float value, msVal, kmh = (1/3.6), mph = 0.44704, fts = 0.3048, kn = 0.514444;
	system("cls");
	printf("============SPEED============\n\n");
	printf("SELECT A UNIT TO CONVERT FROM:\n");
	printf("1) METERS PER SECOND (m/s),\n");
	printf("2) KILOMETERS PER HOUR (Km/h),\n");
	printf("3) MILES PER HOUR (mi/h),\n");
	printf("4) FEET PER SECOND (ft/s),\n");
	printf("5) KNOTS (kn),\n");
	printf("6) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 6){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				msVal = value;
				break;
			case 2:
				msVal = value * kmh;
				break;
			case 3:
				msVal = value * mph;
				break;
			case 4:
				msVal = value * fts;
				break;
			case 5:
				msVal = value * kn;
				break;
		}
		printf("RESULTS:\n");
		printf("%.3f m/s \t%.3f km/h \t%.3f mi/h \n%.3f ft/s \t%.3f kn\n",msVal,msVal/kmh,msVal/mph,msVal/fts,msVal/kn);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		speedScreen();
	}
}

void massScreen(){
	int choice;
	float value, kgVal, g = 0.001, lbs = 0.45359237, oz = 0.0283495231, t = 1000;
	system("cls");
	printf("============MASS============\n\n");
	printf("SELECT A UNIT TO CONVERT FROM:\n");
	printf("1) GRAMS (g),\n");
	printf("2) KILOGRAMS (Kg),\n");
	printf("3) POUNDS (lbs),\n");
	printf("4) OUNCES (oz),\n");
	printf("5) TONNES (t),\n");
	printf("6) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 6){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				kgVal = value * g;
				break;
			case 2:
				kgVal = value;
				break;
			case 3:
				kgVal = value * lbs;
				break;
			case 4:
				kgVal = value * oz;
				break;
			case 5:
				kgVal = value * t;
				break;
		}
		printf("RESULTS:\n");
		printf("%.3f g \t%.3f kg \t%.3f lbs \n%.3f oz \t%.3f t\n",kgVal/g,kgVal,kgVal/lbs,kgVal/oz,kgVal/t);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		massScreen();
	}
}

void temperatureScreen(){
	int choice;
	float value, C_Val;
	system("cls");
	printf("============MASS============\n\n");
	printf("SELECT A UNIT TO CONVERT FROM:\n");
	printf("1) KELVIN (K),\n");
	printf("2) DEGREES CELSIUS (C),\n");
	printf("3) DEGREES FAHRENHEIT (F),\n");
	printf("4) BACK TO MENU.\n\n");
	printf("ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	if (choice == 4){
		return;
	} else{
		system("cls");
		printf("ENTER VALUE TO CONVERT: ");
		scanf("%f",&value);
		switch(choice){
			case 1:
				C_Val = value - 273.15;
				break;
			case 2:
				C_Val = value;
				break;
			case 3:
				C_Val = (value - 32.0) * (5.0 / 9.0);
				break;
		}
		printf("RESULTS:\n");
		printf("%.2f K \t%.2f C \t%.2f F\n",C_Val+273.15,C_Val,(C_Val * (9.0 / 5.0)) + 32.0);
		printf("PRESS ENTER TO CONTINUE...");
		getchar();
		getchar();
		temperatureScreen();
	}
}

int main(){
	int userChoice, unitChoice;
	do{
		userChoice = menuScreen();
		switch(userChoice){
			case 1:
				do{
					unitChoice = phyQtyScreen();
					switch(unitChoice){
						case 1:
							lenScreen();
							break;
						case 2:
							timeScreen();
							break;
						case 3:
							speedScreen();
							break;
						case 4:
							massScreen();
							break;
						case 5:
							temperatureScreen();
							break;
					}
				} while (unitChoice != 6);
				break;
			case 2:
				currencyScreen();
				break;
		}
	} while (userChoice != 3);
	printf("\nEXITING....");
}
