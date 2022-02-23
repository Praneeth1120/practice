#include<stdio.h>
struct traveller
{
	char name[20],reservation_class[10],coach_no[3];
	int age,train_no,seat_no;
};
main()
{
	struct traveller t[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		scanf("%s%d%d%d%s%s",&t[i].name,&t[i].age,&t[i].train_no,&t[i].seat_no,&t[i].coach_no,&t[i].reservation_class);
	}
	printf("Traveller Details are \n");
	for(i=0;i<3;i++)
	{
		printf("Name is %s \nAge is %d \ntrain no is %d \nseat no is %d \ncoach no is %s \nclass is %s \n",t[i].name,t[i].age,t[i].train_no,t[i].seat_no,t[i].coach_no,t[i].reservation_class);
	}
}
