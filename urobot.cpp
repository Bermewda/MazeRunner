#include<stdio.h>

int wallmem[7][7] = {{1,1,1, 1 ,1,1,1},
					 {1,0,0, 0 ,0,0,1},
					 {1,0,1, 1 ,1,0,1},
					 {1,0,0, 0 ,1,0,1},
					 {1,0,1, 1 ,1,0,1},
					 {1,0,0, 0 ,0,0,1},
					 {1,1,1, 1 ,1,1,1},
					 }

int wallhorimem[4][3] = {{1,1,1},   //0,0   0,1   0,2
		               {0,0,0},   //1,0   1,1   1,2
		               {0,0,0},   //2,0   2,1   2,2
		               {1,1,1}};   //3,0   3,1   3,2
            
int wallvertmem[3][4] = {{1,0,0,1},   //0,0   0,1   0,2   0,3
		               {1,0,0,1},   //1,0   1,1   1,2   1,3
		               {1,0,0,1}};   //2,0   2,1   2,2   2,3
//  _ _ _
// |  _  |
// | | | |
// |_ _|_| mappppp
int wallhori[4][3] = {{1,1,1},   //0,0   0,1   0,2
		              {0,1,0},   //1,0   1,1   1,2
		              {0,1,0},   //2,0   2,1   2,2
		              {1,1,1}};   //3,0   3,1   3,2
            
int wallvert[3][4] = {{1,0,0,1},   //0,0   0,1   0,2   0,3
		              {1,0,1,1},   //1,0   1,1   1,2   1,3
		              {1,0,0,1}};   //2,0   2,1   2,2   2,3
            
int car[3][3] = {{2,1,2},   //0,0   0,1   0,2
		        {1,0,1},   //1,0   1,1   1,2*
		        {2,1,2}};   //2,0   2,1   2,2
int x=2,y=2;
int endx=1,endy=1;
int pattern = 0;
int direction = 0;
//#front=1 left=2  right=4  front+left+right=7
//#front+left=3 front+right=5 left+right=6
void printwall();
void checkdirection();
void min2way(int a,int b);
void checkpatndi();

int main(){
	// int count=0;
	while(x!=endx||y!=endy){
		printf("%d : (%d,%d) \n",direction,x,y);
		pattern=0;
		checkdirection();
		checkpatndi();
		// count++;
	}
	printwall();
	

	int check;
	scanf("%d",&check);
	return 0;
}

void printwall(){
	printf("wallhori\n");
	for(int wallx=0;wallx<4;wallx++){
		for(int wally=0;wally<3;wally++){
		printf("%d ",wallhorimem[wallx][wally]);
	}
	printf("\n");
	}
	printf("wallvert\n");
	for(int wallx=0;wallx<3;wallx++){
		for(int wally=0;wally<4;wally++){
		printf("%d ",wallvertmem[wallx][wally]);
	}
	printf("\n");
	}
}

void checkdirection(){
	switch(direction){
		case 0 : printf("0 : ");//north
				if(wallhori[x][y] == 1) {
					printf("have a front wall\n");
					wallhorimem[x][y] = 1;
					pattern+=1 ;   //#front
				}
				if(wallvert[x][y] == 1){
					printf("have a left wall\n");
					wallvertmem[x][y] = 1;
					pattern+=2 ;   //#left
				}
				if(wallvert[x][y+1] == 1){
					printf("have a right wall\n");
					wallvertmem[x][y+1] = 1;
					pattern+=4 ;   //#right 
				} break;
		case 1 : printf("1 : ");//east
				if(wallvert[x][y] == 1) {
					printf("have a front wall\n");
					wallvertmem[x][y] = 1;
					pattern+=1 ;   //#front
				}
				if(wallhori[x+1][y] == 1){
					printf("have a left wall\n");
					wallhorimem[x+1][y] = 1;
					pattern+=2 ;   //#left
				}
				if(wallhori[x][y] == 1){
					printf("have a right wall\n");
					wallhorimem[x][y] = 1;
					pattern+=4 ;   //#right 
				} break;
		case 2 : printf("2 : ");//west
				if(wallvert[x][y+1] == 1) {
					printf("have a front wall\n");
					wallvertmem[x][y+1] = 1;
					pattern+=1 ;   //#front
				}
				if(wallhori[x][y] == 1){
					printf("have a left wall\n");
					wallhorimem[x][y] = 1;
					pattern+=2 ;   //#left
				}
				if(wallhori[x+1][y] == 1){
					printf("have a right wall\n");
					wallhorimem[x+1][y] = 1;
					pattern+=4 ;   //#right 
				} break;
		default	: printf("3 : ");//south
				if(wallhori[x+1][y] == 1) {
					printf("have a front wall\n");
					wallhorimem[x][y] = 1;
					pattern+=1 ;   //#front
				}
				if(wallvert[x][y+1] == 1){
					printf("have a left wall\n");
					wallvertmem[x][y+1] = 1;
					pattern+=2 ;   //#left
				}
				if(wallvert[x][y] == 1){
					printf("have a right wall\n");
					wallvertmem[x][y] = 1;
					pattern+=4 ;   //#right 
				} break;	
	}	
}

