# Structures
Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure. Unlike an array, a structure can contain many different data types (int, float, char, etc.).

The following image shows the memory allocation of the structure employee that is defined in the above example.

![Screenshot 2023-04-24 195034](https://user-images.githubusercontent.com/113619312/234025299-27dc703e-719f-47b9-bd9c-4c99c10e3885.png)
Here, struct is the keyword; employee is the name of the structure; id, name, and salary are the members or fields of the structure. 
---
## __Syntax:__
The __struct__ keyword is used to define the structure.
```
struct structure_name   
{  
    data_type member1;  
    data_type member2;  
    .  
    .  
    data_type memeberN;  
};  
```
## __Declaring Structure Variable__
We can declare a variable for the structure so that we can access the member of the structure easily by struct keyword within main() function.
```
struct employee  
{   int id;  
    char name[50];  
    float salary;  
};  
```

## __Accessing member of the Structure__
We access the id member of p1 variable by. (member) operator.
```
p1.id  
```
---
## __Code__
```
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
```
---
## __Output__
![Screenshot 2023-04-11 161011](https://user-images.githubusercontent.com/113619312/234029187-603a27c5-1349-45c4-8dd0-e29637ea04af.png)

