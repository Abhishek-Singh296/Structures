#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Car_Details
{
	char company[20];
	char model[20];
	int manufacturing_year;
	float onroad_price;
	char category[8];
};
int main() {
	int i;
	struct Car_Details v[4]={"BMW","X7",2019,8500000,"SUV","Audi","Q8",2019,4500000,"Mini","Mercedes Benz","S-Class",2020,9500000,"Sedan","Range Rover","Defender",2022,22500000,"SUV"};
	
	for(i=0;i<4;i++){
	
	
		printf("Company: %s\n",&v[i].company);
		printf("Model: %s\n",&v[i].model);
		printf("Manufacturing Year: %d\n",&v[i].manufacturing_year);
		printf("Onroad Price: %f\n",&v[i].onroad_price);
		printf("Category: %s\n",&v[i].category);
		printf("\n");
	
	}

	
	//strcyp(v.company,"BMW");
	//v.company[20]="BMW";
	//strcyp(v.model,"X7");
	//v.model[20]="X7";
	//printf("Model: %s\n",v.model);
	
	//v.manufacturing_year=2019;
	//printf("Manufacturing Year: %d\n",v.manufacturing_year);
	
	//v.onroad_price=8500000;
	//printf("Onroad Price: %f\n",v.onroad_price);
	
	//strcyp(v.category,"SUV");
	//v.category[8]="SUV";
	//printf("Category: %s\n",v.category);
	
	return 0;
}

