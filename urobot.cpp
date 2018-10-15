
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
	 {0, 0, 0, 0, 0, 0, 0, 0, 0}, //1,0
	 {0, 0, 1, 1, 1, 1, 1, 1, 1},
	 {0, 0, 0, 1, 1, 1, 1, 1, 0},
	 {0, 0, 0, 1, 0, 0, 0, 0, 0},

	 {0, 0, 1, 0, 1, 0, 1, 0, 0},
	 {0, 0, 0, 0, 1, 0, 1, 1, 0},
	 {0, 0, 0, 1, 0, 0, 0, 1, 0},
	 {0, 0, 0, 1, 0, 0, 0, 1, 0},
	 {1, 1, 1, 1, 1, 1, 1, 1, 1}};

int wallvert[9][10] =
	{{1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //0,0   0,1
	 {1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //1,0
	 {1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
	 {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},

	 {1, 0, 1, 0, 0, 1, 0, 0, 0, 1},
	 {1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
	 {1, 0, 0, 1, 0, 1, 1, 1, 0, 1},
	 {1, 0, 0, 0, 1, 1, 1, 1, 1, 1},
	 {1, 0, 0, 1, 0, 0, 0, 0, 0, 1}};

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

int ava[9][9] =
	{{0, 0, 0, 0, 0, 0, 0, 0, 0}, //0,0   0,1
	 {0, 0, 0, 0, 0, 0, 0, 0, 0}, //1,0
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0},
	 {0, 0, 0, 0, 0, 0, 0, 0, 0}};

int car1[9][9] =
	{
		{81, 81, 81, 81, 81, 81, 81, 81, 81}, //0,0   0,1
		{81, 81, 81, 81, 81, 81, 81, 81, 81}, //1,0
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 81},
		{81, 81, 81, 81, 81, 81, 81, 81, 0}};

int car2[9][9] =
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
int pattern = 0;
int direction = 0;
//#front=1 left=2  right=4  front+left+right=7
//#front+left=3 front+right=5 left+right=6
int avalblock = 0;
int pathblock = 0;

void printcar();
void printwall();
void checkwall();
void min2way(int a, int b);
void min3way(int a, int b, int c);
void checkpatndi();
void updatefloodfill();
void checkstack();
int min2(int a, int b);
int min3(int a, int b, int c);
int min4(int a, int b, int c, int d);
void pushstack();
void changemap();
void changemap1();
void countava();
vector<int> x1;
vector<int> x2;

vector<int> y1;
vector<int> y2;

int main()
{
	//Round1
	x1.push_back(x);
	y1.push_back(y);
	while (x != endx || y != endy)
	{
		ava[x][y] = 1;
		printf("%d : (%d,%d) \n", direction, x, y);
		pattern = 0;
		checkwall();
		pushstack();
		checkstack();
		checkpatndi();
	}
	printwall();
	printcar();

	//Round2
	for (int i = 0; i < 10; i++)
	{
		changemap();
	}
	x1.clear();
	y1.clear();
	x2.clear();
	y2.clear();
	x = 4;
	y = 4;
	endx = 8;
	endy = 8;
	x1.push_back(x);
	y1.push_back(y);
	while (x != endx || y != endy)
	{
		ava[x][y] = 1;
		printf("%d : (%d,%d) \n", direction, x, y);
		pattern = 0;
		checkwall();
		pushstack();
		checkstack();
		checkpatndi();
	}
	printwall();
	printcar();
	printf("\n");

	//Round3
	x = 8;
	y = 8;
	endx = 4;
	endy = 4;
	for (int i = 0; i < 10; i++)
	{
		changemap1();
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			car[i][j] = car2[i][j];
		}
	}
	printcar();
	while (x != endx || y != endy)
	{
		printf("%d : (%d,%d) \n", direction, x, y);
		pattern = 0;
		checkwall();
		pushstack();
		checkstack();
		checkpatndi();
		pathblock += 1;
	}
	countava();
	printf("\nAva : %d , Path : %d", avalblock, pathblock);
	int check;
	scanf("%d", &check);
	return 0;
}
void countava()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (ava[i][j] == 1)
			{
				avalblock += 1;
			}
		}
	}
}
void printcar()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%2d ", car[i][j]);
		}
		printf("\n");
	}
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
				direction = 1;
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

