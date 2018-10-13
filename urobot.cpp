#include <stdio.h>
#include <vector>

using namespace std;
int wallhorimem[10][9] =
	{{1, 1, 1, 1, 1, 1, 1, 1, 1}, //0,0   0,1
	 {0, 0, 0, 0, 0, 0, 0, 0, 0}, //1,0
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},

	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {1, 1, 1, 1, 1, 1, 1, 1, 1}};

int wallvertmem[9][10] =
	{{1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //0,0   0,1
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //1,0
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},

	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}};

int wallhori[10][9] =
	{{1, 1, 1, 1, 1, 1, 1, 1, 1}, //0,0   0,1
	 {0, 0, 0, 0, 0, 0, 1, 0, 0}, //1,0
	 {0, 0, 0, 0, 1, 0, 0, 0, 0},
	 {0, 0, 1, 0, 0, 1, 0, 1, 0},
	 {0, 0, 0, 0, 0, 1, 0, 0, 0},

	 {0, 0, 1, 0, 1, 1, 1, 0, 1},
	 {0, 0, 0, 1, 1, 1, 0, 1, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 1, 0},
	 {1, 1, 1, 1, 1, 1, 1, 1, 1}};

int wallvert[9][10] =
	{{1, 0, 0, 1, 0, 0, 1, 0, 0, 1}, //0,0   0,1
	 {1, 0, 0, 1, 1, 0, 0, 1, 0, 1}, //1,0
	 {1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	 {1, 0, 1, 1, 1, 1, 1, 0, 1, 1},

	 {1, 0, 1, 0, 1, 0, 0, 1, 1, 1},
	 {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
	 {1, 0, 0, 0, 0, 0, 1, 1, 1, 1},
	 {1, 0, 0, 0, 0, 0, 1, 1, 1, 1},
	 {1, 0, 0, 0, 0, 0, 1, 0, 0, 1}};

int car[9][9] =
	{{8, 7, 6, 5, 4, 5, 6, 7, 8}, //0,0   0,1
	 {7, 6, 5, 4, 3, 4, 5, 6, 7}, //1,0
	 {6, 5, 4, 3, 2, 3, 4, 5, 6},
	 {5, 4, 3, 2, 1, 2, 3, 4, 5},
	 {4, 3, 2, 1, 0, 1, 2, 3, 4},
	 {5, 4, 3, 2, 1, 2, 3, 4, 5},
	 {6, 5, 4, 3, 2, 3, 4, 5, 6},
	 {7, 6, 5, 4, 3, 4, 5, 6, 7},
	 {8, 7, 6, 5, 4, 5, 6, 7, 8}};
int x = 8, y = 8;
int endx = 4, endy = 4;

int car1[9][9] =
	{{16, 15, 14, 13, 12, 11, 10, 9, 8}, //0,0   0,1
	 {15, 14, 13, 12, 11, 10, 9, 8, 7},  //1,0
	 {14, 13, 12, 11, 10, 9, 8, 7, 6},
	 {13, 12, 11, 10, 9, 8, 7, 6, 5},
	 {12, 11, 10, 9, 8, 7, 6, 5, 4},
	 {11, 10, 9, 8, 7, 6, 5, 4, 3},
	 {10, 9, 8, 7, 6, 5, 4, 3, 2},
	 {9, 8, 7, 6, 5, 4, 3, 2, 1},
	 {8, 7, 6, 5, 4, 3, 2, 1, 0}};

int pattern = 0;
int direction = 0;
//#front=1 left=2  right=4  front+left+right=7
//#front+left=3 front+right=5 left+right=6

void printwall();
void checkwall();
void min2way(int a, int b);
void min3way(int a, int b, int c);
void checkpatndi();
void updatefloodfill();

int main()
{
	vector<int> n;
	while (x != endx || y != endy)
	{
		printf("%d : (%d,%d) \n", direction, x, y);
		pattern = 0;
		checkwall();
		checkpatndi();
	}
	printwall();

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			car[i][j] = car1[i][j];
		}
	}
	x = 4;
	y = 4;
	endx = 8;
	endy = 8;

	while (x != endx || y != endy)
	{
		printf("%d : (%d,%d) \n", direction, x, y);
		pattern = 0;
		checkwall();
		checkpatndi();
	}
	printwall();

	int check;
	scanf("%d", &check);
	return 0;
}

