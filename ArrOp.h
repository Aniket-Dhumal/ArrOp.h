/*Aniket-Dhumal/LICENSE is licensed under the

GNU General Public License v3.0
Permissions of this strong copyleft license are conditioned on making available 
complete source code of licensed works
 and modifications, which include larger works using a licensed work, 
 under the same license. Copyright and license notices must be preserved. 
 Contributors provide an express grant of patent rights.

Permissions
 Commercial use
 Modification
 Distribution
 Patent use
 Private use
 
 
Limitations
 Liability
 Warranty
 
 
Conditions
 License and copyright notice
 State changes
 Disclose source
 Same license
 
 We are not responsible if this software affects on your system
 -Aniket Dhumal*/


#include <stdio.h> 
//Declaring Variables.   
int ARRAYINDEX;
int ARRAYSIZE;
int ELEMENT;
float FLOATELEMENT;
char CHARELEMENT;
int POSITION;

//Pinting Arrays
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to print  integer array
    DisplayIntArr(int ARRAY[],int ARRAYSIZE) {
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ++ARRAYINDEX) {
        printf("\nElement no. %d in Array is %d\n",ARRAYINDEX+1,ARRAY[ARRAYINDEX]);
		}
}
//Function to print Float array  
   DisplayFloatArr(float ARRAY[],int ARRAYSIZE) {
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ++ARRAYINDEX) {
        printf("\nElement no. %d in Array is %f\n",ARRAYINDEX+1,ARRAY[ARRAYINDEX]);
    }
}

//Function to print Char array
   DisplayCharArr(char ARRAY[],int ARRAYSIZE) {
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ++ARRAYINDEX) {
        printf("\nElement no. %d in Array is %c\n",ARRAYINDEX+1,ARRAY[ARRAYINDEX]);
    }
}

//Inserting element in Array.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

//Function to insert in an integer type array
InsertinIntArr(int ARRAY[],int ARRAYSIZE)
{
	// element to be inserted
	printf("Enter the value you want to enter");
	scanf("%d",&ELEMENT);

	// position at which element
	// is to be inserted
	printf("Enter the position where you want to enter element");
	scanf("%d",&POSITION);

	// increase the array size by 1
	ARRAYSIZE++;

	// shift elements forward
	for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= POSITION; ARRAYINDEX--)
		ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX - 1];

	// insert x at pos
	ARRAY[POSITION - 1] = ELEMENT;

	// print the updated array notification
	printf("Element %d inserted at Position %d Successfully",ELEMENT,POSITION);
	
}


//Function to insert in an float type array


InsertinFloatArr(float ARRAY[],int ARRAYSIZE)
{
	// element to be inserted
	printf("Enter the value you want to enter");
	scanf("%f",&FLOATELEMENT);

	// position at which element
	// is to be inserted
	printf("Enter the position where you want to enter element");
	scanf("%d",&POSITION);

	// increase the array size by 1
	ARRAYSIZE++;

	// shift elements forward
	for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= POSITION; ARRAYINDEX--)
		ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX - 1];

	// insert x at pos
	ARRAY[POSITION - 1] = FLOATELEMENT;

	// print the updated array notification
	printf("Element %f inserted at Position %d Successfully",FLOATELEMENT,POSITION);
	
}

//function to insert in an Charachter Array

InsertinCharArr(char ARRAY[],int ARRAYSIZE)
{
	// element to be inserted
	printf("Enter the value you want to enter");
	scanf("%c",&CHARELEMENT);

	// position at which element
	// is to be inserted
	printf("Enter the position where you want to enter element");
	scanf("%d",&POSITION);

	// increase the array size by 1
	ARRAYSIZE++;

	// shift elements forward
	for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= POSITION; ARRAYINDEX--)
		ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX - 1];

	// insert x at pos
	ARRAY[POSITION - 1] = CHARELEMENT;

	// print the updated array notification
	printf("Element %c inserted at Position %d Successfully",CHARELEMENT,POSITION);
	
}

//Deleting elements from Array.
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

//Function to delete element from integer array
 DeleteIntArr(int ARRAY[],int ARRAYSIZE){
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &POSITION);
    
    if(POSITION >= ARRAYSIZE+1)    
    printf("Deletion not possible. Element does not exist\n");
    
    else
    {    
        for ( ARRAYINDEX = POSITION - 1 ; ARRAYINDEX < ARRAYSIZE - 1 ; ARRAYINDEX++ ) 
        ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX+1];  
		}
		printf("Element Deleted Successfully");
	}
	
	
	//Function to delete element from flote array
 DeleteFloatArr(float ARRAY[],int ARRAYSIZE){
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &POSITION);
    
    if(POSITION >= ARRAYSIZE+1)    
    printf("Deletion not possible. Element does not exist\n");
    
    else
    {    
        for ( ARRAYINDEX = POSITION - 1 ; ARRAYINDEX < ARRAYSIZE - 1 ; ARRAYINDEX++ ) 
        ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX+1];  
		}
		printf("Element Deleted Successfully");
	}
	
	
	//Function to delete element from Character array
 DeleteCharArr(char ARRAY[],int ARRAYSIZE){
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &POSITION);
    
    if(POSITION >= ARRAYSIZE+1)    
    printf("Deletion not possible. Element does not exist\n");
    
    else
    {    
        for ( ARRAYINDEX = POSITION - 1 ; ARRAYINDEX < ARRAYSIZE - 1 ; ARRAYINDEX++ ) 
        ARRAY[ARRAYINDEX] = ARRAY[ARRAYINDEX+1];  
		}
		printf("Element Deleted Successfully");
	}
	
//Reversing an Array.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

// function to reverse integer array

ReverseIntArr(int ARRAY[],int ARRAYSIZE)    
{        
    printf("Original array: \n"); 
	   
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ARRAYINDEX++) {     
        printf("%d ",ARRAY[ARRAYINDEX]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= 0; ARRAYINDEX--) {     
        printf("%d ", ARRAY[ARRAYINDEX]);     
    }     
     
}    



// function to reverse float array

ReverseFloatArr(float ARRAY[],int ARRAYSIZE)    
{        
    printf("Original array: \n"); 
	   
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ARRAYINDEX++) {     
        printf("%f ",ARRAY[ARRAYINDEX]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= 0; ARRAYINDEX--) {     
        printf("%f ", ARRAY[ARRAYINDEX]);     
    }     
     
}    



// function to reverse character array

ReverseCharArr(char ARRAY[],int ARRAYSIZE)    
{        
    printf("Original array: \n"); 
	   
    for(ARRAYINDEX = 0; ARRAYINDEX < ARRAYSIZE; ARRAYINDEX++) {     
        printf("%c ",ARRAY[ARRAYINDEX]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (ARRAYINDEX = ARRAYSIZE-1; ARRAYINDEX >= 0; ARRAYINDEX--) {     
        printf("%c ", ARRAY[ARRAYINDEX]);     
    }     
     
}    
