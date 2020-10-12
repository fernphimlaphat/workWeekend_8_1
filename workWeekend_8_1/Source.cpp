#include<stdio.h>
#include<math.h>



int num_1(int x, int y)
{
	if (x > y || x == y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

void age(int k)
{
	int a, age[100], i = 0, j,check = 0;
	do
	{	
		printf("Input age : ");
		scanf_s("%d", &a);

		if (a > 0 && a < 100)
		{
			age[i] = a;
			check++;
			i++;

		}
		else
		{
			break;
		}


	} while (check < k);

	
	for (j = 0; j <= i; j++)
	{


		if (j >= 1)
		{
			num_1(age[j], age[j-1]);
			age[j] = num_1(age[j], age[j - 1]);

			if (j == i - 1)
			{
				printf("%d\n", age[j]);

			}

			if (age[j] >= 60 && age[j] <= 100)
			{
				printf("Free all menu in the morning\n");
				break;
			}
			else
			{
				printf("Not free all menu in the morning\n");
				break;
			}

		}
	}


}




int main()
{
	int k;
	printf("Enter tourist : ");
	scanf_s("%d", &k);
	if (k == 1)
	{
		printf("Ticket is 100 baht");
	}
	else if (k >= 2 && k < 5)
	{
		age(k);
		printf("Ticket is 75 baht");

	}
	else if(k>=5)
	{
		age(k);
		printf("Ticket is 50 baht");
		
	}
	else
	{
		printf("Restart to try again");
	}

}