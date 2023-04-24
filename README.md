# Structures
Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure. Unlike an array, a structure can contain many different data types (int, float, char, etc.).

The following image shows the memory allocation of the structure employee that is defined in the above example.

![Screenshot 2023-04-24 195034](https://user-images.githubusercontent.com/113619312/234025299-27dc703e-719f-47b9-bd9c-4c99c10e3885.png)
Here, struct is the keyword; employee is the name of the structure; id, name, and salary are the members or fields of the structure. 

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
## __Code__
```