void pushstack()
{
	switch (direction)
	{
	case 0:
		switch (pattern)
		{
		case 0: //no wall 3 way
			x1.push_back(x - 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y - 1);
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 1: //2 way left,right
			x1.push_back(x);
			y1.push_back(y - 1);
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 2: //2 way front,right
			x1.push_back(x - 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 4: //2 way front,left
			x1.push_back(x - 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 3: //right
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 5: //left
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 6: // front
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		default: //U turn
			break;
		}
		break;
	case 1:
		switch (pattern)
		{
		case 0: //no wall 3 way
			x1.push_back(x);
			y1.push_back(y - 1);
			x1.push_back(x + 1);
			y1.push_back(y);
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 1: //2 way left,right
			x1.push_back(x + 1);
			y1.push_back(y);
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 2: //2 way front,right
			x1.push_back(x);
			y1.push_back(y - 1);
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 4: //2 way front,left
			x1.push_back(x);
			y1.push_back(y - 1);
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 3: //right
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 5: //left
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 6: // front
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		default: //U turn
			break;
		}
		break;
	case 2:
		switch (pattern)
		{
		case 0: //no wall 3 way
			x1.push_back(x);
			y1.push_back(y + 1);
			x1.push_back(x - 1);
			y1.push_back(y);
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 1: //2 way left,right
			x1.push_back(x - 1);
			y1.push_back(y);
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 2: //2 way front,right
			x1.push_back(x);
			y1.push_back(y + 1);
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 4: //2 way front,left
			x1.push_back(x);
			y1.push_back(y + 1);
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 3: //right
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		case 5: //left
			x1.push_back(x - 1);
			y1.push_back(y);
			break;
		case 6: // front
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		default: //U turn
			break;
		}
		break;
	default:
		switch (pattern)
		{
		case 0: //no wall 3 way
			x1.push_back(x + 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y + 1);
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 1: //2 way left,right
			x1.push_back(x);
			y1.push_back(y + 1);
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 2: //2 way front,right
			x1.push_back(x + 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 4: //2 way front,left
			x1.push_back(x + 1);
			y1.push_back(y);
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 3: //right
			x1.push_back(x);
			y1.push_back(y - 1);
			break;
		case 5: //left
			x1.push_back(x);
			y1.push_back(y + 1);
			break;
		case 6: // front
			x1.push_back(x + 1);
			y1.push_back(y);
			break;
		default: //U turn
			break;
		}
		break;
	}
}

void changemap()
{
	int checkw = 0;
	for (int buffery = 8; buffery >= 0; buffery--)
	{
		for (int bufferx = 8; bufferx >= 0; bufferx--)
		{
			checkw = 0;
			if (wallhorimem[bufferx][buffery] == 1)
			{
				checkw += 1; //#front
			}
			if (wallvertmem[bufferx][buffery] == 1)
			{
				checkw += 2; //#left
			}
			if (wallvertmem[bufferx][buffery + 1] == 1)
			{
				checkw += 4; //#right
			}
			if (wallhorimem[bufferx + 1][buffery] == 1)
			{
				checkw += 8; //#front
			}
			switch (checkw)
			{
			case 0: //front,left,right,back
				car1[bufferx][buffery] = min4(car1[bufferx - 1][buffery], car1[bufferx][buffery - 1],
											  car1[bufferx][buffery + 1], car1[bufferx + 1][buffery]);
				break;
			case 1: //left,right,back
				car1[bufferx][buffery] = min3(car1[bufferx][buffery - 1], car1[bufferx][buffery + 1], car1[bufferx + 1][buffery]);
				break;
			case 2: //front,right,back
				car1[bufferx][buffery] = min3(car1[bufferx - 1][buffery], car1[bufferx][buffery + 1], car1[bufferx + 1][buffery]);
				break;
			case 3: //back,right
				car1[bufferx][buffery] = min2(car1[bufferx][buffery + 1], car1[bufferx + 1][buffery]);
				break;
			case 4: //front,left,back
				car1[bufferx][buffery] = min3(car1[bufferx - 1][buffery], car1[bufferx][buffery - 1], car1[bufferx + 1][buffery]);
				break;
			case 5: //left,back
				car1[bufferx][buffery] = min2(car1[bufferx][buffery - 1], car1[bufferx + 1][buffery]);
				break;
			case 6: //front,back
				car1[bufferx][buffery] = min2(car1[bufferx - 1][buffery], car1[bufferx + 1][buffery]);
				break;
			case 7: //back
				car1[bufferx][buffery] = car1[bufferx + 1][buffery] + 1;
				break;
			case 8: //front,left,right
				car1[bufferx][buffery] = min3(car1[bufferx - 1][buffery], car1[bufferx][buffery - 1], car1[bufferx][buffery + 1]);
				break;
			case 9: //left,right
				car1[bufferx][buffery] = min2(car1[bufferx][buffery - 1], car1[bufferx][buffery + 1]);
				break;
			case 10: //front,right
				car1[bufferx][buffery] = min2(car1[bufferx - 1][buffery], car1[bufferx][buffery + 1]);
				break;
			case 11: //right
				car1[bufferx][buffery] = car1[bufferx][buffery + 1] + 1;
				break;
			case 12: //front,left
				car1[bufferx][buffery] = min2(car1[bufferx - 1][buffery], car1[bufferx][buffery - 1]);
				break;
			case 13: //left
				car1[bufferx][buffery] = car1[bufferx][buffery - 1] + 1;
				break;
			case 14: //front
				car1[bufferx][buffery] = car1[bufferx - 1][buffery] + 1;
				break;
			default: //no
				break;
			}
			if (bufferx == 8 && buffery == 8)
			{
				car1[8][8] = 0;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			car[i][j] = car1[i][j];
		}
	}
}

void changemap1()
{
	int checkw = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			checkw = 0;
			if (wallhorimem[i][j] == 1)
			{
				checkw += 1; //#front
			}
			if (wallvertmem[i][j] == 1)
			{
				checkw += 2; //#left
			}
			if (wallvertmem[i][j + 1] == 1)
			{
				checkw += 4; //#right
			}
			if (wallhorimem[i + 1][j] == 1)
			{
				checkw += 8; //#front
			}
			switch (checkw)
			{
			case 0: //front,left,right,back
				car2[i][j] = min4(car2[i - 1][j], car2[i][j - 1],
								  car2[i][j + 1], car2[i + 1][j]);
				break;
			case 1: //left,right,back
				car2[i][j] = min3(car2[i][j - 1], car2[i][j + 1], car2[i + 1][j]);
				break;
			case 2: //front,right,back
				car2[i][j] = min3(car2[i - 1][j], car2[i][j + 1], car2[i + 1][j]);
				break;
			case 3: //back,right
				car2[i][j] = min2(car2[i][j + 1], car2[i + 1][j]);
				break;
			case 4: //front,left,back
				car2[i][j] = min3(car2[i - 1][j], car2[i][j - 1], car2[i + 1][j]);
				break;
			case 5: //left,back
				car2[i][j] = min2(car2[i][j - 1], car2[i + 1][j]);
				break;
			case 6: //front,back
				car2[i][j] = min2(car2[i - 1][j], car2[i + 1][j]);
				break;
			case 7: //back
				car2[i][j] = car2[i + 1][j] + 1;
				break;
			case 8: //front,left,right
				car2[i][j] = min3(car2[i - 1][j], car2[i][j - 1], car2[i][j + 1]);
				break;
			case 9: //left,right
				car2[i][j] = min2(car2[i][j - 1], car2[i][j + 1]);
				break;
			case 10: //front,right
				car2[i][j] = min2(car2[i - 1][j], car2[i][j + 1]);
				break;
			case 11: //right
				car2[i][j] = car2[i][j + 1] + 1;
				break;
			case 12: //front,left
				car2[i][j] = min2(car2[i - 1][j], car2[i][j - 1]);
				break;
			case 13: //left
				car2[i][j] = car2[i][j - 1] + 1;
				break;
			case 14: //front
				car2[i][j] = car2[i - 1][j] + 1;
				break;
			default: //no
				car2[i][j] = 81;
				break;
			}
			if (i == 4 && j == 4)
			{
				car2[4][4] = 0;
			}
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

void checkstack()
{
	int bufferx = 0;
	int buffery = 0;
	int checkw = 0;
	while (!x1.empty() && !y1.empty())
	{
		checkw = 0;
		bufferx = x1.back();
		buffery = y1.back();
		if (bufferx == endx && buffery == endy)
		{
			break;
		}
		x1.pop_back();
		y1.pop_back();
		x2.push_back(bufferx);
		y2.push_back(buffery);
		printf("(%d,%d) ", bufferx, buffery);
		if (wallhorimem[bufferx][buffery] == 1)
		{
			printf("*front ");
			checkw += 1; //#front
		}
		if (wallvertmem[bufferx][buffery] == 1)
		{
			printf("*left ");
			checkw += 2; //#left
		}
		if (wallvertmem[bufferx][buffery + 1] == 1)
		{
			printf("*right ");
			checkw += 4; //#right
		}
		if (wallhorimem[bufferx + 1][buffery] == 1)
		{
			printf("*back ");
			checkw += 8; //#front
		}
		printf("\n");
		switch (checkw)
		{
		case 0: //front,left,right,back
			car[bufferx][buffery] = min4(car[bufferx - 1][buffery], car[bufferx][buffery - 1], car[bufferx][buffery + 1], car[bufferx + 1][buffery]);
			break;
		case 1: //left,right,back
			car[bufferx][buffery] = min3(car[bufferx][buffery - 1], car[bufferx][buffery + 1], car[bufferx + 1][buffery]);
			break;
		case 2: //front,right,back
			car[bufferx][buffery] = min3(car[bufferx - 1][buffery], car[bufferx][buffery + 1], car[bufferx + 1][buffery]);
			break;
		case 3: //back,right
			car[bufferx][buffery] = min2(car[bufferx][buffery + 1], car[bufferx + 1][buffery]);
			break;
		case 4: //front,left,back
			car[bufferx][buffery] = min3(car[bufferx - 1][buffery], car[bufferx][buffery - 1], car[bufferx + 1][buffery]);
			break;
		case 5: //left,back
			car[bufferx][buffery] = min2(car[bufferx][buffery - 1], car[bufferx + 1][buffery]);
			break;
		case 6: //front,back
			car[bufferx][buffery] = min2(car[bufferx - 1][buffery], car[bufferx + 1][buffery]);
			break;
		case 7: //back
			car[bufferx][buffery] = car[bufferx + 1][buffery] + 1;
			break;
		case 8: //front,left,right
			car[bufferx][buffery] = min3(car[bufferx - 1][buffery], car[bufferx][buffery - 1], car[bufferx][buffery + 1]);
			break;
		case 9: //left,right
			car[bufferx][buffery] = min2(car[bufferx][buffery - 1], car[bufferx][buffery + 1]);
			break;
		case 10: //front,right
			car[bufferx][buffery] = min2(car[bufferx - 1][buffery], car[bufferx][buffery + 1]);
			break;
		case 11: //right
			car[bufferx][buffery] = car[bufferx][buffery + 1] + 1;
			break;
		case 12: //front,left
			car[bufferx][buffery] = min2(car[bufferx - 1][buffery], car[bufferx][buffery - 1]);
			break;
		case 13: //left
			car[bufferx][buffery] = car[bufferx][buffery - 1] + 1;
			break;
		case 14: //front
			car[bufferx][buffery] = car[bufferx - 1][buffery] + 1;
			break;
		default: //no
			break;
		}
	}

	while (!x2.empty() && !y2.empty())
	{
		if (bufferx == endx && buffery == endy)
		{
			break;
		}
		bufferx = x2.back();
		buffery = y2.back();
		x2.pop_back();
		y2.pop_back();
		x1.push_back(bufferx);
		y1.push_back(buffery);
	}
}

int min2(int a, int b)
{
	if (a < b)
	{
		return a + 1;
	}
	else
	{
		return b + 1;
	}
}
int min3(int a, int b, int c)
{
	if (((a < b) && (a < c)) || ((a == c) && (a < b)) || ((a == b) && (a < c)))
	{
		return a + 1;
	}
	else if ((b < a) && (b < c) || ((b == c) && (b < a)))
	{
		return b + 1;
	}
	else if ((c < a) && (c < b))
	{
		return c + 1;
	}
	else
	{
		return a + 1;
	}
}
int min4(int a, int b, int c, int d)
{
	if (((a < b) && (a < c) && (a < d)) || ((a == b) && (a < c) && (a < d)) || ((a == c) && (a < b) && (a < d)) || ((a == d) && (a < b) && (a < c)))
	{
		return a + 1;
	}
	else if (((b < a) && (b < c) && (b < d)) || ((b == c) && (b < a) && (b < d)) || ((b == d) && (b < a) && (b < c)))
	{
		return b + 1;
	}
	else if ((c < a) && (c < b) && (c < d) || ((c == d) && (c < a) && (c < b)))
	{
		return c + 1;
	}
	else if ((d < a) && (d < b) && (d < c))
	{
		return d + 1;
	}
	else
	{
		return a + 1;
	}
}