void printwall()
{
	printf("wallmap\n");
	printf(" _ _ _ _ _ _ _ _ _\n");
	for (int wallx = 0; wallx < 9; wallx++)
	{
		printf("|");
		for (int wally = 0; wally < 9; wally++)
		{
			if (wallhori[wallx + 1][wally] == 1)
			{
				printf("_");
			}
			else
			{
				printf(" ");
			}
			//printf("%d ",wallhorimem[wallx][wally]);
			if (wallvert[wallx][wally + 1] == 1)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nwall\n");
	printf(" _ _ _ _ _ _ _ _ _\n");
	for (int wallx = 0; wallx < 9; wallx++)
	{
		printf("|");
		for (int wally = 0; wally < 9; wally++)
		{
			if (wallhorimem[wallx + 1][wally] == 1)
			{
				printf("_");
			}
			else
			{
				printf(" ");
			}
			//printf("%d ",wallhorimem[wallx][wally]);
			if (wallvertmem[wallx][wally + 1] == 1)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void checkwall()
{
	switch (direction)
	{
	case 0: //north
		if (wallhori[x][y] == 1)
		{
			printf("0 : have a front wall\n");
			wallhorimem[x][y] = 1;
			pattern += 1; //#front
		}
		if (wallvert[x][y] == 1)
		{
			printf("0 : have a left wall\n");
			wallvertmem[x][y] = 1;
			pattern += 2; //#left
		}
		if (wallvert[x][y + 1] == 1)
		{
			printf("0 : have a right wall\n");
			wallvertmem[x][y + 1] = 1;
			pattern += 4; //#right
		}
		break;
	case 1: //east
		if (wallvert[x][y] == 1)
		{
			printf("1 : have a front wall\n");
			wallvertmem[x][y] = 1;
			pattern += 1; //#front
		}
		if (wallhori[x + 1][y] == 1)
		{
			printf("1 : have a left wall\n");
			wallhorimem[x + 1][y] = 1;
			pattern += 2; //#left
		}
		if (wallhori[x][y] == 1)
		{
			printf("1 : have a right wall\n");
			wallhorimem[x][y] = 1;
			pattern += 4; //#right
		}
		break;
	case 2: //west
		if (wallvert[x][y + 1] == 1)
		{
			printf("2 : have a front wall\n");
			wallvertmem[x][y + 1] = 1;
			pattern += 1; //#front
		}
		if (wallhori[x][y] == 1)
		{
			printf("2 : have a left wall\n");
			wallhorimem[x][y] = 1;
			pattern += 2; //#left
		}
		if (wallhori[x + 1][y] == 1)
		{
			printf("2 : have a right wall\n");
			wallhorimem[x + 1][y] = 1;
			pattern += 4; //#right
		}
		break;
	default: //south
		if (wallhori[x + 1][y] == 1)
		{
			printf("3 : have a front wall\n");
			wallhorimem[x + 1][y] = 1;
			pattern += 1; //#front
		}
		if (wallvert[x][y + 1] == 1)
		{
			printf("3 : have a left wall\n");
			wallvertmem[x][y + 1] = 1;
			pattern += 2; //#left
		}
		if (wallvert[x][y] == 1)
		{
			printf("3 : have a right wall\n");
			wallvertmem[x][y] = 1;
			pattern += 4; //#right
			break;
		}
	}
}

void min2way(int a, int b)
{
	if (a <= b)
	{
		switch (direction)
		{
		case 0:
			printf("0 : "); //direction = 0
			switch (pattern)
			{
			case 1:
				printf("go left\n");
				y--;
				direction = 1;
				break; //left,right
			case 2:
				printf("go front\n");
				x--;
				direction = 0;
				break; //front,right
			default:
				printf("go front\n");
				x--;
				direction = 0;
				break; //front,left
			}
			break;
		case 1:
			printf("1 : "); //direction = 1
			switch (pattern)
			{
			case 1:
				printf("go left\n");
				x++;
				direction = 3;
				break; //left,right
			case 2:
				printf("go front\n");
				y--;
				direction = 1;
				break; //front,right
			default:
				printf("go front\n");
				y--;
				direction = 1;
				break; //front,left
			}
			break;
		case 2:
			printf("2 : "); //direction = 2
			switch (pattern)
			{
			case 1:
				printf("go left\n");
				x--;
				direction = 0;
				break; //left,right
			case 2:
				printf("go front\n");
				y++;
				direction = 2;
				break; //front,right
			default:
				printf("go front\n");
				y++;
				direction = 2;
				break; //front,left
			}
			break;
		default:
			printf("3 : "); //direction = 3
			switch (pattern)
			{
			case 1:
				printf("go left\n");
				y++;
				direction = 2;
				break; //left,right
			case 2:
				printf("go front\n");
				x++;
				direction = 3;
				break; //front,right
			default:
				printf("go front\n");
				x++;
				direction = 3;
				break; //front,left
			}
			break;
		}
	}
	else
	{
		switch (direction)
		{
		case 0:
			printf("0 : "); //direction = 0
			switch (pattern)
			{
			case 1:
				printf("go right\n");
				y++;
				direction = 2;
				break; //left,right
			case 2:
				printf("go right\n");
				y++;
				direction = 2;
				break; //front,right
			default:
				printf("go left\n");
				y--;
				direction = 0;
				break; //front,left
			}
			break;
		case 1:
			printf("1 : "); //direction = 1
			switch (pattern)
			{
			case 1:
				printf("go right\n");
				x--;
				direction = 0;
				break; //left,right
			case 2:
				printf("go right\n");
				x--;
				direction = 0;
				break; //front,right
			default:
				printf("go left\n");
				x++;
				direction = 3;
				break; //front,left
			}
			break;
		case 2:
			printf("2 : "); //direction = 2
			switch (pattern)
			{
			case 1:
				printf("go right\n");
				x++;
				direction = 3;
				break; //left,right
			case 2:
				printf("go right\n");
				x++;
				direction = 3;
				break; //front,right
			default:
				printf("go left\n");
				x--;
				direction = 0;
				break; //front,left
			}
			break;
		default:
			printf("3 : "); //direction = 3
			switch (pattern)
			{
			case 1:
				printf("go right\n");
				y--;
				direction = 1;
				break; //left,right
			case 2:
				printf("go right\n");
				y--;
				direction = 1;
				break; //front,right
			default:
				printf("go left\n");
				y++;
				direction = 2;
				break; //front,left
			}
			break;
		}
	}
}

void min3way(int a, int b, int c)
{ //front,left,right
	if (a != b && a != c && b != c)
	{
		if (a < b && a < c)
		{ //go front
			switch (direction)
			{
			case 0:
				printf("0 : "); //north
				printf("go front\n");
				x--;
				direction = 0;
				break;
			case 1:
				printf("1 : "); //east
				printf("go front\n");
				y--;
				direction = 1;
				break;
			case 2:
				printf("2 : "); //west
				printf("go front\n");
				y++;
				direction = 2;
				break;
			default:
				printf("3 : "); //south
				printf("go front\n");
				x++;
				direction = 3;
				break;
			}
		}
		else if (b < a && b < c)
		{ //go left
			switch (direction)
			{
			case 0:
				printf("0 : "); //north
				printf("go left\n");
				y--;
				direction = 1;
				break;
			case 1:
				printf("1 : "); //east
				printf("go left\n");
				x++;
				direction = 3;
				break;
			case 2:
				printf("2 : "); //west
				printf("go left\n");
				x--;
				direction = 0;
				break;
			default:
				printf("3 : "); //south
				printf("go left\n");
				y++;
				direction = 2;
				break;
			}
		}
		else
		{ //go right
			switch (direction)
			{
			case 0:
				printf("0 : "); //north
				printf("go right\n");
				y++;
				direction = 2;
				break;
			case 1:
				printf("1 : "); //east
				printf("go right\n");
				x--;
				direction = 0;
				break;
			case 2:
				printf("2 : "); //west
				printf("go right\n");
				x++;
				direction = 3;
				break;
			default:
				printf("3 : "); //south
				printf("go right\n");
				y--;
				direction = 1;
				break;
			}
		}
	}
	else
	{
		switch (direction)
		{
		case 0:
			printf("0 : "); //north
			printf("go front\n");
			x--;
			direction = 0;
			break;
		case 1:
			printf("1 : "); //east
			printf("go front\n");
			y--;
			direction = 1;
			break;
		case 2:
			printf("2 : "); //west
			printf("go front\n");
			y++;
			direction = 2;
			break;
		default:
			printf("3 : "); //south
			printf("go front\n");
			x++;
			direction = 3;
			break;
		}
	}
}

void checkpatndi()
{

	switch (direction)
	{
	case 0:
		printf("0 : "); //north
		switch (pattern)
		{
		case 0:
			printf("No wall : 3way\n");
			min3way(car[x - 1][y], car[x][y - 1], car[x][y + 1]);
			break;
		case 1:
			printf("left or right : 2way\n");
			min2way(car[x][y - 1], car[x][y + 1]);
			break;
		case 2:
			printf("front or right : 2way\n");
			min2way(car[x - 1][y], car[x][y + 1]);
			break;
		case 4:
			printf("front or left : 2way\n");
			min2way(car[x - 1][y], car[x][y - 1]);
			break;
		case 3:
			printf("go right\n");
			y++;
			direction = 2;
			break; //front+left
		case 5:
			printf("go left\n");
			y--;
			direction = 1;
			break; //front+right
		case 6:
			printf("go front\n");
			x--;
			direction = 0;
			// printf("front or back : 2way\n");
			// min2way(car[x - 1][y], car[x + 1][y]);
			break; //left+right
		default:
			printf("U turn\n");
			x++;
			direction = 3;
			break; //front+left+right
		}
		break;
	case 1:
		printf("1 : "); //east
		switch (pattern)
		{
		case 0:
			printf("No wall : 3way\n");
			min3way(car[x][y - 1], car[x + 1][y], car[x - 1][y]);
			break;
		case 1:
			printf("left or right : 2way\n");
			min2way(car[x + 1][y], car[x - 1][y]);
			break;
		case 2:
			printf("front or right : 2way\n");
			min2way(car[x][y - 1], car[x - 1][y]);
			break;
		case 4:
			printf("front or left : 2way\n");
			min2way(car[x][y - 1], car[x + 1][y]);
			break;
		case 3:
			printf("go right\n");
			x--;
			direction = 0;
			break; //front+left
		case 5:
			printf("go left\n");
			x++;
			direction = 3;
			break; //front+right
		case 6:
			printf("go front\n");
			y--;
			direction = 1;
			// printf("front or back : 2way\n");
			// min2way(car[x][y - 1], car[x][y + 1]);
			break; //left+right
		default:
			printf("U turn\n");
			y++;
			direction = 2;
			break; //front+left+right
		}
		break;
	case 2:
		printf("2 : "); //west
		switch (pattern)
		{
		case 0:
			printf("No wall : 3way\n");
			min3way(car[x][y + 1], car[x - 1][y], car[x + 1][y]);
			break;
		case 1:
			printf("left or right : 2way\n");
			min2way(car[x - 1][y], car[x + 1][y]);
			break;
		case 2:
			printf("front or right : 2way\n");
			min2way(car[x][y + 1], car[x + 1][y]);
			break;
		case 4:
			printf("front or left : 2way\n");
			min2way(car[x][y + 1], car[x - 1][y]);
			break;
		case 3:
			printf("go right\n");
			x++;
			direction = 3;
			break; //front+left
		case 5:
			printf("go left\n");
			x--;
			direction = 0;
			break; //front+right
		case 6:
			printf("go front\n");
			y++;
			direction = 2;
			// printf("front or back : 2way\n");
			// min2way(car[x][y + 1], car[x][y - 1]);
			break; //left+right
		default:
			printf("U turn\n");
			y--;
			direction = 1;
			break; //front+left+right
		}
		break;
	default:
		printf("3 : "); //south
		switch (pattern)
		{
		case 0:
			printf("No wall : 3way\n");
			min3way(car[x + 1][y], car[x][y + 1], car[x][y - 1]);
			break;
		case 1:
			printf("left or right : 2way\n");
			min2way(car[x][y + 1], car[x][y - 1]);
			break;
		case 2:
			printf("front or right : 2way\n");
			min2way(car[x + 1][y], car[x][y - 1]);
			break;
		case 4:
			printf("front or left : 2way\n");
			min2way(car[x + 1][y], car[x][y + 1]);
			break;
		case 3:
			printf("go right\n");
			y--;
			direction = 1;
			break; //front+left
		case 5:
			printf("go left\n");
			y++;
			direction = 2;
			break; //front+right
		case 6:
			printf("go front\n");
			x++;
			direction = 3;
			// printf("front or back : 2way\n");
			// min2way(car[x + 1][y], car[x - 1][y]);
			break; //left+right
		default:
			printf("U turn\n");
			x--;
			direction = 0;
			break; //front+left+right
		}
		break;
	}
}
