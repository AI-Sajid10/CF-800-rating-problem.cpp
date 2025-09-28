#include <stdio.h>
#include <string.h>

// Structure to hold customer information
struct Customer
{
	char name[50];
	char phoneNumber[15];
	double usage;
	double totalBill;
};

FILE *fp;

struct Customer
	customers[100];	   // Array to store customer data
int customerCount = 0; // Variable to keep track of the
					   // number of customers
int n;


void addRecord()
{
	if (customerCount < 100)
	{
		fp = fopen("customers.txt", "r");
		fscanf(fp, "%d", &n);
		for (int i = 0; i < n; i++)
		{
			// printf("\nEnter name: ");
			fscanf(fp, " %[^\n]s", customers[customerCount].name);
			// printf("Enter phone number: ");
			fscanf(fp, "%s", customers[customerCount].phoneNumber);
			// printf("Enter usage (in minutes): ");
			fscanf(fp, "%lf", &customers[customerCount].usage);
			customers[customerCount].totalBill = customers[customerCount].usage * 0.1;
			customerCount++;
		}
		printf("\nRecord added successfully!\n");
	}
	else
	{
		printf("\nMaximum number of records reached!\n");
	}
	fclose(fp);
}
// Function to delete a customer record
void deleteRecord(char phoneNumber[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(customers[i].phoneNumber, phoneNumber) == 0)
		{
			for (int i = 0; i < n; i++)
			{
				fp = fopen("customers.txt", "w");
				fprintf(fp, "%d\n", n);
				for (int i = 0; i < n; i++)
				{	
					if (strcmp(customers[i].phoneNumber, phoneNumber) != 0){
						fprintf(fp, "%s\n%s\n%.2lf\n", customers[i].name,
							customers[i].phoneNumber,
							customers[i].usage);
					}
				}
			}
			fclose(fp);
			printf("\nRecord deleted successfully!\n");
			return;
		}
	}
	printf("\nRecord not found!\n");
}



int main()
{
	int choice;
	char phoneNumber[15];

	while (1)
	{
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			addRecord();
			break;
		
		case 2:
			printf(
				"\nEnter phone number to delete record: ");
			scanf("%s", phoneNumber);
			deleteRecord(phoneNumber);
			break;
		case 3:
			return 0;
		default:
			printf("\nInvalid choice! Please try again.\n");
		}
	}

	return 0;
}
