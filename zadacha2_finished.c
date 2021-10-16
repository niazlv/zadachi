#include "stdio.h"
//т.к векторов в СИ как таковых нет, то создадим свой тип данных.
typedef	struct s_vec2{	//определим структуру s_vec2 произвольное название структуры, можно обойтись без него
	int 	x;
	int	y;
} vec2;			//к данному типу мы можем обратиться через это название

vec2	add(vec2 a, vec2 b)	//создадим функцию высчитывания векторов
{
	vec2 ab;
	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	return (ab);
}

int	main()
{
	vec2	a;
	vec2	b;
	vec2	ab;
	vec2	bc;
	vec2	first;
vec2 second;
	int	angle;
	int	temp;
	int	n;
	int	t;
	
	t = 0;

	scanf("%d", &n);	//scanf("шаблон ввода данных", указатель на переменную в которую записываем);
	
 if (n >= 3)
	{
		for (int i = 0; i < n-2; i++)
		{
			if (i == 0)
			{
				scanf("%d %d", &a.x, &a.y);	//	a
				scanf("%d %d", &b.x, &b.y);	//	b
				//Можно было создать конструктор в стуктуре, который бы сам вычислял вектор вектора, но это слишком сложно обьяснить
				ab = add(a,b);			//	ab
				first = a;			//	ab
second = ab;
			}
			scanf("%d %d", &a.x, &a.y);		//	c
			bc = add(b, a);				//	bc = b - c
			b = a;					//	b = c
			/*вычислить выпуклый ли многоугольник просто.
		 	*Если одно ребро многоугольника соответствует вектору AB, а следующее за ним ребро соответствует вектору BC, то направление поворота в этой паре последовательных ребер будет задаваться знаком выражения

		 	AB.x * BC.y - AB.y * BC.x

			 Для поворота налево это значение будет положительным, а для поворота направо - отрицательным (я предполагаю, что ось Y направлена вверх). Нулевое значение означает, что ребра коллинеарны.
			*/
    printf("ab=%d:%d,bc=%d:%d ",ab.x, ab.y,bc.x, bc.y);
			angle = (ab.x * bc.y) - (ab.y * bc.x);
    printf("%d\n", angle);
			if (i != 0 && temp * angle < 0)		//нам требуется, чтобы мы постоянно поворачивали лишь в одну сторону, а значит чтобы знак числа был одним и тем же. В ином случае мы тикаем ошибкой t = 1
				t = 1;
			temp = angle;
			ab = bc;
		}
 first = add(a, first);
		angle = (ab.x * first.y) - (ab.y * first.x);
printf("ab=%d:%d,bc=%d:%d ",ab.x, ab.y,first.x, first.y);
printf("%d\n",angle);
		if (temp * angle < 0)
			t = 1;
temp = angle;
angle = (first.x * second.y) - (first.y * second.x);
printf("ab=%d:%d,bc=%d:%d ",first.x, first.y, second.x, second.y);
printf("%d\n",angle);
if (temp *angle < 0)
    t = 1;
		if (t == 1)
			printf("No");
		else
			printf("Yes");
	}
	return (0);
}
    