void min2way(int a,int b){
	if(a<=b){		
		switch(direction){
			case 0:		//direction = 0
				switch(pattern){
					case 1: printf("go left\n");	 y--;	direction = 1;	break;//left,right
					case 2: printf("go front\n");	 x--;	direction = 0;	break;//front,right
					default: printf("go front\n");	 x--;	direction = 0;	break;//front,left
				}break;
			case 1:		//direction = 1
				switch(pattern){
					case 1: printf("go left\n");	 x++;	direction = 3;	break;//left,right
					case 2: printf("go front\n");	 y--;	direction = 1;	break;//front,right
					default: printf("go front\n");	 y--;	direction = 1;	break;//front,left
				}break;
			case 2:		//direction = 2
				switch(pattern){
					case 1: printf("go left\n");	 x--;	direction = 0;	break;//left,right
					case 2: printf("go front\n");	 y++;	direction = 2;	break;//front,right
					default: printf("go front\n");	 y++;	direction = 2;	break;//front,left
				}break;
			default:		//direction = 3
				switch(pattern){
					case 1: printf("go left\n");	 y++;	direction = 2;	break;//left,right
					case 2: printf("go front\n");	 x++;	direction = 3;	break;//front,right
					default: printf("go front\n");	 x++;	direction = 3;	break;//front,left
				}break;
		}
		
	}else {
		switch(direction){
			case 0:		//direction = 0
				switch(pattern){
					case 1: printf("go right\n");	 y++;	direction = 2;	break;//left,right
					case 2: printf("go right\n");	 y++;	direction = 2;	break;//front,right
					default: printf("go left\n");	 y--;	direction = 0;	break;//front,left
				}break;
			case 1:		//direction = 1
				switch(pattern){
					case 1: printf("go right\n");	 x--;	direction = 0;	break;//left,right
					case 2: printf("go right\n");	 x--;	direction = 0;	break;//front,right
					default: printf("go left\n");	 x++;	direction = 3;	break;//front,left
				}break;
			case 2:		//direction = 2
				switch(pattern){
					case 1: printf("go right\n");	 x++;	direction = 3;	break;//left,right
					case 2: printf("go right\n");	 x++;	direction = 3;	break;//front,right
					default: printf("go left\n");	 x--;	direction = 0;	break;//front,left
				}break;
			default:		//direction = 3
				switch(pattern){
					case 1: printf("go right\n");	 y--;	direction = 1;	break;//left,right
					case 2: printf("go right\n");	 y--;	direction = 1;	break;//front,right
					default: printf("go left\n");	 y++;	direction = 2;	break;//front,left
				}break;
		}
	}
}

void checkpatndi(){
	switch(direction){
		case 0: printf("0 : ");//direction = 0
			switch(pattern){
				case 0: printf("No wall : 3way\n");
				
				case 1: printf("left or right : 2way\n");		min2way(car[x][y-1],car[x][y+1]);break; 
				case 2: printf("front or right : 2way\n");		min2way(car[x-1][y],car[x][y+1]);break;						
				case 4: printf("front or left : 2way\n");		min2way(car[x-1][y],car[x][y-1]);break;
				case 3: printf("go right\n"); 					y++;	direction = 2;break;//front+left
				case 5: printf("go left\n"); 					y--;	direction = 1;break;//front+right
				case 6: printf("go front\n"); 					x--;	direction = 0;break;//left+right
				default:  printf("U turn\n"); 					x++;	direction = 3;break;//front+left+right
			}break;
		case 1:	printf("1 : ");//direction = 1
			switch(pattern){
				case 0: printf("No wall : 3way\n");
				
				case 1: printf("left or right : 2way\n");		min2way(car[x+1][y],car[x-1][y]);break; 
				case 2: printf("front or right : 2way\n");		min2way(car[x][y-1],car[x-1][y]);break;						
				case 4: printf("front or left : 2way\n");		min2way(car[x][y-1],car[x+1][y]);break;
				case 3: printf("go right\n"); 					x--;	direction = 0; 	break;//front+left 
				case 5: printf("go left\n"); 					x++;	direction = 3; 	break;//front+right
				case 6: printf("go front\n"); 					y--;	direction = 1; 	break;//left+right
				default:  printf("U turn\n"); 					y++;	direction = 2; 	break;//front+left+right
			}break;
		case 2:	printf("2 : ");//direction = 2
			switch(pattern){
				case 0: printf("No wall : 3way\n");
				
				case 1: printf("left or right : 2way\n");		min2way(car[x-1][y],car[x+1][y]);break; 
				case 2: printf("front or right : 2way\n");		min2way(car[x][y+1],car[x+1][y]);break;						
				case 4: printf("front or left : 2way\n");		min2way(car[x][y+1],car[x-1][y]);break;
				case 3: printf("go right\n"); 					x++;	direction = 3; 	break;//front+left
				case 5: printf("go left\n"); 					x--;	direction = 0; 	break;//front+right
				case 6: printf("go front\n"); 					y++;	direction = 2; 	break;//left+right
				default:  printf("U turn\n"); 					y--;	direction = 1; 	break;//front+left+right
			}break;
		default: printf("3 : ");//direction = 3
			switch(pattern){
				case 0: printf("No wall : 3way\n");
				
				case 1: printf("left or right : 2way\n");		min2way(car[x][y+1],car[x][y-1]);break; 
				case 2: printf("front or right : 2way\n");		min2way(car[x+1][y],car[x][y-1]);break;						
				case 4: printf("front or left : 2way\n");		min2way(car[x+1][y],car[x][y+1]);break;
				case 3: printf("go right\n"); 					y--;	direction = 1; 	break;//front+left
				case 5: printf("go left\n"); 					y++;	direction = 2; 	break;//front+right
				case 6: printf("go front\n"); 					x++;	direction = 3; 	break;//left+right
				default:  printf("U turn\n"); 					x--;	direction = 0; 	break;//front+left+right
			}break;
	}
}

