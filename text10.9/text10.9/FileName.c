
# include <stdio.h>

int main()
{
	//char add;
	do
	{
		printf("请输入你喜欢角色的年龄\n");
		int age=0;
		int a = 0;
		
		if ((scanf("%d", &age)) != 1)
		{
			printf("输入无效，请输入一个数字\n");
			while (getchar() != '\n'); // 清空输入缓冲区
			//scanf(" %c", &add);

		}
		else
		{
			if (age >= 18)
			{
				printf("回去吧，你太老了\n");
			}
			else if (age >= 0)
			{				
					while (age < 18)
					{
						printf("？！电电！？\n");
						age++;
						a++;
					}
					printf("当前电量为%d\n", a);
				}
			else if (age < 0)
			{
					while (age < 0)
					{
						printf("？？？\n");
						age++;
					}
			}
		}
			//printf("按下a继续\n");
			//scanf(" %c", &add);
	}//while (add == 'a');
	while (1);

	return 0;
}
